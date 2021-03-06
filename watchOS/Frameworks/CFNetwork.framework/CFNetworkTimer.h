//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CFNetworkTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _lastResumeTime;
    double _lastPauseTime;
    double _runTime;
    int _state;
}

@property int state; // @synthesize state=_state;
- (void)setCancelCallbacks:(CDUnknownBlockType)arg1;
- (void)resumeCallbacksForTimer;
- (void)suspendCallbacksForTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)cancelTimer;
- (void)setTimer:(double)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

