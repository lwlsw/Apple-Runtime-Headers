//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient
{
}

- (unsigned long long)getResetSyncStatusWithError:(id *)arg1;
- (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)forceSyncMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)overrideSystemBudgetsForSyncSession:(_Bool)arg1 systemBudgets:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getSystemBudgetsWithReply:(CDUnknownBlockType)arg1;
- (void)getCurrentTransferProgress:(CDUnknownBlockType)arg1;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(_Bool)arg1 reason:(short)arg2;
- (void)setCloudPhotoLibraryPauseState:(_Bool)arg1 reason:(short)arg2;
- (void)setCloudPhotoLibraryEnabledState:(_Bool)arg1;
- (void)syncCloudPhotoLibrary;
- (_Bool)shouldAutoEnableiCPLOnOSXWithError:(id *)arg1;
- (_Bool)isReadyForCloudPhotoLibrary;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (id)personInfoDictionaryForPersonID:(id)arg1 error:(id *)arg2;
- (id)emailAddressForKey:(long long)arg1 error:(id *)arg2;
- (long long)keyForEmailAddress:(id)arg1 error:(id *)arg2;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;

@end

