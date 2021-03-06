//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InputMethodKit/IMKUICandidateWindowController.h>

@class IMKUIFastTrackVerticalLayout, IMKUISingleCandidateListView, NSArray;

@interface IMKUICandidateVerticalWindowController : IMKUICandidateWindowController
{
    double _accumulatedLengthOfCandidates;
    BOOL _changesSizeWhenScrolling;
    struct CGSize _currentSize;
    IMKUIFastTrackVerticalLayout *_fastTrackVerticalLayout;
    IMKUISingleCandidateListView *_listView;
    NSArray *_visibleLineIndices;
    BOOL _updatingCandidates;
}

@property(nonatomic) BOOL updatingCandidates; // @synthesize updatingCandidates=_updatingCandidates;
@property(retain, nonatomic) NSArray *visibleLineIndices; // @synthesize visibleLineIndices=_visibleLineIndices;
@property(retain, nonatomic) IMKUISingleCandidateListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) IMKUIFastTrackVerticalLayout *fastTrackVerticalLayout; // @synthesize fastTrackVerticalLayout=_fastTrackVerticalLayout;
@property(nonatomic) struct CGSize currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic) BOOL changesSizeWhenScrolling; // @synthesize changesSizeWhenScrolling=_changesSizeWhenScrolling;
@property(nonatomic) double accumulatedLengthOfCandidates; // @synthesize accumulatedLengthOfCandidates=_accumulatedLengthOfCandidates;
- (void).cxx_destruct;
- (id)appearanceView;
- (id)candidatesSelectableByKeyboard;
- (id)visibleCandidates;
- (id)parentView;
- (struct CGRect)frameForAccessibilityElement:(id)arg1;
- (void)moveAccessibilityElementToVisibleArea:(id)arg1;
- (long long)accessibilityOrientation;
- (void)selectPreviousSortingMode;
- (void)selectNextSortingMode;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveToEnd;
- (void)moveToBeginning;
- (void)moveBackwardOnePage;
- (void)moveForwardOnePage;
- (void)moveBackwardOneElement;
- (void)moveForwardOneElement;
- (void)hide;
- (void)updateLayoutForCurrentSize;
- (void)visibleIndicesChanged:(id)arg1 sender:(id)arg2;
- (void)setCandidateGroups:(id)arg1;
- (void)updateVisualElements;
- (void)loadWindow;
- (void)updateSortingBarView;
- (void)updateListView;
- (struct CGSize)proposedWindowSize;
- (struct CGSize)proposedInformationViewSize;
- (struct CGSize)proposedSortingBarSize;
- (struct CGSize)proposedListViewSize;
- (struct CGSize)minimumListViewSize;
- (struct CGSize)totalSizeForLayout;
- (struct CGRect)frameForListView;
- (void)updateLayout;
- (void)updateLayoutTraits;
- (void)setTopVisibleLine:(unsigned long long)arg1;
- (unsigned long long)topVisibleLine;
- (id)init;

@end

