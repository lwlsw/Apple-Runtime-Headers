//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics
{
    unsigned int _workoutActivityType;
    HKQuantity *_averageHeartRate;
    HKQuantity *_maximumHeartRate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic, setter=_setMaximumHeartRate:) HKQuantity *maximumHeartRate; // @synthesize maximumHeartRate=_maximumHeartRate;
@property(retain, nonatomic, setter=_setAverageHeartRate:) HKQuantity *averageHeartRate; // @synthesize averageHeartRate=_averageHeartRate;
@property(readonly, nonatomic) unsigned int workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(int)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned int)arg4;

@end

