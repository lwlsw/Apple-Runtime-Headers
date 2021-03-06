//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFPreferences, NSDictionary, SASActivationRequest, SASSiriPocketStateManager, SASSystemState;

@interface SASActivationCondition : NSObject
{
    _Bool _buttonTriggerStateActive;
    SASActivationRequest *_request;
    SASSystemState *_systemState;
    SASSiriPocketStateManager *_pocketStateManager;
    AFPreferences *_preferences;
    NSDictionary *_analyticsContext;
    long long _requestState;
}

@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property(retain, nonatomic) NSDictionary *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(retain, nonatomic) AFPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) SASSiriPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
@property(nonatomic) _Bool buttonTriggerStateActive; // @synthesize buttonTriggerStateActive=_buttonTriggerStateActive;
@property(retain, nonatomic) SASActivationRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

