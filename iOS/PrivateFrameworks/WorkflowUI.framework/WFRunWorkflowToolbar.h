//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/UIToolbarDelegate-Protocol.h>

@class NSString, NSUndoManager, UIBarButtonItem, UIToolbar;
@protocol WFRunWorkflowToolbarDelegate;

@interface WFRunWorkflowToolbar : UIView <UIToolbarDelegate>
{
    _Bool _running;
    _Bool _editing;
    _Bool _pulsating;
    _Bool _loading;
    _Bool _playEnabled;
    _Bool _shareEnabled;
    _Bool _shareHidden;
    NSUndoManager *_workflowUndoManager;
    id <WFRunWorkflowToolbarDelegate> _delegate;
    UIToolbar *_toolbar;
    UIBarButtonItem *_undoItem;
    UIBarButtonItem *_redoItem;
    UIBarButtonItem *_addItem;
    UIBarButtonItem *_runItem;
    UIBarButtonItem *_stopItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_flexibleSpaceItem;
}

@property(retain, nonatomic) UIBarButtonItem *flexibleSpaceItem; // @synthesize flexibleSpaceItem=_flexibleSpaceItem;
@property(retain, nonatomic) UIBarButtonItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) UIBarButtonItem *stopItem; // @synthesize stopItem=_stopItem;
@property(retain, nonatomic) UIBarButtonItem *runItem; // @synthesize runItem=_runItem;
@property(retain, nonatomic) UIBarButtonItem *addItem; // @synthesize addItem=_addItem;
@property(retain, nonatomic) UIBarButtonItem *redoItem; // @synthesize redoItem=_redoItem;
@property(retain, nonatomic) UIBarButtonItem *undoItem; // @synthesize undoItem=_undoItem;
@property(nonatomic) __weak UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak id <WFRunWorkflowToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shareHidden; // @synthesize shareHidden=_shareHidden;
@property(nonatomic) _Bool shareEnabled; // @synthesize shareEnabled=_shareEnabled;
@property(nonatomic) _Bool playEnabled; // @synthesize playEnabled=_playEnabled;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic, getter=isPulsating) _Bool pulsating; // @synthesize pulsating=_pulsating;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak NSUndoManager *workflowUndoManager; // @synthesize workflowUndoManager=_workflowUndoManager;
- (void).cxx_destruct;
- (long long)positionForBar:(id)arg1;
- (void)addTapped;
- (void)redoTapped;
- (void)undoTapped;
- (void)updateUndoItems;
- (void)updatePlayButtonVisibility;
- (void)updateShareButtonVisibility;
- (_Bool)isNotRunningAndIsEditing;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBarButtonItems;
- (void)shareTapped;
- (void)stopTapped;
- (void)playTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

