//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVDeckImageView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVLParadePreviewElement;

@interface TVLParadeView : TVDeckImageView <ATVUpdatable>
{
    TVLParadePreviewElement *_paradeElement;
}

@property(retain, nonatomic) TVLParadePreviewElement *paradeElement; // @synthesize paradeElement=_paradeElement;
- (void).cxx_destruct;
@property(nonatomic, getter=isPreviewPaused) _Bool previewPaused;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (void)layoutSubviews;
- (id)initWithParadePreviewElement:(id)arg1;

@end

