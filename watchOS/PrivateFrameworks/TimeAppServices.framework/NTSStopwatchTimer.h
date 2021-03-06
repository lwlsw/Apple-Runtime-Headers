//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface NTSStopwatchTimer : NSObject
{
    CADisplayLink *_displayLink;
    _Bool _updateDigitalTimeThisTick;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_digitalTimeUpdateHandlers;
    unsigned int _nextToken;
    _Bool _appInForeground;
}

+ (id)sharedStopwatchTimer;
- (void).cxx_destruct;
- (void)_modelReload:(id)arg1;
- (void)_modelStateChanged:(id)arg1;
- (void)_appBackgrounded:(id)arg1;
- (void)_appForegrounded:(id)arg1;
- (void)_invokeDigitalTimeUpdateHandlers;
- (void)_invokeHandlers;
- (void)_tick:(id)arg1;
- (void)_updateTimer;
- (void)stopUpdatesForToken:(id)arg1;
- (id)startDigitalTimeUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (struct NSNumber *)_nextToken;
- (void)dealloc;
- (id)init;

@end

