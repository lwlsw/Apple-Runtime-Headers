//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDQuantitySeriesObserver-Protocol.h>

@class HDStatisticsCollectionCalculator, HDStatisticsCollectionCalculatorDefaultDataSource, HDStatisticsCollectionCalculatorDefaultSourceOrderProvider, HKQuantityType, NSDate, NSMutableDictionary, NSString, _HKDateIntervalCollection;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver>
{
    _HKDateIntervalCollection *_intervalCollection;
    HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider *_sourceOrderProvider;
    HDStatisticsCollectionCalculator *_calculator;
    NSMutableDictionary *_pendingQuantitiesBySeries;
    _Bool _addedSamplesRequireProtectedData;
    _Bool _requiresFetch;
    _Bool _hasScheduledUpdate;
    _Bool _deliversUpdates;
    unsigned int _mergeStrategy;
    HKQuantityType *_quantityType;
    NSDate *_anchorDate;
    unsigned int _statisticsOptions;
    CDUnknownBlockType _unitTest_queryServerStatisticsEnumerationHandler;
    CDUnknownBlockType _unitTest_queryServerUpdateStatisticsHandler;
    CDUnknownBlockType _unitTest_queryServerUnableToUpdateStatisticsHandler;
}

+ (_Bool)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerUnableToUpdateStatisticsHandler; // @synthesize unitTest_queryServerUnableToUpdateStatisticsHandler=_unitTest_queryServerUnableToUpdateStatisticsHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerUpdateStatisticsHandler; // @synthesize unitTest_queryServerUpdateStatisticsHandler=_unitTest_queryServerUpdateStatisticsHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerStatisticsEnumerationHandler; // @synthesize unitTest_queryServerStatisticsEnumerationHandler=_unitTest_queryServerStatisticsEnumerationHandler;
@property(readonly, nonatomic) unsigned int statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
@property(readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void).cxx_destruct;
- (_Bool)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatistics;
- (void)_queue_accumulateUpdatedStatistics:(id)arg1 accumulatedStatistics:(id)arg2 sendHandler:(CDUnknownBlockType)arg3;
- (void)_queue_sendAccumulatedStatistics:(id)arg1 isFinal:(_Bool)arg2 statisticsCount:(int *)arg3 shouldResetStatistics:(_Bool *)arg4;
- (void)_queue_updateStatistics;
- (id)_queue_filteredPendingSeriesWithError:(id *)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (CDUnknownBlockType)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(_Bool)arg2 count:(int)arg3;
- (void)_queue_didReceiveQuantity:(id)arg1 type:(id)arg2 dateInterval:(id)arg3 series:(id)arg4 anchor:(id)arg5;
- (id)quantityType;
- (void)_queue_performUpdate;
- (void)_queue_scheduleUpdate;
- (_Bool)_shouldObserveDatabaseProtectedDataAvailability;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

