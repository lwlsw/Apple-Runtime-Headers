//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/NSCopying-Protocol.h>
#import <XCTest/NSObject-Protocol.h>

@class NSArray, XCTPerformanceMeasurementTimestamp;

@protocol XCTMetric <NSCopying, NSObject>
- (NSArray *)reportMeasurementsFromStartTime:(XCTPerformanceMeasurementTimestamp *)arg1 toEndTime:(XCTPerformanceMeasurementTimestamp *)arg2 error:(id *)arg3;

@optional
- (void)didStopMeasuring;
- (void)willBeginMeasuring;
@end

