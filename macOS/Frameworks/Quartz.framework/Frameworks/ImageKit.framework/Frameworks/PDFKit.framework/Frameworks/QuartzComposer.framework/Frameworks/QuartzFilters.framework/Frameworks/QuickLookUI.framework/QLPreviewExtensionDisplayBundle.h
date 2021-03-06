//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookUI/QLUIServiceBaseDisplayBundle.h>

#import <QuickLookUI/QLRemoteViewControllerDelegate-Protocol.h>
#import <QuickLookUI/STLockoutViewControllerDelegate-Protocol.h>

@class NSExtension, NSString, NSView, QLPreviewHostExtensionContext, STLockoutViewController;
@protocol QLPreviewExtensionContextProtocol, QLPreviewExtensionViewControllerProtocol;

@interface QLPreviewExtensionDisplayBundle : QLUIServiceBaseDisplayBundle <QLRemoteViewControllerDelegate, STLockoutViewControllerDelegate>
{
    NSExtension *_extension;
    id _extensionRequestId;
    QLPreviewHostExtensionContext *_extensionContext;
    NSString *_extensionContentTitle;
    NSView *_containerView;
    STLockoutViewController *_lockoutViewController;
    struct CGSize _extensionPreferredPreviewSize;
}

@property(retain) STLockoutViewController *lockoutViewController; // @synthesize lockoutViewController=_lockoutViewController;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(copy) NSString *extensionContentTitle; // @synthesize extensionContentTitle=_extensionContentTitle;
@property struct CGSize extensionPreferredPreviewSize; // @synthesize extensionPreferredPreviewSize=_extensionPreferredPreviewSize;
@property(retain) QLPreviewHostExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(retain) id extensionRequestId; // @synthesize extensionRequestId=_extensionRequestId;
@property(retain) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)previewStatusDidChange;
- (id)bundleIDForScreentime;
- (void)modeDidChange;
@property(readonly) id <QLPreviewExtensionViewControllerProtocol> extensionServiceViewController;
- (id)serviceCrashError;
- (id)customDisplayName;
- (id)sizingConstraints;
- (void)updateExtensionPreviewForExternalResourceAccess:(id)arg1 withExtension:(id)arg2;
- (void)_insertRemoteView;
- (void)presentScreenTimeLockout:(BOOL)arg1;
- (int)loadWithHints:(id)arg1;
@property(readonly) id <QLPreviewExtensionContextProtocol> remoteExtensionContext;
- (id)quickLookView;
- (void)dealloc;
- (id)initWithPreview:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

