//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransactionDelegate-Protocol.h>
#import <SpringBoard/SBGrabberTongueDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate-Protocol.h>
#import <SpringBoard/SBPanSystemGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizerDelegate-Protocol.h>

@class NSString, NSTimer, SBAppSwitcherSettings, SBFHomeGrabberSettings, SBFluidScrunchGestureRecognizer, SBFluidSwitcherGestureWorkspaceTransaction, SBFluidSwitcherPanGestureRecognizer, SBFluidSwitcherViewController, SBGrabberTongue, SBHomeGestureParticipant, SBHomeGestureSettings, SBHomeGrabberView, SBMainDisplaySceneLayoutDragAndDropInteractionManager, SBMainDisplaySceneLayoutViewController, SBPanSystemGestureRecognizer, SBReachabilitySettings, SBSwitcherForcePressSystemGestureRecognizer, UINotificationFeedbackGenerator, UIView;
@protocol SBFluidSwitcherGestureManagerDelegate;

@interface SBFluidSwitcherGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, BSDescriptionProviding, PTSettingsKeyObserver, SBGrabberTongueDelegate, SBHomeGrabberDelegate, SBHomeGestureParticipantDelegate, SBPanSystemGestureRecognizerDelegate, SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, SBFluidSwitcherGestureWorkspaceTransactionDelegate>
{
    _Bool _usesHomeAffordanceRulesForGrabberTongue;
    _Bool _interactivelyPresentingTongue;
    _Bool _playedEdgeProtectHaptic;
    _Bool _shouldRubberbandGrabberViewForReduceMotion;
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBFluidSwitcherViewController *_floatingSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    id <SBFluidSwitcherGestureManagerDelegate> _delegate;
    SBHomeGrabberView *_currentHomeGrabberView;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBHomeGestureSettings *_homeGestureSettings;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBReachabilitySettings *_reachabilitySettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBFluidSwitcherPanGestureRecognizer *_deckInSwitcherPanGestureRecognizer;
    SBGrabberTongue *_deckGrabberTongue;
    SBFluidSwitcherPanGestureRecognizer *_activateReachabilityGestureRecognizer;
    UINotificationFeedbackGenerator *_edgeProtectFeedbackGenerator;
    NSTimer *_delayedHomeGrabberUpdateTimer;
    UIView *_exclusionTrapezoidDebugView;
    SBSwitcherForcePressSystemGestureRecognizer *_deckSwitcherForcePressRecognizer;
    SBFluidScrunchGestureRecognizer *_fluidScrunchGestureRecognizer;
    SBGrabberTongue *_floatingAppGrabberTongue;
    SBFluidSwitcherPanGestureRecognizer *_swipeUpFloatingAppGestureRecognizer;
    SBFluidSwitcherPanGestureRecognizer *_moveFloatingApplicationGestureRecognizer;
    SBPanSystemGestureRecognizer *_pinFloatingApplicationGestureRecognizer;
    SBPanSystemGestureRecognizer *_unpinSplitViewApplicationGestureRecognizer;
    SBMainDisplaySceneLayoutDragAndDropInteractionManager *_dragAndDropInteractionManager;
    SBFluidSwitcherGestureWorkspaceTransaction *_activeGestureTransaction;
}

