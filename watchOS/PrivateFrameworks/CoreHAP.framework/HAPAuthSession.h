//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFLogging-Protocol.h>

@class NSData, NSNumber, NSObject, NSString, NSUUID;
@protocol HAPAuthSessionDelegate, OS_dispatch_queue;

@interface HAPAuthSession : HMFObject <HMFLogging>
{
    unsigned char _currentTID;
    id <HAPAuthSessionDelegate> _delegate;
    int _role;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned int _currentState;
    NSNumber *_instanceId;
    NSData *_token1;
    NSData *_token2;
    NSUUID *_provisionUUID;
}

+ (id)logCategory;
@property(retain, nonatomic) NSUUID *provisionUUID; // @synthesize provisionUUID=_provisionUUID;
@property(retain, nonatomic) NSData *token2; // @synthesize token2=_token2;
@property(retain, nonatomic) NSData *token1; // @synthesize token1=_token1;
@property(retain, nonatomic) NSNumber *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) unsigned char currentTID; // @synthesize currentTID=_currentTID;
@property(nonatomic) unsigned int currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) int role; // @synthesize role=_role;
@property(readonly) __weak id <HAPAuthSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTokenUpdateResponse:(id)arg1 withHeader:(_Bool)arg2;
- (_Bool)getToken:(id *)arg1 uuid:(id *)arg2;
- (void)_sendTokenUpdateRequest:(id)arg1;
- (void)sendTokenUpdateRequest:(id)arg1;
- (void)_handleTokenResponse:(id)arg1 withHeader:(_Bool)arg2;
- (void)_sendTokenRequest;
- (void)continueAuthAfterValidation:(_Bool)arg1;
- (void)_handleAuthExchangeData:(id)arg1 withHeader:(_Bool)arg2;
- (void)handleAuthExchangeData:(id)arg1 withHeader:(_Bool)arg2;
- (void)resetSession;
- (void)_reportAuthFailure;
- (void)_resetSession;
- (id)initWithRole:(int)arg1 instanceId:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

