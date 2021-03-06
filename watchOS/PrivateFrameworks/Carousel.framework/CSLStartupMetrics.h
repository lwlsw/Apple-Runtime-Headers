//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface CSLStartupMetrics : NSObject
{
    NSMutableDictionary *_events;
    NSMutableArray *_completedEvents;
    NSLock *_eventsLock;
    _Bool _metricsComplete;
}

+ (id)sharedMetrics;
- (void).cxx_destruct;
- (void)discardMetrics;
- (void)logMetrics;
- (void)writeMetrics;
- (void)completeMetrics;
- (void)startupComplete;
- (_Bool)writeMetricsToURL:(id)arg1;
- (id)completedEvents;
- (void)addEvent:(id)arg1;
- (void)completeEvent:(id)arg1;
- (id)eventWithName:(id)arg1 traceCode:(unsigned int)arg2 expectedDuration:(double)arg3;
- (id)eventWithName:(id)arg1 traceCode:(unsigned int)arg2;
- (id)eventWithName:(id)arg1;
- (id)init;

@end

