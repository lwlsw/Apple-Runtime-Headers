//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class PUICCollectionViewPlatterBackgroundView, UIColor, UIImage, UIImageView;

@interface PUICSwipeActionButton : UIButton
{
    PUICCollectionViewPlatterBackgroundView *_backgroundView;
    UIImageView *_imageView;
    float _buttonScale;
    float _buttonAlpha;
}

@property(nonatomic) float buttonAlpha; // @synthesize buttonAlpha=_buttonAlpha;
@property(nonatomic) float buttonScale; // @synthesize buttonScale=_buttonScale;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) float buttonCornerRadius;
@property(nonatomic, getter=isCircle) _Bool circle;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIColor *platterColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

