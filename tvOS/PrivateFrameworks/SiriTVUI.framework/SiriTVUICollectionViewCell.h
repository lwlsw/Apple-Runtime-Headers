//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <SiriTVUI/SiriTVUIClickRecognizerDelegate-Protocol.h>

@class NSString, SiriTVUIVibrantLabel, UIImage, UIImageView, UITapGestureRecognizer, _SiriTVUIFloatingContentView;
@protocol SiriTVUICollectionViewCellDelegate;

@interface SiriTVUICollectionViewCell : UICollectionViewCell <SiriTVUIClickRecognizerDelegate>
{
    _SiriTVUIFloatingContentView *_floatingContentView;
    UIImageView *_imageView;
    SiriTVUIVibrantLabel *_titleLabel;
    SiriTVUIVibrantLabel *_subtitleVibrantLabel;
    UITapGestureRecognizer *_clickRecognizer;
    NSString *_title;
    NSString *_subtitle;
    double _fontSize;
    id <SiriTVUICollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriTVUICollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_updateTextForFocus:(_Bool)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)clickEndedEvent:(_Bool)arg1;
- (void)clickBeganEvent;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_beginMarqueeing;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_layoutSubviewsForFocused:(_Bool)arg1 selected:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_setTextLabelsColor:(_Bool)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

