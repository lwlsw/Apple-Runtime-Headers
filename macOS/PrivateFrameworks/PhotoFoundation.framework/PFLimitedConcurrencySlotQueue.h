//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PFLimitedConcurrencyQueueClass;
@protocol OS_dispatch_queue;

@interface PFLimitedConcurrencySlotQueue : NSObject
{
    // Error parsing type: AQ, name: _blockCount
    NSObject<OS_dispatch_queue> *_slotQueue;
    PFLimitedConcurrencyQueueClass *_concurrentQueue;
    unsigned long long _slotIndex;
}

+ (id)currentSlotQueue;
@property(readonly) unsigned long long slotIndex; // @synthesize slotIndex=_slotIndex;
@property(readonly) __weak PFLimitedConcurrencyQueueClass *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void).cxx_destruct;
- (const char *)label;
- (void)resume;
- (void)suspend;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (unsigned long long)slotUseCount;
- (unsigned long long)decrementSlotUseCount;
- (unsigned long long)incrementSlotUseCount;
- (id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3;

@end

