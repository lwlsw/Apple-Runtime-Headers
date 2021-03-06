//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MFRecentComposeRecipientGroup;
@protocol MFGroupDetailViewControllerDelegate;

@interface MFGroupDetailViewController : UITableViewController
{
    id <MFGroupDetailViewControllerDelegate> _delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property(retain, nonatomic) MFRecentComposeRecipientGroup *group; // @synthesize group=_group;
@property(nonatomic) __weak id <MFGroupDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_removeButtonTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;

@end

