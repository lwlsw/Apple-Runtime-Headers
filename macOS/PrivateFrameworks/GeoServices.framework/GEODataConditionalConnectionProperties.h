//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding>
{
    unsigned long long _workLoad;
    double _timeWindowStartTime;
    double _timeWindowDuration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double timeWindowDuration; // @synthesize timeWindowDuration=_timeWindowDuration;
@property(readonly, nonatomic) double timeWindowStartTime; // @synthesize timeWindowStartTime=_timeWindowStartTime;
@property(readonly, nonatomic) unsigned long long workLoad; // @synthesize workLoad=_workLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2;
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3;

@end

