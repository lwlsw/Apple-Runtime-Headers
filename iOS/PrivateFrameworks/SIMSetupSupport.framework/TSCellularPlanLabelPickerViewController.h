//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import <SIMSetupSupport/UITextFieldDelegate-Protocol.h>

@class CTCellularPlanItem, CTUserLabel, NSArray, NSIndexPath, NSString;

@interface TSCellularPlanLabelPickerViewController : UITableViewController <UITextFieldDelegate>
{
    CTCellularPlanItem *_associatedPlanItem;
    CTUserLabel *_initialLabel;
    NSArray *_predefinedUserLabels;
    NSIndexPath *_chosenLabelIndexPath;
    CTUserLabel *_customLabel;
}

@property(retain) CTUserLabel *customLabel; // @synthesize customLabel=_customLabel;
@property(retain) NSIndexPath *chosenLabelIndexPath; // @synthesize chosenLabelIndexPath=_chosenLabelIndexPath;
@property(retain) NSArray *predefinedUserLabels; // @synthesize predefinedUserLabels=_predefinedUserLabels;
@property(retain) CTUserLabel *initialLabel; // @synthesize initialLabel=_initialLabel;
@property(retain) CTCellularPlanItem *associatedPlanItem; // @synthesize associatedPlanItem=_associatedPlanItem;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonTapped;
- (id)customLabelRowValue;
- (id)customLabelIndexPath;
@property(readonly) CTUserLabel *chosenLabel;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

