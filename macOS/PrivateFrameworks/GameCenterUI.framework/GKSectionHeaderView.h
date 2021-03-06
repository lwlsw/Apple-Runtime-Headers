//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class NSButton, NSLayoutConstraint, NSString, NSTextField;

@interface GKSectionHeaderView : GKHeaderWithUnderlineView
{
    BOOL _manualItemCount;
    BOOL _showShowAll;
    BOOL _allSectionItemsVisible;
    SEL _showAllAction;
    id _rightTarget;
    SEL _rightAction;
    CDUnknownFunctionPointerType _itemCountFormatter;
    long long _maxRange;
    NSTextField *_leftLabel;
    NSButton *_rightButton;
    NSLayoutConstraint *_showAllRightMarginConstraint;
    double _showAllRightMargin;
    unsigned long long _sectionIndex;
    long long _itemCount;
    long long _maxItemCount;
    long long _numberToShow;
}

@property(nonatomic) BOOL allSectionItemsVisible; // @synthesize allSectionItemsVisible=_allSectionItemsVisible;
@property(nonatomic) long long numberToShow; // @synthesize numberToShow=_numberToShow;
@property(nonatomic) BOOL showShowAll; // @synthesize showShowAll=_showShowAll;
@property(nonatomic) long long maxItemCount; // @synthesize maxItemCount=_maxItemCount;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) double showAllRightMargin; // @synthesize showAllRightMargin=_showAllRightMargin;
@property(nonatomic) NSLayoutConstraint *showAllRightMarginConstraint; // @synthesize showAllRightMarginConstraint=_showAllRightMarginConstraint;
@property(retain, nonatomic) NSButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) NSTextField *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) long long maxRange; // @synthesize maxRange=_maxRange;
@property(nonatomic) BOOL manualItemCount; // @synthesize manualItemCount=_manualItemCount;
@property(nonatomic) CDUnknownFunctionPointerType itemCountFormatter; // @synthesize itemCountFormatter=_itemCountFormatter;
@property(nonatomic) SEL rightAction; // @synthesize rightAction=_rightAction;
@property(nonatomic) id rightTarget; // @synthesize rightTarget=_rightTarget;
@property(nonatomic) SEL showAllAction; // @synthesize showAllAction=_showAllAction;
- (void)rightButtonTouched:(id)arg1;
- (void)updateGutterConstraints;
- (void)updateLabel;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
@property(retain, nonatomic) NSString *rightText;
@property(retain, nonatomic) NSString *leftText;
- (void)dealloc;
- (void)awakeFromNib;

@end

