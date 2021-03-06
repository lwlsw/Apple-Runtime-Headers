//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/TPView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TPBadgeView : TPView
{
    unsigned int _sizeCategory;
    unsigned int _theme;
    NSString *_title;
    UILabel *_titleLabel;
    float _titleLabelFontSize;
    float _layerCornerRadius;
    NSLayoutConstraint *_heightAnchorLayoutConstraint;
    NSLayoutConstraint *_widthAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorLayoutConstraint;
    float _heightAnchorLayoutConstraintConstantFontMultiplier;
    float _titleLabelLeadingAnchorLayoutConstraintConstant;
    float _titleLabelTrailingAnchorLayoutConstraintConstant;
}

@property(nonatomic) float titleLabelTrailingAnchorLayoutConstraintConstant; // @synthesize titleLabelTrailingAnchorLayoutConstraintConstant=_titleLabelTrailingAnchorLayoutConstraintConstant;
@property(nonatomic) float titleLabelLeadingAnchorLayoutConstraintConstant; // @synthesize titleLabelLeadingAnchorLayoutConstraintConstant=_titleLabelLeadingAnchorLayoutConstraintConstant;
@property(nonatomic) float heightAnchorLayoutConstraintConstantFontMultiplier; // @synthesize heightAnchorLayoutConstraintConstantFontMultiplier=_heightAnchorLayoutConstraintConstantFontMultiplier;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint; // @synthesize titleLabelTrailingAnchorLayoutConstraint=_titleLabelTrailingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint; // @synthesize titleLabelLeadingAnchorLayoutConstraint=_titleLabelLeadingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthAnchorLayoutConstraint; // @synthesize widthAnchorLayoutConstraint=_widthAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchorLayoutConstraint; // @synthesize heightAnchorLayoutConstraint=_heightAnchorLayoutConstraint;
@property(nonatomic) float layerCornerRadius; // @synthesize layerCornerRadius=_layerCornerRadius;
@property(nonatomic) float titleLabelFontSize; // @synthesize titleLabelFontSize=_titleLabelFontSize;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned int sizeCategory; // @synthesize sizeCategory=_sizeCategory;
- (void).cxx_destruct;
- (float)scaledLayoutValueForBaseValue:(float)arg1 shouldLowerBound:(_Bool)arg2;
- (float)scaledLayoutValueForBaseValue:(float)arg1;
- (void)updateActiveHorizontalConstraints;
- (void)updateTheme;
- (void)updateSizeCategory;
- (void)updateFonts;
- (void)unloadConstraints;
- (void)updateConstraintsConstants;
- (void)loadConstraints;
- (void)commonInit;
- (id)initWithTitle:(id)arg1 theme:(unsigned int)arg2;
- (id)initWithTitle:(id)arg1;

@end

