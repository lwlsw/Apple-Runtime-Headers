//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSDictionary;

@interface SBEmitSBEventSwitcherModifierAction : SBSwitcherModifierAction
{
    unsigned long long _eventType;
    NSDictionary *_payload;
}

@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSBEventWithEventType:(unsigned long long)arg1 payload:(id)arg2;
- (long long)type;

@end

