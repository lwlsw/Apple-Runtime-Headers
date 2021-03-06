//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSArray;
@protocol EKEventAutocompleteResultsEditItemDelegate;

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem
{
    BOOL _suggestionApplied;
    NSArray *_results;
}

+ (id)_backgroundColor;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasSuggestedLocationResult;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;

// Remaining properties
@property(nonatomic) __weak id <EKEventAutocompleteResultsEditItemDelegate> delegate; // @dynamic delegate;

@end

