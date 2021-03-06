//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBWorkspaceTransitionContext.h>

#import <SpringBoard/SBDisplayLayoutContext-Protocol.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSSet, NSString, SBApplicationSceneEntity, SBApplicationSceneEntityDestructionIntent, SBLayoutState, SBMainWorkspaceTransitionRequest, SBWorkspaceEntity;
@protocol SBWorkspaceApplicationSceneTransitionContextDelegate;

@interface SBWorkspaceApplicationSceneTransitionContext : SBWorkspaceTransitionContext <SBDisplayLayoutContext>
{
    CDUnknownBlockType _resultBlock;
    _Bool _background;
    _Bool _fencesAnimations;
    _Bool _alwaysRunsWatchdog;
    _Bool _waitsForSceneUpdates;
    _Bool _sentActivationResult;
    SBLayoutState *_layoutState;
    SBLayoutState *_previousLayoutState;
    NSMutableDictionary *_requestedWorkspaceEntityForLayoutRoleMutableDictionary;
    _Bool _suspendsInlineAppExposeCancellation;
    _Bool _prefersTouchCancellationDisabled;
    _Bool __alreadyPopulatedRequestedWorkspaceEntities;
    id <SBWorkspaceApplicationSceneTransitionContextDelegate> _delegate;
    long long _interfaceOrientation;
    long long _preferredInterfaceOrientation;
    SBWorkspaceEntity *_deactivatingEntity;
    long long _requestedSpaceConfiguration;
    long long _requestedFloatingConfiguration;
    long long _requestedUnlockedEnvironmentMode;
    long long _requestedFloatingSwitcherVisible;
    NSString *_requestedAppExposeBundleID;
    SBApplicationSceneEntityDestructionIntent *_intentForEntityRemoval;
}

@property(nonatomic, setter=_setAlreadyPopulatedRequestedWorkspaceEntities:) _Bool _alreadyPopulatedRequestedWorkspaceEntities; // @synthesize _alreadyPopulatedRequestedWorkspaceEntities=__alreadyPopulatedRequestedWorkspaceEntities;
@property(retain, nonatomic) SBApplicationSceneEntityDestructionIntent *intentForEntityRemoval; // @synthesize intentForEntityRemoval=_intentForEntityRemoval;
@property(copy, nonatomic) NSString *requestedAppExposeBundleID; // @synthesize requestedAppExposeBundleID=_requestedAppExposeBundleID;
@property(nonatomic) long long requestedFloatingSwitcherVisible; // @synthesize requestedFloatingSwitcherVisible=_requestedFloatingSwitcherVisible;
@property(nonatomic) long long requestedUnlockedEnvironmentMode; // @synthesize requestedUnlockedEnvironmentMode=_requestedUnlockedEnvironmentMode;
@property(nonatomic) long long requestedFloatingConfiguration; // @synthesize requestedFloatingConfiguration=_requestedFloatingConfiguration;
@property(nonatomic) long long requestedSpaceConfiguration; // @synthesize requestedSpaceConfiguration=_requestedSpaceConfiguration;
@property(retain, nonatomic) SBWorkspaceEntity *deactivatingEntity; // @synthesize deactivatingEntity=_deactivatingEntity;
@property(nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property(nonatomic) _Bool prefersTouchCancellationDisabled; // @synthesize prefersTouchCancellationDisabled=_prefersTouchCancellationDisabled;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) __weak id <SBWorkspaceApplicationSceneTransitionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool suspendsInlineAppExposeCancellation; // @synthesize suspendsInlineAppExposeCancellation=_suspendsInlineAppExposeCancellation;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) _Bool waitsForSceneUpdates; // @synthesize waitsForSceneUpdates=_waitsForSceneUpdates;
@property(nonatomic) _Bool alwaysRunsWatchdog; // @synthesize alwaysRunsWatchdog=_alwaysRunsWatchdog;
@property(nonatomic) _Bool fencesAnimations; // @synthesize fencesAnimations=_fencesAnimations;
@property(nonatomic, getter=isBackground) _Bool background; // @synthesize background=_background;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_displayConfiguration;
@property(readonly, nonatomic) double watchdogScaleFactor;
- (struct CGRect)frameForApplicationSceneEntity:(id)arg1;
- (void)finalize;
@property(readonly, nonatomic) SBLayoutState *previousLayoutState;
@property(readonly, nonatomic) SBLayoutState *layoutState;
- (long long)_lockedInterfaceOrientation;
- (long long)interfaceOrientationOrPreferredOrientation;
@property(readonly, nonatomic) SBApplicationSceneEntity *resolvedActivatingApplicationSceneEntity;
- (void)_setRequestedWorkspaceEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)requestedWorkspaceEntityForLayoutRole:(long long)arg1;
@property(retain, nonatomic, setter=_setRequestedActivatingWorkspaceEntity:) SBWorkspaceEntity *requestedActivatingWorkspaceEntity;
- (id)previousApplicationSceneEntityForBundleID:(id)arg1;
- (id)previousApplicationSceneEntityForLayoutRole:(long long)arg1;
- (id)applicationSceneEntityForBundleID:(id)arg1;
- (id)applicationSceneEntityForLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) NSSet *previousApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *applicationSceneEntities;
- (void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)previousEntityForLayoutRole:(long long)arg1;
- (void)setEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)entityForLayoutRole:(long long)arg1;
@property(retain, nonatomic) SBWorkspaceEntity *activatingEntity;
- (void)sendActivationResultErrorCode:(long long)arg1 reason:(id)arg2;
- (_Bool)hasSentActivationResult;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak SBMainWorkspaceTransitionRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end

