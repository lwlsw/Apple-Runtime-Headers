//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMMessageRepositoryMailboxPredictionObserver_xpc-Protocol.h>
#import <Email/EMRecoverableObserver-Protocol.h>

@class EFCancelationToken, NSArray, NSString;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver>
{
    NSArray *_messageObjectIDs;
    CDUnknownBlockType _completionHandler;
    EFCancelationToken *_cancelationToken;
}

@property(readonly, nonatomic) EFCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) NSArray *messageObjectIDs; // @synthesize messageObjectIDs=_messageObjectIDs;
- (void).cxx_destruct;
- (void)mailboxWasPredicted:(id)arg1;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;
- (void)recoverQueryWithRemoteConnection:(id)arg1;
- (void)performQueryWithRemoteConnection:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithMessageObjectIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

