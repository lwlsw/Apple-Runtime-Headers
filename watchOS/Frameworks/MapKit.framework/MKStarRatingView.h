//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage;

@interface MKStarRatingView : UIView
{
    float _rating;
    unsigned int _numLevels;
    float _padding;
    _Bool _highlighted;
    NSMutableArray *_ratingViews;
    int _numReviews;
    int _starStyle;
    UIImage *_fullStarImage;
    UIImage *_halfStarImage;
    UIImage *_emptyStarImage;
    UIImage *_fullStarHighlightedImage;
    UIImage *_halfStarHighlightedImage;
    UIImage *_emptyStarHighlightedImage;
}

+ (id)ratingAsAttributedString:(float)arg1 baseFont:(id)arg2 style:(int)arg3 theme:(id)arg4;
+ (id)ratingShortAsAttributedString:(float)arg1 baseFont:(id)arg2 theme:(id)arg3;
+ (id)textAttachmentimageNamed:(id)arg1 font:(id)arg2;
+ (id)halfStarTextAttachmentWithFont:(id)arg1;
+ (id)emptyStarTextAttachmentWithFont:(id)arg1;
+ (id)fullStarTextAttachmentWithFont:(id)arg1;
+ (id)colorForRating:(float)arg1;
@property(retain, nonatomic) UIImage *emptyStarHighlightedImage; // @synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage;
@property(retain, nonatomic) UIImage *halfStarHighlightedImage; // @synthesize halfStarHighlightedImage=_halfStarHighlightedImage;
@property(retain, nonatomic) UIImage *fullStarHighlightedImage; // @synthesize fullStarHighlightedImage=_fullStarHighlightedImage;
@property(retain, nonatomic) UIImage *emptyStarImage; // @synthesize emptyStarImage=_emptyStarImage;
@property(retain, nonatomic) UIImage *halfStarImage; // @synthesize halfStarImage=_halfStarImage;
@property(retain, nonatomic) UIImage *fullStarImage; // @synthesize fullStarImage=_fullStarImage;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(nonatomic) unsigned int numberOfRatingLevels; // @synthesize numberOfRatingLevels=_numLevels;
@property(nonatomic) int starStyle; // @synthesize starStyle=_starStyle;
- (void).cxx_destruct;
- (void)setPadding:(float)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_layoutStarViewsCreatingIfNeeded:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (float)verticalAlignmentCenterPercentage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (void)_commonInit;
- (id)initWithStyle:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

