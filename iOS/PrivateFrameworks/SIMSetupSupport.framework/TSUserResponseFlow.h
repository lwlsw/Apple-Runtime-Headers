//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSString, UIBarButtonItem;

@interface TSUserResponseFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>
{
    _Bool _confirmationCodeRequired;
    NSString *_confirmationCode;
    UIBarButtonItem *_cancelButton;
    unsigned long long _userConsentType;
}

@property unsigned long long userConsentType; // @synthesize userConsentType=_userConsentType;
- (void).cxx_destruct;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (id)firstViewController;
- (id)initWithConfirmationCodeRequired:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

