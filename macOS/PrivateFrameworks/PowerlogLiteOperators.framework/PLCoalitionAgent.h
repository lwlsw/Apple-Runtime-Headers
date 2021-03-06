//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLCoalitionAgent : PLAgent
{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    NSDictionary *_lastCoalitionDictionary;
    NSDictionary *_lastCoalitionObjectDictionary;
    NSDate *_lastDate;
    NSDate *_currentDate;
    PLEntryNotificationOperatorComposition *_processmonitorCallback;
    PLXPCListenerOperatorComposition *_coalitionReapNotification;
    NSMutableDictionary *_reapedCoalitions;
    NSMutableDictionary *_coalitionIDToCoalitionNameMapping;
}

+ (id)entryEventIntervalDefinitionCoalitionUsage;
+ (id)entryEventPointDefinitionCoalitionMemory;
+ (id)entryEventPointDefinitionCoalitionSnapshot;
+ (id)entryEventPointDefinitionCoalitionDrop;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (void)load;
@property(retain) NSMutableDictionary *coalitionIDToCoalitionNameMapping; // @synthesize coalitionIDToCoalitionNameMapping=_coalitionIDToCoalitionNameMapping;
@property(retain) NSMutableDictionary *reapedCoalitions; // @synthesize reapedCoalitions=_reapedCoalitions;
@property(retain) PLXPCListenerOperatorComposition *coalitionReapNotification; // @synthesize coalitionReapNotification=_coalitionReapNotification;
@property(retain) PLEntryNotificationOperatorComposition *processmonitorCallback; // @synthesize processmonitorCallback=_processmonitorCallback;
@property(retain) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(retain) NSDictionary *lastCoalitionObjectDictionary; // @synthesize lastCoalitionObjectDictionary=_lastCoalitionObjectDictionary;
@property(retain) NSDictionary *lastCoalitionDictionary; // @synthesize lastCoalitionDictionary=_lastCoalitionDictionary;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
- (void).cxx_destruct;
- (void)logEventIntervalCoalitionInterval;
- (void)log;
- (id)buildPLCoalitionDataObjectFromReapedNotification:(id)arg1;
- (void)handleReapNotifications:(id)arg1;
- (void)getCoalitionInfo;
- (void)timedCoalitionInfo;
- (double)getCPUWeightFromEntry:(id)arg1;
- (double)getGPUTimeFromEntry:(id)arg1;
- (double)getCPUVoucherTimeFromEntry:(id)arg1;
- (double)getCPUEnergyFromEntry:(id)arg1;
- (void)addAccountingEventsFromCoalitions:(id)arg1;
- (void)logCoalitionObjectDifference:(id)arg1;
- (id)reapedCoalitionsPLEntryDiff;
- (void)logCoalitionDifference:(id)arg1;
- (id)filterCoalitionDiffEntries:(id)arg1;
- (void)logCoalitionObjectSnapshot:(id)arg1;
- (void)logCoalitionSnapshot:(id)arg1;
- (void)printCoalitionResourceUsage:(struct coalition_resource_usage *)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3;
- (id)buildPLEntryDiffWithStartEntry:(id)arg1 withEndEntry:(id)arg2 withLastDate:(id)arg3;
- (id)buildPLEntryDiffWithStartObject:(id)arg1 withEndObject:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)logToAggd:(id)arg1;
- (BOOL)shouldLogCoalitionObject:(id)arg1 withEndObject:(id)arg2;
- (id)buildPLCoalitionDataObject:(struct coalition_resource_usage *)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 withDate:(id)arg4 withCoalitionId:(unsigned long long)arg5;
- (void)logCoalitionObjectMemory:(id)arg1;
- (id)buildPLEntry:(struct coalition_resource_usage *)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 withDate:(id)arg4 withCoalitionId:(unsigned long long)arg5;
- (void)debugCoalitionAgent;
- (void)initOperatorDependancies;
- (id)init;

@end

