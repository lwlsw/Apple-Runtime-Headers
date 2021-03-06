//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTEventCoalescer-Protocol.h>

@class NSString;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTEventCoalescer : NSObject <AVTEventCoalescer>
{
    _Bool _eventDeliveryScheduled;
    CDUnknownBlockType _eventHandler;
    NSString *_eventLabel;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_workQueue;
    double _delay;
}

@property(nonatomic) _Bool eventDeliveryScheduled; // @synthesize eventDeliveryScheduled=_eventDeliveryScheduled;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)eventDidOccur:(CDUnknownBlockType)arg1;
- (void)registerEventForCoalescingWithLabel:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDelay:(double)arg1 queue:(id)arg2 logger:(id)arg3;

@end

