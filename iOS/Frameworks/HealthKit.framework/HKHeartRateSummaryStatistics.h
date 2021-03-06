//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSMutableArray, NSUUID;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding>
{
    NSMutableArray *_sortedBuckets;
    NSDateInterval *_dateInterval;
    long long _numberOfBuckets;
    long long _numberOfReadings;
    NSUUID *_sessionUUID;
    NSArray *_highlightedReadings;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic, setter=_setHighlightedReadings:) NSArray *highlightedReadings; // @synthesize highlightedReadings=_highlightedReadings;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) long long numberOfReadings; // @synthesize numberOfReadings=_numberOfReadings;
@property(readonly, nonatomic) long long numberOfBuckets; // @synthesize numberOfBuckets=_numberOfBuckets;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(_Bool)arg2;
- (void)enumerateBucketsWithBlock:(CDUnknownBlockType)arg1;
- (id)bucketAtIndex:(long long)arg1;
- (void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3;
- (id)_bucketsDescription;
- (id)_dictionaryRepresentation;

@end

