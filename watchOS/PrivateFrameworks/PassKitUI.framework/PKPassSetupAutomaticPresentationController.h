//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>

@class NSString, PKPass, PKPassView, PKPaymentProvisioningController, PKPaymentVerificationController, PKPaymentWebService, PKTableHeaderView, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate>
{
    PKPaymentWebService *_webService;
    unsigned int _selectedIndex;
    PKTableHeaderView *_headerView;
    PKPassView *_passView;
    UIImage *_passSnapshot;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    PKPass *_pass;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

+ (_Bool)passNeedsAutomaticPresentationSetup:(id)arg1;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_presentMakeDefaultViewControllerForPass:(id)arg1;
- (_Bool)_shouldShowMakeDefaultViewControllerForPass:(id)arg1;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_showVerificationForPass:(id)arg1;
- (int)_paymentPassState;
- (id)_buttonTitleForPaymentPassState:(int)arg1;
- (void)_terminateSetupFlow;
- (void)_presentNextCredentialWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissView;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_saveSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(int)arg3 provisioningController:(id)arg4;
- (id)initWithPass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

