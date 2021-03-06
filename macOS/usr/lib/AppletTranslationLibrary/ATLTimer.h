//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ATLTimer : NSObject
{
    NSObject<OS_dispatch_source> *_src;
    CDUnknownBlockType _block;
    double _delay;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)addDelay:(double)arg1;
- (void)onExpire;
- (void)stopTimer;
- (void)startTimerWithDelay:(double)arg1;
- (void)startTimerWithDelay:(double)arg1 leeway:(double)arg2;
- (id)initOnQueue:(id)arg1 withTimerBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

