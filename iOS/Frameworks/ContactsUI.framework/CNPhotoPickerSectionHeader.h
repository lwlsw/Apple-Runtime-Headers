//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIButton *_actionButton;
    CDUnknownBlockType _actionBlock;
    UIStackView *_stackView;
}

+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:(_Bool)arg1;
+ (id)reusableIdentifier;
+ (id)actionButtonFont;
+ (id)titleLabelFont;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)actionButtonPressed:(id)arg1;
- (void)updateDynamicStackViewProperties;
- (void)setupConstraints;
- (void)updateStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

