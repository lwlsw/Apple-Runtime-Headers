//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HeadBoardUI/BSTransactionObserver-Protocol.h>
#import <HeadBoardUI/HBUILaunchAnimationEnvironment-Protocol.h>
#import <HeadBoardUI/HBUITopShelfContentViewController-Protocol.h>
#import <HeadBoardUI/HBUITopShelfContentViewControllerDelegate-Protocol.h>

@class HBUITopShelfAppleLogoView, HBUITopShelfHostAnimationTransaction, HBUITopShelfSwipeUpAffordanceView, NSString;
@protocol HBUITopShelfContentViewController, HBUITopShelfContentViewControllerDelegate;

@interface HBUITopShelfHostViewController : UIViewController <HBUITopShelfContentViewControllerDelegate, BSTransactionObserver, HBUITopShelfContentViewController, HBUILaunchAnimationEnvironment>
{
    _Bool _contentOccluded;
    _Bool _focused;
    id <HBUITopShelfContentViewControllerDelegate> _delegate;
    unsigned long long _contentStyle;
    HBUITopShelfAppleLogoView *_appleLogoView;
    HBUITopShelfSwipeUpAffordanceView *_swipeUpAffordanceView;
    UIViewController<HBUITopShelfContentViewController> *_contentViewController;
    UIViewController<HBUITopShelfContentViewController> *_queuedContentViewController;
    long long _queuedAnimationDirection;
    HBUITopShelfHostAnimationTransaction *_animationTransaction;
}

@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(retain, nonatomic) HBUITopShelfHostAnimationTransaction *animationTransaction; // @synthesize animationTransaction=_animationTransaction;
@property(nonatomic) long long queuedAnimationDirection; // @synthesize queuedAnimationDirection=_queuedAnimationDirection;
@property(retain, nonatomic) UIViewController<HBUITopShelfContentViewController> *queuedContentViewController; // @synthesize queuedContentViewController=_queuedContentViewController;
@property(retain, nonatomic) UIViewController<HBUITopShelfContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) HBUITopShelfSwipeUpAffordanceView *swipeUpAffordanceView; // @synthesize swipeUpAffordanceView=_swipeUpAffordanceView;
@property(readonly, nonatomic) HBUITopShelfAppleLogoView *appleLogoView; // @synthesize appleLogoView=_appleLogoView;
@property(readonly, nonatomic) unsigned long long contentStyle; // @synthesize contentStyle=_contentStyle;
@property(nonatomic) __weak id <HBUITopShelfContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isContentOccluded) _Bool contentOccluded; // @synthesize contentOccluded=_contentOccluded;
- (void).cxx_destruct;
- (id)nextLaunchAnimationEnvironments;
- (id)launchAnimationsWithContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)topShelfContentViewController:(id)arg1 willScrollToFirstItem:(_Bool)arg2;
- (void)topShelfContentViewController:(id)arg1 contentStyleDidChange:(unsigned long long)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)_updateContentViewControllerContentOccluded;
- (void)_updateAppleLogoViewHidden;
- (void)_updateSwipeUpAffordanceViewHidden;
- (void)_setFocused:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setContentStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setContentViewController:(id)arg1 withAnimationDirection:(long long)arg2;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

