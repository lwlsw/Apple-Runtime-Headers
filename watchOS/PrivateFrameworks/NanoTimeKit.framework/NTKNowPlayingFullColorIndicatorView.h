//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/CLKFullColorImageView-Protocol.h>
#import <NanoTimeKit/CLKMonochromeComplicationView-Protocol.h>

@class NMUNowPlayingIndicatorView, NSString, NTKNowPlayingIndicatorFullColorProvider, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKNowPlayingFullColorIndicatorView : UIView <CLKFullColorImageView, CLKMonochromeComplicationView>
{
    NMUNowPlayingIndicatorView *_backgroundNowPlayingView;
    NMUNowPlayingIndicatorView *_indicatorView;
    NTKNowPlayingIndicatorFullColorProvider *_imageProvider;
    UIColor *_color;
    _Bool _colorHasBeenUpdated;
    _Bool _paused;
    _Bool _tritium_isOn;
    id <CLKMonochromeFilterProvider> _filterProvider;
}

+ (_Bool)tritium_wantsCrossfadeAnimation;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(float)arg1;
- (id)_createIndicatorView;
- (void)layoutSubviews;
- (void)configureWithImageProvider:(id)arg1 reason:(int)arg2;
- (void)resumeLiveFullColorImageView;
- (void)pauseLiveFullColorImageView;
- (id)initFullColorImageViewWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

