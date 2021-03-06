//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import <HealthUI/HKHistogramAxisDimensionDataSource-Protocol.h>

@class HKGraphSeriesDataBlock, HKHealthStore, HKQuantitySample, HKQuantityType, HKUnit, HKUnitPreferenceController, HKValueRange, NSArray, NSDate, NSPredicate, NSString;
@protocol HKHistogramChartDataSourceDataFetchObserver;

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource <HKHistogramAxisDimensionDataSource>
{
    unsigned char _didExecuteQuery;
    id <HKHistogramChartDataSourceDataFetchObserver> _fetchObserver;
    unsigned int _binningMode;
    unsigned int _binCalculation;
    unsigned int _dateBasedBinModeConfig;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitPreferenceController;
    NSString *_quantityIdentifier;
    NSPredicate *_predicate;
    HKGraphSeriesDataBlock *_dataBlock;
    NSDate *_samplesStartDate;
    NSDate *_samplesEndDate;
    HKValueRange *_xAxisRange;
    HKValueRange *_yAxisRange;
    unsigned int _numberOfBins;
    unsigned int _binWidth;
    CDUnknownBlockType _dataBlockBuilder;
    CDUnknownBlockType _xAxisStringForLocation;
    HKQuantitySample *_minimumSample;
    HKQuantitySample *_maximumSample;
    NSArray *_quantityValueRanges;
}

+ (id)_daysInWeekXValueRange;
+ (id)_hoursInDayXValueRange;
@property(retain, nonatomic) NSArray *quantityValueRanges; // @synthesize quantityValueRanges=_quantityValueRanges;
@property(retain, nonatomic) HKQuantitySample *maximumSample; // @synthesize maximumSample=_maximumSample;
@property(retain, nonatomic) HKQuantitySample *minimumSample; // @synthesize minimumSample=_minimumSample;
@property(nonatomic) unsigned char didExecuteQuery; // @synthesize didExecuteQuery=_didExecuteQuery;
@property(copy, nonatomic) CDUnknownBlockType xAxisStringForLocation; // @synthesize xAxisStringForLocation=_xAxisStringForLocation;
@property(copy, nonatomic) CDUnknownBlockType dataBlockBuilder; // @synthesize dataBlockBuilder=_dataBlockBuilder;
@property(nonatomic) unsigned int binWidth; // @synthesize binWidth=_binWidth;
@property(nonatomic) unsigned int numberOfBins; // @synthesize numberOfBins=_numberOfBins;
@property(readonly, nonatomic) HKValueRange *yAxisRange; // @synthesize yAxisRange=_yAxisRange;
@property(readonly, nonatomic) HKValueRange *xAxisRange; // @synthesize xAxisRange=_xAxisRange;
@property(retain, nonatomic) NSDate *samplesEndDate; // @synthesize samplesEndDate=_samplesEndDate;
@property(retain, nonatomic) NSDate *samplesStartDate; // @synthesize samplesStartDate=_samplesStartDate;
@property(retain, nonatomic) HKGraphSeriesDataBlock *dataBlock; // @synthesize dataBlock=_dataBlock;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *quantityIdentifier; // @synthesize quantityIdentifier=_quantityIdentifier;
@property(readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) unsigned int dateBasedBinModeConfig; // @synthesize dateBasedBinModeConfig=_dateBasedBinModeConfig;
@property(nonatomic) unsigned int binCalculation; // @synthesize binCalculation=_binCalculation;
@property(nonatomic) unsigned int binningMode; // @synthesize binningMode=_binningMode;
@property(nonatomic) __weak id <HKHistogramChartDataSourceDataFetchObserver> fetchObserver; // @synthesize fetchObserver=_fetchObserver;
- (void).cxx_destruct;
- (id)_hourNameFromHourIndex:(unsigned int)arg1;
- (id)_hourOfTheDayFormatter;
- (id)_hourXAxisStringForLocation:(id)arg1;
- (id)_dayNameFromDayIndex:(unsigned int)arg1;
- (unsigned int)_dayIndexForDayName:(id)arg1;
- (id)_daysOfTheWeek;
- (id)_dayNameFormatter;
- (id)_dayXAxisStringForLocation:(id)arg1;
- (id)_dateBasedXValueRangeForConfig:(unsigned int)arg1;
- (unsigned int)_dateBasedBinIndexForSample:(id)arg1;
- (id)cachedBlockForPath:(CDStruct_48c31d0d)arg1 context:(id)arg2;
- (void)blocksRequestedFromPath:(CDStruct_48c31d0d)arg1 toPath:(CDStruct_48c31d0d)arg2;
- (CDStruct_48c31d0d)blockPathForX:(id)arg1 zoom:(int)arg2;
- (unsigned int)_normalBinIndexForSample:(id)arg1;
- (unsigned int)_binIndexForSample:(id)arg1;
- (id)_displayType;
- (id)_samplesSortedByQuantity:(id)arg1;
- (id)_query;
- (id)_buildQuantityValueRangesFromSortedSamples:(id)arg1;
- (id)stringForLocation:(id)arg1;
- (id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)arg1;
- (id)calculateBinValueForBins:(id)arg1 usingCalculation:(unsigned int)arg2;
- (id)buildBinsWithSamples:(id)arg1;
- (id)buildGraphSeriesDataBlockFromSamples:(id)arg1;
- (void)didCompleteFetch;
- (void)fetchData;
- (id)xAxisStringForLocation:(id)arg1;
@property(readonly, nonatomic) NSArray *sortDescriptors;
@property(readonly, nonatomic) HKUnit *unit;
@property(readonly, nonatomic) HKQuantityType *quantityType;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binCalculation:(unsigned int)arg6 dateBasedBinModeConfig:(unsigned int)arg7;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binWidth:(float)arg6;
- (id)_initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 xAxisRange:(id)arg5 yAxisRange:(id)arg6 binMode:(unsigned int)arg7 binCalculation:(unsigned int)arg8 binWidth:(float)arg9 numberOfBins:(unsigned int)arg10 dateBasedBinModeConfig:(unsigned int)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

