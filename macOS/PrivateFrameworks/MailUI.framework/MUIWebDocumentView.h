//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MUIWKWebViewController, MUIWebDocument;

@interface MUIWebDocumentView : NSView
{
    unsigned long long _loadedState;
    struct CGSize _contentSize;
    double _preferredMinLayoutWidth;
    BOOL _preparingToLayoutSynchronously;
    NSView *_snapshotView;
    CDUnknownBlockType _prepareToLayoutSynchronouslyCompletionHandler;
    MUIWKWebViewController *_wkWebViewController;
}

+ (id)keyPathsForValuesAffectingPageZoom;
+ (id)keyPathsForValuesAffectingWebDocument;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) MUIWKWebViewController *wkWebViewController; // @synthesize wkWebViewController=_wkWebViewController;
@property(copy, nonatomic) CDUnknownBlockType prepareToLayoutSynchronouslyCompletionHandler; // @synthesize prepareToLayoutSynchronouslyCompletionHandler=_prepareToLayoutSynchronouslyCompletionHandler;
@property(nonatomic) BOOL preparingToLayoutSynchronously; // @synthesize preparingToLayoutSynchronously=_preparingToLayoutSynchronously;
@property(readonly, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;
- (void)exportAttachmentsToApplication:(id)arg1;
- (BOOL)canExportAttachmentsToApplication:(id)arg1;
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;
- (void)saveAttachmentsWithPanel:(id)arg1;
- (void)quickLookAttachments:(id)arg1;
- (id)_attachmentControllersForAttachments:(id)arg1;
- (id)description;
- (BOOL)shouldHandleClickForURL:(id)arg1;
- (void)getSelectedText:(CDUnknownBlockType)arg1;
- (void)selectFindMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)findMatchesForString:(id)arg1 relativeToMatch:(id)arg2 findOptions:(unsigned long long)arg3 maxResults:(unsigned long long)arg4 resultCollector:(CDUnknownBlockType)arg5;
- (void)generateSelectionWebDocument:(CDUnknownBlockType)arg1;
- (void)generateStyleInlinedWebDocument:(CDUnknownBlockType)arg1;
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)mui_cancelSynchronousLayout;
- (void)mui_performLayoutSynchronously;
- (void)_readyToLayoutSynchronously;
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;
- (void)mui_cancelAnimation;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;
- (void)mui_didCacheDisplayInRect;
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)printOperationWithPrintInfo:(id)arg1;
- (void)prepareTilesInRect:(struct CGRect)arg1;
- (id)evaluateJavaScriptSynchronously:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL drawsBackground;
@property(nonatomic) BOOL shouldPaintToBounds;
@property(nonatomic) double pageZoom;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(nonatomic) unsigned long long loadedState;
@property(nonatomic) double preferredMinLayoutWidth;
@property(nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) __weak NSView *contentView;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)_updatePreferredMinLayoutWidth;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (BOOL)isFlipped;
- (void)tearDown;
- (void)_muiWebDocumentViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

