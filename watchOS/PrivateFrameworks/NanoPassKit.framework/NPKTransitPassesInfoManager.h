//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPaymentServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, PKPaymentService;
@protocol NPKTransitPassesInfoManagerDelegate, OS_dispatch_queue;

@interface NPKTransitPassesInfoManager : NSObject <PKPaymentServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    NSMutableDictionary *_transitPassBalanceModelsByPassUniqueID;
    id <NPKTransitPassesInfoManagerDelegate> _delegate;
    PKPaymentService *_paymentService;
}

@property(readonly, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
- (void).cxx_destruct;
- (void)_notifyDelegateOfUpdatedTransitPassInfoForModel:(id)arg1;
- (void)_updatePassTransitPassesInfoManagerForPassUiniqueID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_fetchMostRecentTransitPropertiesForPass:(id)arg1;
- (void)_fetchMostRecentBalancesForPass:(id)arg1;
- (void)_loadPassContentIfNeeded:(id)arg1;
- (void)_fetchMostRecentInfoForPass:(id)arg1;
- (id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
@property __weak id <NPKTransitPassesInfoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)passInfoForForPassWithUniqueID:(id)arg1;
- (void)refreshAllPasses;
- (void)removePassWithUniqueID:(id)arg1;
- (void)addPass:(id)arg1;
@property(copy) NSSet *passes;
- (id)init;
- (id)initWithPaymentService:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

