//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TestFlightCore/TFImageView-Protocol.h>

@class NSString, TFAppLockupViewSpecification, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TFAppLockupView : UIView <TFImageView>
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_primarySubtitleLabel;
    UILabel *_secondarySubtitleLabel;
    TFAppLockupViewSpecification *_specification;
}

@property(retain, nonatomic) TFAppLockupViewSpecification *specification; // @synthesize specification=_specification;
@property(readonly, nonatomic) UILabel *secondarySubtitleLabel; // @synthesize secondarySubtitleLabel=_secondarySubtitleLabel;
@property(readonly, nonatomic) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setImage:(struct UIImage *)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGSize displayedIconSize;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_layoutLabelsInLayoutBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_styleSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

