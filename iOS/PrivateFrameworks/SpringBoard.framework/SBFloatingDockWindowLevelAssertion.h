//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding>
{
    unsigned long long _priority;
    double _level;
    NSString *_reason;
}

@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPriority:(unsigned long long)arg1 level:(double)arg2 reason:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

