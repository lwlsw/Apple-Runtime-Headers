//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScene.h>

#import <CarPlay/CPWindowProviding-Protocol.h>
#import <CarPlay/UICoordinateSpace-Protocol.h>
#import <CarPlay/_UIContextBinderContextCreationPolicyHolding-Protocol.h>
#import <CarPlay/_UISceneUIWindowHosting-Protocol.h>

@class CPInterfaceController, CPWindow, NSString, UIScreen, UITraitCollection, _UIContextBinder;
@protocol CPTemplateApplicationSceneDelegate, NSObject, UICoordinateSpace;

@interface CPTemplateApplicationScene : UIScene <_UIContextBinderContextCreationPolicyHolding, CPWindowProviding, _UISceneUIWindowHosting, UICoordinateSpace>
{
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
    id <NSObject> _sceneWillConnectObserver;
    id <NSObject> _didFinishLaunchingObserver;
    _Bool _sceneWillConnect;
    CPWindow *_carWindow;
    CPInterfaceController *_interfaceController;
    struct CGRect _bounds;
}

+ (_Bool)_hostsWindows;
+ (id)activeTemplateScene;
@property(readonly, nonatomic) CPInterfaceController *interfaceController; // @synthesize interfaceController=_interfaceController;
@property(retain, nonatomic) CPWindow *carWindow; // @synthesize carWindow=_carWindow;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_definition;
- (void)_deliverInterfaceControllerToDelegate;
- (id)_componentForKey:(id)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (_Bool)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)_allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_detachWindow:(id)arg1;
- (void)_attachWindow:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *_traitCollection;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) id <UICoordinateSpace> _coordinateSpace;
@property(readonly, nonatomic) long long _interfaceOrientation;
@property(readonly, nonatomic) UIScreen *_screen;
- (void)_invalidate;
- (void)_readySceneForConnection;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id <CPTemplateApplicationSceneDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

