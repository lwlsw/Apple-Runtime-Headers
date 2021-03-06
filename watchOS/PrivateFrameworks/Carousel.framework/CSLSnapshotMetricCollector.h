//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSLSnapshotMetricCollector : NSObject
{
    NSObject<OS_dispatch_queue> *_privateQueue;
}

+ (void)submitMetricForSnapshotTaken:(id)arg1 startTime:(unsigned long long)arg2 captureFinished:(unsigned long long)arg3 generateFinished:(unsigned long long)arg4 saveFinished:(unsigned long long)arg5;
+ (void)submitMetricForSnapshotFailure:(id)arg1 error:(id)arg2;
+ (void)submitMetricsForSnapshotInitiated:(id)arg1 scheduleItem:(id)arg2 leeway:(double)arg3 priority:(unsigned int)arg4;
+ (void)submitMetricForOnCompletionSnapshot:(id)arg1 error:(id)arg2;
+ (void)submitMetricsForSnapshotRequest:(id)arg1 bundleID:(id)arg2;
+ (id)sharedMetricCollector;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (void)_queue_submitMetricForSnapshotTaken:(id)arg1 startTime:(unsigned long long)arg2 captureFinished:(unsigned long long)arg3 generateFinished:(unsigned long long)arg4 saveFinished:(unsigned long long)arg5;
- (void)_queue_submitMetricForSnapshotFailure:(id)arg1 error:(id)arg2;
- (void)_queue_submitMetricForSnapshotInitiated:(id)arg1 scheduleItem:(id)arg2 leeway:(double)arg3 priority:(unsigned int)arg4;
- (void)_queue_submitMetricForOnCompletionSnapshot:(id)arg1 error:(id)arg2;
- (void)_queue_submitMetricsForSnapshotRequest:(id)arg1 bundleID:(id)arg2;
- (void)_postMetric:(id)arg1 id:(int)arg2;
- (int)_priorityToAWDPriority:(unsigned int)arg1;
- (int)_snapshotReasonToAWDReason:(unsigned int)arg1;
- (id)_infoForError:(id)arg1;
- (void)submitMetricForSnapshotTaken:(id)arg1 startTime:(unsigned long long)arg2 captureFinished:(unsigned long long)arg3 generateFinished:(unsigned long long)arg4 saveFinished:(unsigned long long)arg5;
- (void)submitMetricForSnapshotFailure:(id)arg1 error:(id)arg2;
- (void)submitMetricsForSnapshotInitiated:(id)arg1 scheduleItem:(id)arg2 leeway:(double)arg3 priority:(unsigned int)arg4;
- (void)submitMetricForOnCompletionSnapshot:(id)arg1 error:(id)arg2;
- (void)submitMetricsForSnapshotRequest:(id)arg1 bundleID:(id)arg2;
- (id)_init;
- (id)init;

@end

