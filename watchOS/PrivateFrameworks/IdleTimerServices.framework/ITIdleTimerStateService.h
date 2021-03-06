//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/ITIdleTimerStateServerDelegate-Protocol.h>

@class ITIdleTimerStateServer, NSMutableDictionary, NSString;
@protocol BSInvalidatable, ITIdleTimerStateServiceDelegate, OS_dispatch_queue;

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate>
{
    ITIdleTimerStateServer *_server;
    NSObject<OS_dispatch_queue> *_calloutDispatchQueue;
    NSMutableDictionary *_assertionsByReason;
    NSMutableDictionary *_assertionReasonsByClientID;
    id <BSInvalidatable> _stateCaptureAssertion;
    id <ITIdleTimerStateServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <ITIdleTimerStateServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_identifierForClientProcess:(id)arg1;
- (_Bool)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned int)arg2;
- (_Bool)isIdleTimerServiceAvailable;
- (void)clientDidDisconnect:(id)arg1;
- (void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;
- (_Bool)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

