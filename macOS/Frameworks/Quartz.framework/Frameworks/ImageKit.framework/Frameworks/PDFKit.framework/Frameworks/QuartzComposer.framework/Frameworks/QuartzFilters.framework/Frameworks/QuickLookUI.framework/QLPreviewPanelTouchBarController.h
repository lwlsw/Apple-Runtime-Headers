//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookUI/NSTouchBarDelegate-Protocol.h>
#import <QuickLookUI/NSTouchBarProvider-Protocol.h>

@class NSGroupTouchBarItem, NSString, NSTouchBar, NSTouchBarItem;
@protocol QLPreviewTouchBarDelegate;

@interface QLPreviewPanelTouchBarController : NSObject <NSTouchBarProvider, NSTouchBarDelegate>
{
    NSTouchBar *_touchBar;
    id <QLPreviewTouchBarDelegate> _delegate;
    NSTouchBarItem *_openItem;
    NSTouchBarItem *_shareItem;
    NSTouchBarItem *_markupItem;
    NSTouchBarItem *_rotateLeftItem;
    NSTouchBarItem *_rotateRightItem;
    NSTouchBarItem *_trimItem;
    NSTouchBarItem *_closeItem;
    NSTouchBarItem *_revertItem;
    NSTouchBarItem *_doneItem;
    NSTouchBarItem *_prevNextItem;
    NSTouchBarItem *_indexItem;
    NSGroupTouchBarItem *_contentItem;
}

@property(retain) NSGroupTouchBarItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain) NSTouchBarItem *indexItem; // @synthesize indexItem=_indexItem;
@property(retain) NSTouchBarItem *prevNextItem; // @synthesize prevNextItem=_prevNextItem;
@property(retain) NSTouchBarItem *doneItem; // @synthesize doneItem=_doneItem;
@property(retain) NSTouchBarItem *revertItem; // @synthesize revertItem=_revertItem;
@property(retain) NSTouchBarItem *closeItem; // @synthesize closeItem=_closeItem;
@property(retain) NSTouchBarItem *trimItem; // @synthesize trimItem=_trimItem;
@property(retain) NSTouchBarItem *rotateRightItem; // @synthesize rotateRightItem=_rotateRightItem;
@property(retain) NSTouchBarItem *rotateLeftItem; // @synthesize rotateLeftItem=_rotateLeftItem;
@property(retain) NSTouchBarItem *markupItem; // @synthesize markupItem=_markupItem;
@property(retain) NSTouchBarItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain) NSTouchBarItem *openItem; // @synthesize openItem=_openItem;
@property(retain, nonatomic) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <QLPreviewTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toggleIndexSheet:(id)arg1;
- (void)prevNextSegmentPushed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_touchBarIdentifiers;
- (void)_validateTouchBar;
- (void)updateTouchBar;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

