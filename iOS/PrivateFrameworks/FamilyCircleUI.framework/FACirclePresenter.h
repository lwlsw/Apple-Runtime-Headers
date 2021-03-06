//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/FACircleRemoteUIDelegateDelegate-Protocol.h>

@class FACircleRemoteUIDelegate, NSString, RUIStyle, RemoteUIController, UIViewController;

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate>
{
    RemoteUIController *_remoteUIController;
    FACircleRemoteUIDelegate *_remoteUIDelegate;
    CDUnknownBlockType _completion;
    UIViewController *_presenter;
    RUIStyle *_customRUIStyle;
}

@property(retain, nonatomic) RUIStyle *customRUIStyle; // @synthesize customRUIStyle=_customRUIStyle;
@property(retain, nonatomic) UIViewController *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)FACircleRemoteUIDelegate:(id)arg1 completedWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)loadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_serverHookHandlerWithRemoteUIController:(id)arg1;
- (id)initWithPresenter:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

