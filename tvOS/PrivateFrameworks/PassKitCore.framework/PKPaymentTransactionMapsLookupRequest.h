//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPaymentApplication, PKPaymentTransaction;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionMapsLookupRequest : NSObject
{
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _clearingAttempt;
}

@property(nonatomic, getter=isClearingAttempt) _Bool clearingAttempt; // @synthesize clearingAttempt=_clearingAttempt;
- (void).cxx_destruct;
- (id)_brandFromMapItem:(id)arg1;
- (id)_merchantFromMapItem:(id)arg1;
- (id)_merchantLookupRequest;
- (void)startLookupWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2;

@end

