//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ShareSheet/UIPrintActivity.h>

#import <ShareSheet/QLPreviewControllerDataSource-Protocol.h>
#import <ShareSheet/QLPreviewControllerDelegate-Protocol.h>
#import <ShareSheet/UIDocumentPickerDelegate-Protocol.h>

@class NSString, QLPreviewController, UICreatePDFActivityItem;

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate>
{
    QLPreviewController *_previewController;
    UICreatePDFActivityItem *_previewURLItem;
}

+ (unsigned long long)_xpcAttributes;
@property(retain, nonatomic) UICreatePDFActivityItem *previewURLItem; // @synthesize previewURLItem=_previewURLItem;
@property(retain, nonatomic) QLPreviewController *previewController; // @synthesize previewController=_previewController;
- (void).cxx_destruct;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (_Bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1;
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (void)_cleanup;
- (void)performActivity;
- (id)activityViewController;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(_Bool)arg3;
- (id)activityTitle;
- (id)_systemImageName;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

