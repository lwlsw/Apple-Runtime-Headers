//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Memories/FlexCloudManager.h>

@class NSMapTable, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FlexMobileAssetManagerV2 : FlexCloudManager
{
    NSString *_clientID;
    NSString *_mobileAssetTypeIdentifier;
    NSObject *_downloadThrottleLock;
    NSObject *_mobileAssetCacheLock;
    NSMutableOrderedSet *_pendingDownloadSet;
    NSMutableSet *_processingDownloadSet;
    NSMapTable *_dowloadOptionsMapping;
    NSMutableOrderedSet *_pendingPurgeSet;
    NSMutableSet *_processingPurgeSet;
    BOOL _includeArtworkInQueries;
    BOOL _XMLPresent;
    NSObject<OS_dispatch_queue> *_purgeQueue;
    NSObject<OS_dispatch_queue> *_triggerDownloadAndPurgeQueue;
}

+ (id)_assetURLForMobileAsset:(id)arg1;
+ (id)compatibilityFilterPredicate;
+ (id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(BOOL)arg2;
@property(nonatomic) BOOL XMLPresent; // @synthesize XMLPresent=_XMLPresent;
@property(nonatomic) BOOL includeArtworkInQueries; // @synthesize includeArtworkInQueries=_includeArtworkInQueries;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *triggerDownloadAndPurgeQueue; // @synthesize triggerDownloadAndPurgeQueue=_triggerDownloadAndPurgeQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue; // @synthesize purgeQueue=_purgeQueue;
- (void).cxx_destruct;
- (id)_mobileAssetQueryResultStringValue:(long long)arg1;
- (id)_mobileAssetPurgeResultStringValue:(long long)arg1;
- (id)_mobileAssetDownloadResultStringValue:(long long)arg1;
- (id)_mobileAssetCancelDownloadResultStringValue:(long long)arg1;
- (long long)_responseForDownloadResult:(long long)arg1;
- (unsigned long long)assetStatus:(id)arg1;
- (void)requestPurgeOfAsset:(id)arg1;
- (void)_purgeAsset:(id)arg1;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (void)_runAsyncAssetDownloadForMobileAsset:(id)arg1;
- (id)_mobileAssetDownloadOptionsForClientOptions:(id)arg1;
- (void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2;
- (BOOL)_mobileAssetIsPurging:(id)arg1;
- (BOOL)_mobileAssetIsDownloading:(id)arg1;
- (void)_runNextAsyncAssetDownloadAndPurge;
- (void)_dispatchNextAsyncAssetDownloadAndPurge;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (void)_processResults:(id)arg1 metadataMapping:(id)arg2;
- (id)_existingSongForUID:(id)arg1;
- (void)_updateExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3 forceUpdate:(BOOL)arg4;
- (void)_updateExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3;
- (void)_updateMetadataOnExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3;
- (id)_assetIDForMobileAsset:(id)arg1;
- (id)_metadataMappingForUUIDSet:(id)arg1;
- (void)fetchAllSongsWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadCachedSongs;
- (id)_newestContentSetFromAssets:(id)arg1 metadataMapping:(id)arg2;
- (void)_loadBundledArtworkForSongID:(id)arg1;
- (void)_loadBundledSongForSongID:(id)arg1;
- (id)filterByClientIDForAssets:(id)arg1 forMetadataMapping:(id)arg2;
- (id)mobileAssetsForAssetPropertyType:(id)arg1 songUID:(id)arg2;
- (id)mobileAssetsForAssetPropertyType:(id)arg1;
- (void)_requeryForMobileAssetTypes:(unsigned long long)arg1 forUUIDs:(id)arg2;
- (void)_requeryForMobileAssetTypes:(unsigned long long)arg1;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;

@end

