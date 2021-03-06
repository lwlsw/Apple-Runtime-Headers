//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier
{
    _Bool _wantsResignActiveAndAsyncRenderingAssertions;
    unsigned long long _transitionPhase;
    NSUUID *_transitionID;
}

@property(readonly, nonatomic) NSUUID *transitionID; // @synthesize transitionID=_transitionID;
@property(readonly, nonatomic) unsigned long long transitionPhase; // @synthesize transitionPhase=_transitionPhase;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)_handleTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_setTransitionPhase:(unsigned long long)arg1;
- (long long)keyboardSuppressionMode;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (long long)transitionLiveContentRasterizationStyle;
- (long long)liveContentRasterizationStyle;
- (long long)sceneDeactivationReason;
- (_Bool)wantsResignActiveAssertion;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)transitionDidEnd;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (_Bool)isUpdatingLayout;
- (_Bool)isPreparingLayout;
- (id)initWithTransitionID:(id)arg1;

@end

