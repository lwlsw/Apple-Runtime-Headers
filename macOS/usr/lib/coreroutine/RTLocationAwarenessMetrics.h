//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class AWDCoreRoutineLocationAwarenessIntervalHistogram, AWDCoreRoutineLocationAwarenessLocationTimeHistograms, AWDCoreRoutineLocationAwarenessStatistics, NSDate;

@interface RTLocationAwarenessMetrics : NSObject <NSCopying>
{
    NSDate *_startTimestamp;
    AWDCoreRoutineLocationAwarenessStatistics *_heartbeatStats;
    AWDCoreRoutineLocationAwarenessLocationTimeHistograms *_timeHistograms;
    AWDCoreRoutineLocationAwarenessIntervalHistogram *_intervalHistogram;
}

@property(retain, nonatomic) AWDCoreRoutineLocationAwarenessIntervalHistogram *intervalHistogram; // @synthesize intervalHistogram=_intervalHistogram;
@property(retain, nonatomic) AWDCoreRoutineLocationAwarenessLocationTimeHistograms *timeHistograms; // @synthesize timeHistograms=_timeHistograms;
@property(retain, nonatomic) AWDCoreRoutineLocationAwarenessStatistics *heartbeatStats; // @synthesize heartbeatStats=_heartbeatStats;
@property(readonly, nonatomic) NSDate *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithStartTimestamp:(id)arg1 heartbeatStats:(id)arg2 timeHistograms:(id)arg3 intervalHistogram:(id)arg4;

@end

