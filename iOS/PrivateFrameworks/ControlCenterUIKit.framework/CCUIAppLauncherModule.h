//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/CCUIContentModule-Protocol.h>

@class CCUIContentModuleContext, NSBundle, NSString, NSURL, UIImage, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule>
{
    NSBundle *_bundle;
    _Bool _supportsApplicationShortcuts;
    NSString *_applicationIdentifier;
    NSString *_displayName;
    CCUIContentModuleContext *_contentModuleContext;
    NSURL *_launchURL;
}

@property(nonatomic) _Bool supportsApplicationShortcuts; // @synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)contentViewControllerForContext:(id)arg1;
- (void)handleTapWithTouchType:(long long)arg1;
- (void)handleTouchDownWithTouchType:(long long)arg1;
- (id)launchURLForTouchType:(long long)arg1;
@property(readonly, copy, nonatomic) UIImage *iconGlyph;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property(readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

