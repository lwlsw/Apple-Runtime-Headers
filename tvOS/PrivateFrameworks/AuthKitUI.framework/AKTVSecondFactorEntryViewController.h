//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/_TVDigitEntryViewControllerDelegate-Protocol.h>

@class NSString, TVActivityIndicatorViewController, _TVDigitEntryViewController;

@interface AKTVSecondFactorEntryViewController : UIViewController <_TVDigitEntryViewControllerDelegate>
{
    _Bool _didPerformAction;
    CDUnknownBlockType _ak_cancelAction;
    CDUnknownBlockType _ak_regenerateCodeAction;
    CDUnknownBlockType _ak_codeEnteredAction;
    _TVDigitEntryViewController *_pinViewController;
    TVActivityIndicatorViewController *_spinnerController;
    unsigned long long _state;
}

@property(nonatomic) _Bool didPerformAction; // @synthesize didPerformAction=_didPerformAction;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) TVActivityIndicatorViewController *spinnerController; // @synthesize spinnerController=_spinnerController;
@property(readonly, nonatomic) _TVDigitEntryViewController *pinViewController; // @synthesize pinViewController=_pinViewController;
@property(copy, nonatomic) CDUnknownBlockType ak_codeEnteredAction; // @synthesize ak_codeEnteredAction=_ak_codeEnteredAction;
@property(copy, nonatomic) CDUnknownBlockType ak_regenerateCodeAction; // @synthesize ak_regenerateCodeAction=_ak_regenerateCodeAction;
@property(copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
- (void).cxx_destruct;
- (void)performCancelAction;
- (void)performRegenerateCodeAction;
- (void)performCodeEnteredAction;
- (void)digitEntryViewControllerDidFinish:(id)arg1;
- (void)digitEntryViewControllerDidCancel:(id)arg1;
- (void)_resendCode:(id)arg1;
- (struct CGPoint)_spinnerCenterForViewBounds:(struct CGRect)arg1;
- (void)_stopSpinner;
- (void)_startSpinner;
- (void)_configureSpinnerForState:(unsigned long long)arg1;
- (void)jiggleDigitField;
@property(copy, nonatomic) NSString *reason;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

