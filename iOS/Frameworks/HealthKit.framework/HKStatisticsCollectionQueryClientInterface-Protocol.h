//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKStatistics, NSArray, NSNumber, NSUUID;

@protocol HKStatisticsCollectionQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverUpdatedStatistics:(HKStatistics *)arg1 anchor:(NSNumber *)arg2 query:(NSUUID *)arg3;
- (void)client_deliverStatisticsBatch:(NSArray *)arg1 resetStatistics:(_Bool)arg2 isFinal:(_Bool)arg3 anchor:(NSNumber *)arg4 query:(NSUUID *)arg5;
@end

