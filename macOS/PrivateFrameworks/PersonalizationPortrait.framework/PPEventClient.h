//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPEventClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPEventClient : NSObject <PPEventClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)sendRTCLogsWithError:(id *)arg1;
- (void)interactionSummaryMetricsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)interactionSummaryMetricsWithError:(id *)arg1 handleBatch:(CDUnknownBlockType)arg2;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)eventHighlightsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id *)arg4 handleBatch:(CDUnknownBlockType)arg5;
- (void)eventNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id *)arg3 handleBatch:(CDUnknownBlockType)arg4;
- (void)eventNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)eventNameRecordsForClient:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;

@end

