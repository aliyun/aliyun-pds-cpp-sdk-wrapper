/*
 * Copyright 2009-2021 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "./config.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <alibabacloud/pdswrapper/ClientConfiguration.h>
#include <alibabacloud/pdswrapper/PdsClient.h>
#include <alibabacloud/pdswrapper/DirCreateRequest.h>
#include <alibabacloud/pdswrapper/DirCreateResult.h>
#include <alibabacloud/pdswrapper/DirRenameRequest.h>
#include <alibabacloud/pdswrapper/DirRenameResult.h>
#include <alibabacloud/pdswrapper/DirTrashRequest.h>
#include <alibabacloud/pdswrapper/DirTrashResult.h>
#include <alibabacloud/pdswrapper/AsyncTaskGetRequest.h>
#include <alibabacloud/pdswrapper/AsyncTaskGetResult.h>
#include <alibabacloud/pdswrapper/FileCreateRequest.h>
#include <alibabacloud/pdswrapper/FileCreateResult.h>
#include <alibabacloud/pdswrapper/FileCompleteRequest.h>
#include <alibabacloud/pdswrapper/FileCompleteResult.h>
#include <alibabacloud/pdswrapper/FileListUploadedPartsRequest.h>
#include <alibabacloud/pdswrapper/FileListUploadedPartsResult.h>
#include <alibabacloud/pdswrapper/MetaUserTagsPutRequest.h>
#include <alibabacloud/pdswrapper/MetaUserTagsPutResult.h>


char sTestFileID[1024] = "";
char sTestAsyncTaskID[1024] = "";
const int32_t ProgressControlStopAfterCallTimes = 600;
const int32_t ProgressControlCancelAfterCallTimes = 500;
int32_t progressControlCallTimes = 0;


void ProgressCallback(size_t increment, int64_t transfered, int64_t total, void* userData)
{
    printf("ProgressCallback[%p] => %zu, %lld, %lld\n", userData, increment, transfered, total);
}

int32_t ProgressControl(void* userData)
{
    int32_t controlFlag = 0;
    progressControlCallTimes = progressControlCallTimes + 1;
    if (progressControlCallTimes > ProgressControlCancelAfterCallTimes) {
        controlFlag = 2;
    }
    printf("ProgressControl[%p] => %d\n", userData, controlFlag);
    return controlFlag;
}


int testCreateDir(hPdsClient client){
    printf("==============testCreateDir==============\n");

    hDirCreateRequest req = hDirCreateRequest_New(gDriveID, "root2", "test", "auto_rename");
    hUserTagList tags = hUserTagList_New();
    hUserTagList_add(tags, "key1", "val1");
    hUserTagList_add(tags, "key2", "val2");
    hDirCreateRequest_setUserTags(req, tags);

    hDirCreateOutcome outcome = hPdsClient_DirCreate(client, req);
    if (hDirCreateOutcome_isSuccess(outcome) == false) {
        hPdsError err = hDirCreateOutcome_error(outcome);
        hPdsError_print(err);

        // clean
        hDirCreateRequest_Del(req);
        hUserTagList_Del(tags);
        hDirCreateOutcome_Del(outcome);
        return -1;
    }

    hDirCreateResult result = hDirCreateOutcome_result(outcome);
    hDirCreateResult_print(result);

    strcpy(sTestFileID, hDirCreateResult_FileID(result));

    // clean
    hDirCreateRequest_Del(req);
    hUserTagList_Del(tags);
    hDirCreateOutcome_Del(outcome);
    return 0;
}

int testListDir(hPdsClient client) {
    printf("==============testListDir==============\n");

    hDirListRequest req = hDirListRequest_New(gDriveID, "root", "", "", "", "", 20);
    hDirListOutcome outcoume = hPdsClient_DirList(client, req);
    if (hDirListOutcome_isSuccess(outcoume) == false) {
        hPdsError err = hDirListOutcome_error(outcoume);
        hPdsError_print(err);

        // clean
        hDirListRequest_Del(req);
        hDirListOutcome_Del(outcoume);
        return -1;
    }

    hDirListResult result = hDirListOutcome_result(outcoume);
    hDirListResult_print(result);

    // clean
    hDirListRequest_Del(req);
    hDirListOutcome_Del(outcoume);
    return 0;
}

int testTrashDir(hPdsClient client, char* fileID) {
    printf("==============testTrashDir==============\n");

    hDirTrashRequest req = hDirTrashRequest_New(gDriveID, fileID);
    hDirTrashOutcome outcoume = hPdsClient_DirTrash(client, req);
    if (hDirTrashOutcome_isSuccess(outcoume) == false) {
        hPdsError err = hDirTrashOutcome_error(outcoume);
        hPdsError_print(err);

        // clean
        hDirTrashRequest_Del(req);
        hDirTrashOutcome_Del(outcoume);
        return -1;
    }

    hDirTrashResult result = hDirTrashOutcome_result(outcoume);
    hDirTrashRequest_print(result);

    strcpy(sTestAsyncTaskID, hDirTrashResult_AsyncTaskID(result));

    // clean
    hDirTrashRequest_Del(req);
    hDirTrashOutcome_Del(outcoume);
    return 0;
}

int testDeleteDir(hPdsClient client, char* fileID) {
    printf("==============testDeleteDir==============\n");

    hDirDeleteRequest req = hDirDeleteRequest_New(gDriveID, fileID);
    hDirDeleteOutcome outcoume = hPdsClient_DirDelete(client, req);
    if (hDirDeleteOutcome_isSuccess(outcoume) == false) {
        hPdsError err = hDirDeleteOutcome_error(outcoume);
        hPdsError_print(err);

        // clean
        hDirDeleteRequest_Del(req);
        hDirDeleteOutcome_Del(outcoume);
        return -1;
    }

    hDirDeleteResult result = hDirDeleteOutcome_result(outcoume);
    hDirDeleteResult_print(result);

    // clean
    hDirDeleteRequest_Del(req);
    hDirDeleteOutcome_Del(outcoume);
    return 0;
}

int testRenameDir(hPdsClient client) {
    printf("==============testRenameDir==============\n");

    hDirRenameRequest req = hDirRenameRequest_New(gDriveID, gFileID, "test222", "auto_rename");
    hDirRenameOutcome outcoume = hPdsClient_DirRename(client, req);
    if (hDirRenameOutcome_isSuccess(outcoume) == false) {
        hPdsError err = hDirRenameOutcome_error(outcoume);
        hPdsError_print(err);

        // clean
        hDirRenameRequest_Del(req);
        hDirRenameOutcome_Del(outcoume);
        return -1;
    }

    hDirRenameResult result = hDirRenameOutcome_result(outcoume);
    hDirRenameResult_print(result);

    // clean
    hDirRenameRequest_Del(req);
    hDirRenameOutcome_Del(outcoume);
    return 0;
}

int testAsyncTaskGet(hPdsClient client) {
    // createDir
    int ret = testCreateDir(client);
    if(ret != 0) {
        return ret;
    }

    // recycleDir
    ret = testTrashDir(client, sTestFileID);
    if(ret != 0) {
        return ret;
    }

    // get asyncTask
    printf("==============testAsyncTaskGet==============\n");
    hAsyncTaskGetRequest req = hAsyncTaskGetRequest_New(sTestAsyncTaskID);
    hAsyncTaskGetOutcome outcoume = hPdsClient_AsyncTaskGet(client, req);
    if (hAsyncTaskGetOutcome_isSuccess(outcoume) == false) {
        hPdsError err = hAsyncTaskGetOutcome_error(outcoume);
        hPdsError_print(err);

        // clean
        hAsyncTaskGetRequest_Del(req);
        hAsyncTaskGetOutcome_Del(outcoume);
        return -1;
    }

    hAsyncTaskGetResult result = hAsyncTaskGetOutcome_result(outcoume);
    hAsyncTaskGetResult_print(result);

    // clean
    hAsyncTaskGetRequest_Del(req);
    hAsyncTaskGetOutcome_Del(outcoume);
    return 0;
}

int testCreateFile(hPdsClient client) {
    printf("==============CreateFile==============\n");
    // create file
    hFileCreateRequest fileCreateReq = hFileCreateRequest_New(gDriveID, "root", "测试.dat", "", "auto_rename", 6);
    hFileCreateOutcome fileCreateOutcome = hPdsClient_FileCreate(client, fileCreateReq);
    if (hFileCreateOutcome_isSuccess(fileCreateOutcome) == false) {
        hPdsError err = hFileCreateOutcome_error(fileCreateOutcome);
        hPdsError_print(err);

        // clean
        hFileCreateRequest_Del(fileCreateReq);
        hFileCreateOutcome_Del(fileCreateOutcome);
        return -1;
    }

    hFileCreateResult fileCreateResult = hFileCreateOutcome_result(fileCreateOutcome);
    hFileCreateResult_print(fileCreateResult);

    char fileID[64];
    char uploadID[64];
    strcpy(fileID, hFileCreateResult_FileID(fileCreateResult));
    strcpy(uploadID, hFileCreateResult_UploadID(fileCreateResult));

    // 上传第一块
    int partSize = 100*1024;
    char data[partSize];
    memset(data, '1', partSize);
    data[partSize] = 0;

    hPartInfoResp partInfo = hPartInfoRespList_at(hFileCreateResult_PartInfoRespList(fileCreateResult), 0);

    printf("==============DataPutByUrl 1==============\n");
    hDataPutOutcome dataPutOutcome = hPdsClient_DataPutByUrl(client, hPartInfoResp_UploadUrl(partInfo), data);
    if (hDataPutOutcome_isSuccess(dataPutOutcome) == false) {
        hPdsError err = hDataPutOutcome_error(dataPutOutcome);
        hPdsError_print(err);

        // clean
        hDataPutOutcome_Del(dataPutOutcome);
        return -1;
    }

    hDataPutResult_print(hDataPutOutcome_result(dataPutOutcome));

    // 获取第二块 upload url
    printf("==============GetUploadUrl==============\n");
    hPartInfoReqList partInfoReqList = hPartInfoReqList_New();
    hPartInfoReq partInfoReq = hPartInfoReq_New(2, partSize, 0, 0);
    hPartInfoReqList_add(partInfoReqList, partInfoReq);

    hFileGetUploadUrlRequest getUploadUrlReq = hFileGetUploadUrlRequest_New(gDriveID, fileID, uploadID, partInfoReqList);
    hFileGetUploadUrlOutcome getUploadUrlOutcome = hPdsClient_FileGetUploadUrl(client, getUploadUrlReq);
    if (hFileGetUploadUrlOutcome_isSuccess(getUploadUrlOutcome) == false) {
        hPdsError err = hFileGetUploadUrlOutcome_error(getUploadUrlOutcome);
        hPdsError_print(err);

        // clean
        hFileGetUploadUrlOutcome_Del(getUploadUrlOutcome);
        return -1;
    }

    hFileGetUploadUrlResult getUploadUrlResult = hFileGetUploadUrlOutcome_result(getUploadUrlOutcome);
    hFileGetUploadUrlResult_print(getUploadUrlResult);

    // 上传第二块数据
    printf("==============DataPutByUrl 2==============\n");
    hPartInfoResp partInfo2 = hPartInfoRespList_at(hFileGetUploadUrlResult_PartInfoRespList(getUploadUrlResult), 0);
    hDataPutOutcome dataPutOutcome2 = hPdsClient_DataPutByUrl(client, hPartInfoResp_UploadUrl(partInfo2), data);
    if (hDataPutOutcome_isSuccess(dataPutOutcome2) == false) {
        hPdsError err = hDataPutOutcome_error(dataPutOutcome2);
        hPdsError_print(err);

        // clean
        hDataPutOutcome_Del(dataPutOutcome2);
        return -1;
    }

    hDataPutResult_print(hDataPutOutcome_result(dataPutOutcome2));

    // list upload parts
    printf("==============ListUploadParts==============\n");
    hFileListUploadedPartsRequest listUploadedPartsReq = hFileListUploadedPartsRequest_New(gDriveID, fileID, uploadID, 0, 2);
    hFileListUploadedPartsOutcome listUploadedPartsOutcome = hPdsClient_FileListUploadedParts(client, listUploadedPartsReq);
    if (hFileListUploadedPartsOutcome_isSuccess(listUploadedPartsOutcome) == false) {
        hPdsError err = hFileListUploadedPartsOutcome_error(listUploadedPartsOutcome);
        hPdsError_print(err);

        // clean
        hFileListUploadedPartsOutcome_Del(listUploadedPartsOutcome);
        return -1;
    }

    hFileListUploadedPartsResult listUploadedPartsResult = hFileListUploadedPartsOutcome_result(listUploadedPartsOutcome);
    hFileListUploadedPartsResult_print(listUploadedPartsResult);

    // complete file
    printf("==============CompleteFile==============\n");
    hFileCompleteRequest fileCompleteReq = hFileCompleteRequest_New(gDriveID, fileID, uploadID);
    hFileCompleteOutcome fileCompleteOutcome = hPdsClient_FileComplete(client, fileCompleteReq);
    if (hFileCompleteOutcome_isSuccess(fileCompleteOutcome) == false) {
        hPdsError err = hFileCompleteOutcome_error(fileCompleteOutcome);
        hPdsError_print(err);

        // clean
        hFileCompleteOutcome_Del(fileCompleteOutcome);
        return -1;
    }

    hFileCompleteResult fileCompleteResult = hFileCompleteOutcome_result(fileCompleteOutcome);
    hFileCompleteResult_print(fileCompleteResult);

    // get_download_url
    printf("==============GetDownloadUrl==============\n");
    hFileGetDownloadUrlRequest fileGetDownloadUrlReq = hFileGetDownloadUrlRequest_New(gDriveID, "", fileID);
    hFileGetDownloadUrlOutcome fileGetDownloadUrlOutcome = hPdsClient_FileGetDownloadUrl(client, fileGetDownloadUrlReq);
    if (hFileGetDownloadUrlOutcome_isSuccess(fileGetDownloadUrlOutcome) == false) {
        hPdsError err = hFileGetDownloadUrlOutcome_error(fileGetDownloadUrlOutcome);
        hPdsError_print(err);

        // clean
        hFileGetDownloadUrlOutcome_Del(fileGetDownloadUrlOutcome);
        return -1;
    }

    hFileGetDownloadUrlResult fileGetDownloadUrlResult = hFileGetDownloadUrlOutcome_result(fileGetDownloadUrlOutcome);
    hFileGetDownloadUrlResult_print(fileGetDownloadUrlResult);

    // get meta info
    printf("==============Get==============\n");
    hFileGetRequest fileGetReq = hFileGetRequest_New(gDriveID, "", fileID);
    hFileGetOutcome fileGetOutcome = hPdsClient_FileGet(client, fileGetReq);
    if (hFileGetOutcome_isSuccess(fileGetOutcome) == false) {
        hPdsError err = hFileGetOutcome_error(fileGetOutcome);
        hPdsError_print(err);

        // clean
        hFileGetOutcome_Del(fileGetOutcome);
        return -1;
    }

    hFileGetResult fileGetResult = hFileGetOutcome_result(fileGetOutcome);
    hFileGetResult_print(fileGetResult);

    hUserTagMap userTags1 = hFileGetResult_UserTags(fileGetResult);
    hUserTagMap_print(userTags1);

    // rename
    printf("==============Rename==============\n");
    hFileRenameRequest fileRenameReq = hFileRenameRequest_New(gDriveID, fileID, "测试.dat", "auto_rename");
    hFileRenameOutcome fileRenameOutcome = hPdsClient_FileRename(client, fileRenameReq);
    if (hFileRenameOutcome_isSuccess(fileRenameOutcome) == false) {
        hPdsError err = hFileRenameOutcome_error(fileRenameOutcome);
        hPdsError_print(err);

        // clean
        hFileRenameOutcome_Del(fileRenameOutcome);
        return -1;
    }

    hFileRenameResult fileRenameResult = hFileRenameOutcome_result(fileRenameOutcome);
    hFileRenameResult_print(fileRenameResult);

    // SetUserTags
    printf("==============SetUserTags==============\n");
    hUserTagList metaUserTags = hUserTagList_New();
    hUserTagList_add(metaUserTags, "k1", "v1");
    hUserTagList_add(metaUserTags, "k2", "v2");
    hUserTagList_add(metaUserTags, "k3", "v3");
    hUserTagList_add(metaUserTags, "k4", "v4");

    hMetaUserTagsPutRequest metaUserTagsPutReq = hMetaUserTagsPutRequest_New(gDriveID, fileID, metaUserTags);
    hMetaUserTagsPutOutcome metaUserTagsPutOutcome = hPdsClient_MetaUserTagsPut(client, metaUserTagsPutReq);
    if (hMetaUserTagsPutOutcome_isSuccess(metaUserTagsPutOutcome) == false) {
        hPdsError err = hMetaUserTagsPutOutcome_error(metaUserTagsPutOutcome);
        hPdsError_print(err);

        // clean
        hMetaUserTagsPutOutcome_Del(metaUserTagsPutOutcome);
        return -1;
    }

    hMetaUserTagsPutResult metaUserTagsPutResult = hMetaUserTagsPutOutcome_result(metaUserTagsPutOutcome);
    hMetaUserTagsPutResult_print(metaUserTagsPutResult);

    // DeleteUserTags
    printf("==============DeleteUserTags==============\n");
    hUserTagKeyList metaUserTagKeys = hUserTagKeyList_New();
    hUserTagKeyList_add(metaUserTagKeys, "k3");
    hUserTagKeyList_add(metaUserTagKeys, "k4");

    hMetaUserTagsPutRequest metaUserTagsDeleteReq = hMetaUserTagsDeleteRequest_New(gDriveID, fileID, metaUserTagKeys);
    hPdsOutcome metaUserTagsDeleteOutcome = hPdsClient_MetaUserTagsDelete(client, metaUserTagsDeleteReq);
    if (hPdsOutcome_isSuccess(metaUserTagsDeleteOutcome) == false) {
        hPdsError err = hPdsOutcome_error(metaUserTagsDeleteOutcome);
        hPdsError_print(err);

        // clean
        hPdsOutcome_Del(metaUserTagsDeleteOutcome);
        return -1;
    }

    hServiceResult metaUserTagsDeleteResult = hPdsOutcome_result(metaUserTagsDeleteOutcome);
    hServiceResult_print(metaUserTagsDeleteResult);

    // GetUserTags
    printf("==============GetUserTags==============\n");
    hFileGetRequest getUserTagsReq = hFileGetRequest_New(gDriveID, "", fileID);
    hFileGetOutcome getUserTagsOutcome = hPdsClient_FileGet(client, getUserTagsReq);
    if (hFileGetOutcome_isSuccess(getUserTagsOutcome) == false) {
        hPdsError err = hFileGetOutcome_error(getUserTagsOutcome);
        hPdsError_print(err);

        // clean
        hFileGetOutcome_Del(getUserTagsOutcome);
        return -1;
    }

    hFileGetResult getUserTagsResult = hFileGetOutcome_result(getUserTagsOutcome);
    hUserTagMap userTags2 = hFileGetResult_UserTags(getUserTagsResult);
    hUserTagMap_print(userTags2);

    // trash
    printf("==============Trash==============\n");
    hFileTrashRequest fileTrashReq = hFileTrashRequest_New(gDriveID, fileID);
    hFileTrashOutcome fileTrashOutcome = hPdsClient_FileTrash(client, fileTrashReq);
    if (hFileTrashOutcome_isSuccess(fileTrashOutcome) == false) {
        hPdsError err = hFileTrashOutcome_error(fileTrashOutcome);
        hPdsError_print(err);

        // clean
        hFileTrashOutcome_Del(fileTrashOutcome);
        return -1;
    }

    hFileTrashResult fileTrashResult = hFileTrashOutcome_result(fileTrashOutcome);
    hFileTrashResult_print(fileTrashResult);

    // delete
    printf("==============Delete==============\n");
    hFileDeleteRequest fileDeleteReq = hFileDeleteRequest_New(gDriveID, fileID);
    hFileDeleteOutcome fileDeleteOutcome = hPdsClient_FileDelete(client, fileDeleteReq);
    if (hFileDeleteOutcome_isSuccess(fileDeleteOutcome) == false) {
        hPdsError err = hFileDeleteOutcome_error(fileDeleteOutcome);
        hPdsError_print(err);

        // clean
        hFileDeleteOutcome_Del(fileDeleteOutcome);
        return -1;
    }

    hFileDeleteResult fileDeleteResult = hFileDeleteOutcome_result(fileDeleteOutcome);
    hFileDeleteResult_print(fileDeleteResult);

    return 0;
}

int testResumableFileUpload(hPdsClient client) {
    printf("==============ResumableFileUpload==============\n");
    hFileUploadRequest fileUploadReq = hFileUploadRequest_New_2(gDriveID, "root", "test.dat1111", "", "ignore", gUploadFilePath);

    char* data = "123";
    hTransferProgress progress = hTransferProgress_New(&ProgressCallback, data);
    hFileUploadRequest_setTransferProgress(fileUploadReq, progress);

    hProgressControl control = hProgressControl_New(&ProgressControl, data);
    hFileUploadRequest_setProgressControl(fileUploadReq, control);

    hFileCompleteOutcome fileUploadOutcome = hPdsClient_ResumableFileUpload(client, fileUploadReq);
    if (hFileCompleteOutcome_isSuccess(fileUploadOutcome) == false) {
        hPdsError err = hFileCompleteOutcome_error(fileUploadOutcome);
        hPdsError_print(err);

        // clean
        hFileCompleteOutcome_Del(fileUploadOutcome);
        return -1;
    }

    hFileCompleteResult fileCompleteResult = hFileCompleteOutcome_result(fileUploadOutcome);
    hFileCompleteResult_print(fileCompleteResult);

    return 0;
}

int testResumableFileDownload(hPdsClient client) {
    printf("==============ResumableFileDownload==============\n");
    hFileDownloadRequest fileDownloadReq = hFileDownloadRequest_New_1(gDriveID, "", "6158670d58f68460fc6246b1821c072d527bb282", gDownloadFilePath);

    char* data = "123";
    hTransferProgress progress = hTransferProgress_New(&ProgressCallback, data);
    hFileDownloadRequest_setTransferProgress(fileDownloadReq, progress);

    hProgressControl control = hProgressControl_New(&ProgressControl, data);
    hFileDownloadRequest_setProgressControl(fileDownloadReq, control);

    hDataGetOutcome fileDownloadOutcome = hPdsClient_ResumableFileDownload(client, fileDownloadReq);
    if (hDataGetOutcome_isSuccess(fileDownloadOutcome) == false) {
        hPdsError err = hDataGetOutcome_error(fileDownloadOutcome);
        hPdsError_print(err);

        // clean
        hDataGetOutcome_Del(fileDownloadOutcome);
        return -1;
    }

    hDataGetResult DataGetResult = hDataGetOutcome_result(fileDownloadOutcome);
    hDataGetResult_print(DataGetResult);

    hDataGetOutcome_Del(fileDownloadOutcome);

    return 0;
}

int main()
{
    Pds_InitializeSdk();
    Pds_SetLogLevel(LogAll);

    hClientConfiguration conf = hClientConfiguration_New();
    hClientConfiguration_SetEnableRapidUpload(conf, false);
    hClientConfiguration_SetVerifySSL(conf, false);

    hCredentials credentials = hCredentials_New("");
    hCredentials_setAccessToken(credentials, gAccessToken);
    hPdsClient client = hPdsClient_New_3(gEndpoint, credentials, conf);

    int ret = testCreateFile(client);

    hPdsClient_Del(client);

    hClientConfiguration_Del(conf);
    hCredentials_Del(credentials);
    Pds_ShutdownSdk();

    if (ret == 0) {
        printf("sample ok\n");
        return 0;
    } else {
        printf("sample failed\n");
        return -1;
    }
}
