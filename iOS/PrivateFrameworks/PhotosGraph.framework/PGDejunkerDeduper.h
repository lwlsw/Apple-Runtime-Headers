//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSSimilarStacker, PLKMeansClustering;
@protocol OS_os_log;

@interface PGDejunkerDeduper : NSObject
{
    CLSSimilarStacker *_similarStacker;
    PLKMeansClustering *_kMeanTimeClusterer;
    NSObject<OS_os_log> *_loggingConnection;
}

@property(retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (void).cxx_destruct;
- (id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(_Bool *)arg3;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)featureWithItem:(id)arg1;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)debugPersonStringForItem:(id)arg1;
- (_Bool)isJunkForItem:(id)arg1;
- (id)bestItemsInItems:(id)arg1 options:(id)arg2;
- (id)itemsByFeatureWithItems:(id)arg1;
- (id)timeSortedItemsWithItems:(id)arg1;
- (id)bestItemGroupsBasedOnSceneprintsWithItemGroups:(id)arg1 options:(id)arg2;
- (id)bestItemGroupsBasedOnFaceprintsWithItemGroups:(id)arg1 options:(id)arg2;
- (id)splitItemGroupsWithItemGroups:(id)arg1 maximumNumberOfItemsPerGroup:(unsigned long long)arg2 debugInfo:(id)arg3;
- (id)splitItemGroupsWithTimeSortedItems:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
- (id)timeGroupsOfTimeSortedItemsWithTimeSortedItems:(id)arg1 timeInterval:(double)arg2 maximumTimeGroupExtension:(double)arg3;
- (double)semanticalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2;
- (double)semanticalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2;
- (_Bool)shouldPerformSemanticalDedupingForItemFeature:(id)arg1 options:(id)arg2;
- (double)identicalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2;
- (double)identicalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2;
- (_Bool)shouldPerformIdenticalDedupingForItemFeature:(id)arg1 options:(id)arg2;
- (id)finalItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)dejunkedItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)semanticallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)identicallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

