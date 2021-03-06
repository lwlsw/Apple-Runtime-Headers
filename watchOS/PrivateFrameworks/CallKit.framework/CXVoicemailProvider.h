//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXAbstractProvider.h>

#import <CallKit/CXVoicemailProviderVendorProtocol-Protocol.h>

@class NSString;
@protocol CXVoicemailProviderDelegate, CXVoicemailProviderHostProtocol;

@interface CXVoicemailProvider : CXAbstractProvider <CXVoicemailProviderVendorProtocol>
{
}

- (void)_performAction:(id)arg1;
- (void)reportVoicemailsRemovedWithUUIDs:(id)arg1;
- (void)reportVoicemailRemovedWithUUID:(id)arg1;
- (void)reportVoicemailsUpdated:(id)arg1;
- (void)reportVoicemailUpdated:(id)arg1;
- (void)reportNewVoicemailsWithUpdates:(id)arg1;
- (void)reportNewVoicemailWithUpdate:(id)arg1;
- (id)pendingVoicemailActionsOfClass:(Class)arg1 withVoicemailUUID:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CXVoicemailProviderDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) id <CXVoicemailProviderHostProtocol> hostProtocolDelegate; // @dynamic hostProtocolDelegate;
@property(readonly) Class superclass;

@end

