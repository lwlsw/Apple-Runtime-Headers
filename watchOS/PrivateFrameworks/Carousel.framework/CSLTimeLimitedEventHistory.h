//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/BSDescriptionProviding-Protocol.h>

@class NSMutableArray, NSString;

@interface CSLTimeLimitedEventHistory : NSObject <BSDescriptionProviding>
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_eventHistory;
    _Bool _test;
    double _interval;
}

@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)enumerateEvents:(CDUnknownBlockType)arg1;
- (void)addEvent:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)setTest:(_Bool)arg1;
- (id)init;
- (id)initWithInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

