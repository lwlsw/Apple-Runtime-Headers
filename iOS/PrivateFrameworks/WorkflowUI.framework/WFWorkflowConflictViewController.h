//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UIBarButtonItem, WFWorkflow, WFWorkflowConflict;
@protocol WFWorkflowConflictViewControllerDelegate;

@interface WFWorkflowConflictViewController : UITableViewController <UINavigationControllerDelegate>
{
    id <WFWorkflowConflictViewControllerDelegate> _delegate;
    WFWorkflowConflict *_conflict;
    UIBarButtonItem *_keepItem;
    WFWorkflow *_workflowBeingPreviewed;
}

@property(retain, nonatomic) WFWorkflow *workflowBeingPreviewed; // @synthesize workflowBeingPreviewed=_workflowBeingPreviewed;
@property(nonatomic) __weak UIBarButtonItem *keepItem; // @synthesize keepItem=_keepItem;
@property(readonly, nonatomic) WFWorkflowConflict *conflict; // @synthesize conflict=_conflict;
@property(nonatomic) __weak id <WFWorkflowConflictViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)workflowForRow:(unsigned long long)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateKeepButton;
- (void)keepPressed;
- (void)cancelPressed;
- (void)viewDidLoad;
- (id)initWithConflict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

