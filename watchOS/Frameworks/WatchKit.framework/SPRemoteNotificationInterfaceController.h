//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/SPNotificationInterfaceController.h>

#import <WatchKit/SPHostingViewControllerDelegate-Protocol.h>
#import <WatchKit/SPInterfaceViewControllerDelegate-Protocol.h>
#import <WatchKit/SPRemoteNotificationViewService-Protocol.h>
#import <WatchKit/SPViewControllerDelegate-Protocol.h>

@class CAContext, NSDictionary, NSString, SPRemoteNotificationHostedWindow, WKUserNotificationInterfaceController;
@protocol SPRemoteNotificationViewHost;

@interface SPRemoteNotificationInterfaceController : SPNotificationInterfaceController <SPInterfaceViewControllerDelegate, SPHostingViewControllerDelegate, SPViewControllerDelegate, SPRemoteNotificationViewService>
{
    _Bool _hasAppeared;
    CAContext *_layerContext;
    SPRemoteNotificationHostedWindow *_hostedWindow;
    NSString *_hostClientIdentifier;
    NSDictionary *_dynamicInterface;
    id <SPRemoteNotificationViewHost> _strongHost;
    struct CGRect _lastViewControllerSetNeedsLayoutFrame;
}

+ (id)serviceInterface;
+ (id)hostInterface;
@property(nonatomic) struct CGRect lastViewControllerSetNeedsLayoutFrame; // @synthesize lastViewControllerSetNeedsLayoutFrame=_lastViewControllerSetNeedsLayoutFrame;
@property(retain, nonatomic) id <SPRemoteNotificationViewHost> strongHost; // @synthesize strongHost=_strongHost;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) NSDictionary *dynamicInterface; // @synthesize dynamicInterface=_dynamicInterface;
@property(copy) NSString *hostClientIdentifier; // @synthesize hostClientIdentifier=_hostClientIdentifier;
@property(retain) SPRemoteNotificationHostedWindow *hostedWindow; // @synthesize hostedWindow=_hostedWindow;
@property(retain) CAContext *layerContext; // @synthesize layerContext=_layerContext;
- (void).cxx_destruct;
- (id)underlyingUIHostingControllerForHostingViewController:(id)arg1;
- (id)actionItemsForHostingViewController:(id)arg1;
- (id)interfaceControllerForViewController:(id)arg1;
- (void)interfaceContentSystemMinimumLayoutMargins:(id)arg1 withValue:(struct NSDirectionalEdgeInsets)arg2;
- (void)interfaceContentSafeAreaInsets:(id)arg1 withValue:(struct UIEdgeInsets)arg2;
- (void)interfaceOffsetDidScrollToBottom:(id)arg1;
- (void)interfaceOffsetDidScrollToTop:(id)arg1;
- (void)interfaceDidScrollToTop:(id)arg1;
- (void)viewController:(id)arg1 crownData:(id)arg2;
- (void)xpcInterfaceViewController:(id)arg1 gestureData:(id)arg2;
- (void)interfaceViewController:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)viewController:(id)arg1 sendAction:(id)arg2 withValue:(id)arg3 actionTarget:(id)arg4;
- (void)viewControllerDidDisappearAfterModalPresentation:(id)arg1;
- (void)viewControllerDidAppearAfterModalDismissal:(id)arg1;
- (void)interfaceViewControllerDidUpdateInterfaceValues:(id)arg1;
- (void)viewControllerDidUpdateFullScreen:(id)arg1;
- (void)viewController:(id)arg1 tappedActionWithUUID:(id)arg2;
- (void)viewControllerWillDisappear:(id)arg1;
- (void)viewControllerDidAppear:(id)arg1;
- (void)viewControllerDidDeactivate:(id)arg1;
- (void)viewControllerWillActivate:(id)arg1;
- (void)viewControllerDidRelease:(id)arg1;
- (void)viewController:(id)arg1 createWKInterfaceControllerClass:(id)arg2 properties:(id)arg3 contextID:(id)arg4 creationCompletion:(CDUnknownBlockType)arg5;
- (void)_vendInterface:(id)arg1 isHostingController:(_Bool)arg2;
- (void)_setHostActiveService;
- (void)takeSnapshot:(CDUnknownBlockType)arg1;
- (void)sizeThatFits:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)vendBulletin:(id)arg1 forceStatic:(_Bool)arg2;
- (void)receiveAdditionalBulletinData:(id)arg1 bulletinForLocal:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (id)_generateSnapshotImage:(id)arg1;
- (void)delayed:(id)arg1;
@property(readonly) WKUserNotificationInterfaceController *notificationController;
@property(readonly) unsigned int layerContextId;
- (void)viewDidLoad;
- (void)loadView;
- (id)clientIdentifier;
- (void)tearDown;
- (id)initWithHost:(id)arg1 hostID:(id)arg2 linkedOnOrAfterGlory:(_Bool)arg3 clientIdentifier:(id)arg4 extensionConnection:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

