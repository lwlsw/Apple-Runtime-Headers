//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookDataStore/BCCloudDataSyncManagerDelegate-Protocol.h>
#import <BookDataStore/BDSCloudGlobalMetadataManager-Protocol.h>

@class BCCloudChangeTokenController, BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, NSManagedObjectModel, NSMutableDictionary, NSString;

@interface BDSCloudGlobalMetadataManager : NSObject <BCCloudDataSyncManagerDelegate, BDSCloudGlobalMetadataManager>
{
    _Bool _enableCloudSync;
    BCCloudDataSource *_globalMetadataDataSource;
    BCCloudDataSyncManager *_syncManager;
    BCCloudDataManager *_dataManager;
    NSManagedObjectModel *_objectModel;
    BCCloudChangeTokenController *_changeTokenController;
    NSMutableDictionary *_conflictResolvers;
}

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *conflictResolvers; // @synthesize conflictResolvers=_conflictResolvers;
@property(retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // @synthesize changeTokenController=_changeTokenController;
@property(retain, nonatomic) NSManagedObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *globalMetadataDataSource; // @synthesize globalMetadataDataSource=_globalMetadataDataSource;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void).cxx_destruct;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)metadataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvedMetadataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMetadataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMetadataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)metadatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)metadatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMetadatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMetadataForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMetadatum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;
- (id)entityName;
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signalSyncToCKForSyncManager:(id)arg1;
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;
- (void)removeConflictResolverForKey:(id)arg1;
- (void)setConflictResolver:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)initWithCloudDataSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

