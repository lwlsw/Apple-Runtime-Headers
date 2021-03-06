//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentBalance, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService;
@protocol PKBalanceDetailsViewControllerDelegate, PKPaymentDataProvider;

@interface PKBalanceDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate>
{
    PKPaymentBalance *_balance;
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    id <PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    long long _style;
    NSString *_currentBalance;
    NSString *_currencyCode;
    NSArray *_reminderAmounts;
    unsigned long long _selectedReminderAmountIndex;
    id <PKBalanceDetailsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKBalanceDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)_handleActionSelected;
- (void)_handleReminderAmountChanged:(id)arg1;
- (void)_initializeReminderAmounts:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithBalance:(id)arg1 forPass:(id)arg2 balanceReminder:(id)arg3 associatedAction:(id)arg4 paymentDataProvider:(id)arg5 webService:(id)arg6 style:(long long)arg7;
- (id)initWithTransitPassProperties:(id)arg1 forPass:(id)arg2 balanceReminder:(id)arg3 associatedAction:(id)arg4 paymentDataProvider:(id)arg5 webService:(id)arg6 style:(long long)arg7;
- (id)initWithBalance:(id)arg1 forPass:(id)arg2 balanceReminder:(id)arg3 balanceName:(id)arg4 currencyCode:(id)arg5 associatedAction:(id)arg6 paymentDataProvider:(id)arg7 webService:(id)arg8 style:(long long)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

