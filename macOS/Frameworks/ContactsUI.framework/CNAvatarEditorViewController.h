//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/CNLikenessEditorHostDelegate-Protocol.h>

@class CNMutableContact, CNPhotoLikenessEditorViewController;
@protocol CNAvatarEditorDelegate;

@interface CNAvatarEditorViewController : NSViewController <CNLikenessEditorHostDelegate>
{
    id <CNAvatarEditorDelegate> _delegate;
    NSViewController *_activeViewController;
    CNPhotoLikenessEditorViewController *_photoLikenessEditor;
    CNMutableContact *_editorContact;
}

@property(retain) CNMutableContact *editorContact; // @synthesize editorContact=_editorContact;
@property(retain) CNPhotoLikenessEditorViewController *photoLikenessEditor; // @synthesize photoLikenessEditor=_photoLikenessEditor;
@property __weak NSViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property __weak id <CNAvatarEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isBuddy;
- (void)close;
- (void)save;
- (void)setReadyToSave;
- (void)updateNavigationForReturn;
- (BOOL)isBackwardsNavigationEnabled;
- (void)setNextButtonTitle:(id)arg1;
- (void)setNextButtonAction:(CDUnknownBlockType)arg1;
- (void)setNextButtonEnabled:(BOOL)arg1;
- (void)setPreviousButtonAction:(CDUnknownBlockType)arg1;
- (void)setPreviousButtonEnabled:(BOOL)arg1;
- (void)setWindowTitle:(id)arg1;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (id)likeness;
- (id)editorControllerForLikenessType:(unsigned long long)arg1;
- (id)activeEditorController;
- (void)setActiveViewController:(id)arg1 inView:(id)arg2 withTopInset:(double)arg3;
- (void)setActiveViewController:(id)arg1 inView:(id)arg2;
- (void)setContact:(id)arg1;
- (id)contact;
- (void)loadView;
- (id)initWithSettingsDelegate:(id)arg1;

@end