@property(retain, nonatomic) SBFluidSwitcherGestureWorkspaceTransaction *activeGestureTransaction; // @synthesize activeGestureTransaction=_activeGestureTransaction;
@property(retain, nonatomic) SBMainDisplaySceneLayoutDragAndDropInteractionManager *dragAndDropInteractionManager; // @synthesize dragAndDropInteractionManager=_dragAndDropInteractionManager;
@property(retain, nonatomic) SBPanSystemGestureRecognizer *unpinSplitViewApplicationGestureRecognizer; // @synthesize unpinSplitViewApplicationGestureRecognizer=_unpinSplitViewApplicationGestureRecognizer;
@property(retain, nonatomic) SBPanSystemGestureRecognizer *pinFloatingApplicationGestureRecognizer; // @synthesize pinFloatingApplicationGestureRecognizer=_pinFloatingApplicationGestureRecognizer;
@property(retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *moveFloatingApplicationGestureRecognizer; // @synthesize moveFloatingApplicationGestureRecognizer=_moveFloatingApplicationGestureRecognizer;
@property(retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *swipeUpFloatingAppGestureRecognizer; // @synthesize swipeUpFloatingAppGestureRecognizer=_swipeUpFloatingAppGestureRecognizer;
@property(retain, nonatomic) SBGrabberTongue *floatingAppGrabberTongue; // @synthesize floatingAppGrabberTongue=_floatingAppGrabberTongue;
@property(retain, nonatomic) SBFluidScrunchGestureRecognizer *fluidScrunchGestureRecognizer; // @synthesize fluidScrunchGestureRecognizer=_fluidScrunchGestureRecognizer;
@property(retain, nonatomic) SBSwitcherForcePressSystemGestureRecognizer *deckSwitcherForcePressRecognizer; // @synthesize deckSwitcherForcePressRecognizer=_deckSwitcherForcePressRecognizer;
@property(nonatomic) _Bool shouldRubberbandGrabberViewForReduceMotion; // @synthesize shouldRubberbandGrabberViewForReduceMotion=_shouldRubberbandGrabberViewForReduceMotion;
@property(retain, nonatomic) UIView *exclusionTrapezoidDebugView; // @synthesize exclusionTrapezoidDebugView=_exclusionTrapezoidDebugView;
@property(retain, nonatomic) NSTimer *delayedHomeGrabberUpdateTimer; // @synthesize delayedHomeGrabberUpdateTimer=_delayedHomeGrabberUpdateTimer;
@property(retain, nonatomic) UINotificationFeedbackGenerator *edgeProtectFeedbackGenerator; // @synthesize edgeProtectFeedbackGenerator=_edgeProtectFeedbackGenerator;
@property(nonatomic) _Bool playedEdgeProtectHaptic; // @synthesize playedEdgeProtectHaptic=_playedEdgeProtectHaptic;
@property(nonatomic) _Bool interactivelyPresentingTongue; // @synthesize interactivelyPresentingTongue=_interactivelyPresentingTongue;
@property(nonatomic) _Bool usesHomeAffordanceRulesForGrabberTongue; // @synthesize usesHomeAffordanceRulesForGrabberTongue=_usesHomeAffordanceRulesForGrabberTongue;
@property(retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *activateReachabilityGestureRecognizer; // @synthesize activateReachabilityGestureRecognizer=_activateReachabilityGestureRecognizer;
@property(retain, nonatomic) SBGrabberTongue *deckGrabberTongue; // @synthesize deckGrabberTongue=_deckGrabberTongue;
@property(retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *deckInSwitcherPanGestureRecognizer; // @synthesize deckInSwitcherPanGestureRecognizer=_deckInSwitcherPanGestureRecognizer;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) SBReachabilitySettings *reachabilitySettings; // @synthesize reachabilitySettings=_reachabilitySettings;
@property(retain, nonatomic) SBFHomeGrabberSettings *homeGrabberSettings; // @synthesize homeGrabberSettings=_homeGrabberSettings;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(retain, nonatomic) SBAppSwitcherSettings *appSwitcherSettings; // @synthesize appSwitcherSettings=_appSwitcherSettings;
@property(nonatomic) __weak SBHomeGrabberView *currentHomeGrabberView; // @synthesize currentHomeGrabberView=_currentHomeGrabberView;
@property(nonatomic) __weak id <SBFluidSwitcherGestureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property(nonatomic) __weak SBFluidSwitcherViewController *floatingSwitcherContentController; // @synthesize floatingSwitcherContentController=_floatingSwitcherContentController;
@property(nonatomic) __weak SBFluidSwitcherViewController *mainSwitcherContentController; // @synthesize mainSwitcherContentController=_mainSwitcherContentController;
- (void).cxx_destruct;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (long long)_currentUnlockedEnvironmentMode;
- (id)_currentFloatingAppLayout;
- (id)_currentLayoutState;
- (void)_updateHomeGrabberWithAnimationMode:(long long)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (void)grabberTongueWillDismiss:(id)arg1;
- (void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresent:(id)arg1;
- (_Bool)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)shouldSuppressTongueViewForGrabberTongue:(id)arg1;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (_Bool)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)_updateExclusionTrapezoidDebugView;
- (_Bool)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(unsigned long long)arg1;
- (_Bool)_edgeLocationIsOutsideFloatingApplicationGrabberFreeRegion:(double)arg1;
- (id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
- (_Bool)_shouldSuppressEdgeProtectToAllowSwipesImmediatelyAfterTransition;
- (_Bool)_shouldSuppressEdgeProtect;
- (_Bool)_isEdgeLocationInHomeAffordanceRegion:(double)arg1;
- (_Bool)_shouldProtectEdgeLocation:(double)arg1;
- (void)_hideGrabberAnimated:(_Bool)arg1;
- (id)_switcherViewControllerForGestureRecognizer:(id)arg1;
- (_Bool)_isTransactionRunningForGestureRecognizer:(id)arg1;
- (Class)_fluidSwitcherGestureTransactionClassForGestureType:(long long)arg1;
- (long long)_gestureTypeForGestureRecognizer:(id)arg1;
- (_Bool)_shouldBeginSplitViewApplicationUnpinGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationPinGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationMoveGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationPresentGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationSwipeUpGesture:(id)arg1;
- (_Bool)_shouldAllowFloatingApplicationGesture:(id)arg1 failureReason:(id *)arg2;
- (_Bool)_shouldBeginDeckForcePressGesture:(id)arg1;
- (_Bool)_shouldBeginFluidScrunchGesture:(id)arg1;
- (_Bool)_shouldBeginDeckInSwitcherPanGesture:(id)arg1;
- (_Bool)_shouldBeginBottomEdgePanGesture:(id)arg1;
- (_Bool)_shouldBeginReachabilityGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)_floatingApplicationBounds;
- (_Bool)_shouldSplitViewApplicationUnpinGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldFloatingApplicationPinGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldFloatingApplicationMoveGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldFloatingApplicationSwipeUpGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldDeckInSwitcherPanGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldReachabilityGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didEndGesture:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didUpdateGesture:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didBeginGesture:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)_configureTransitionRequest:(id)arg1 forGestureBegin:(id)arg2;
- (void)_startFluidSwitcherTransactionForGestureRecognizer:(id)arg1;
- (void)_handleSwitcherGestureBegan:(id)arg1;
- (void)_handleFluidGesture:(id)arg1;
- (id)_layoutElementViewControllerAtLocation:(struct CGPoint)arg1;
- (void)dragAndDropInteractionManager:(id)arg1 didEndGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didUpdateGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didBeginGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2;
- (id)dragAndDropInteractionManager:(id)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(id)arg2;
- (id)dragAndDropInteractionManager:(id)arg1 displayItemForDraggingWindowWithGestureRecognizer:(id)arg2;
- (void)_handleWindowDragGestureRecognizer:(id)arg1;
- (void)_handleFloatingAppPresentGesture:(id)arg1;
- (void)_handleDeckSwitcherForcePressGesture:(id)arg1;
- (void)_updateReachabilityGestureSettings;
- (void)_handleScrunchGesture:(id)arg1;
- (void)_handleSwitcherPanGestureEnded:(id)arg1;
- (void)_handleSwitcherPanGestureChanged:(id)arg1;
- (void)_handleSwitcherPanGestureBegan:(id)arg1;
- (void)_handleDeckSwitcherPanGesture:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)completeGestureWithTransitionRequest:(id)arg1;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (void)invalidate;
- (void)_updateDeckSwitcherForcePressGesturePresence;
- (void)_updateSwitcherBottomEdgeGesturePresence;
- (void)_updateDeckSwitcherInSwitcherAndReachabilityGesturePresence;
- (void)_configureFloatingApplicationGestureRecognizers;
- (void)_configureScrunchGesture;
- (void)_setUpGestureRecognizers;
- (void)dealloc;
- (id)initWithMainSwitcherContentController:(id)arg1 floatingSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

