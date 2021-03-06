//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/NTKOlympusContentViewDelegate-Protocol.h>
#import <NanoTimeKit/NTKTimeView-Protocol.h>
#import <NanoTimeKit/NTKTritiumAnimator-Protocol.h>

@class CLKDevice, NSDate, NSString, NTKOlympusTimeContentView, PUICClientSideAnimation;
@protocol NTKOlympusViewDelegate;

@interface NTKOlympusTimeView : UIView <NTKOlympusContentViewDelegate, NTKTimeView, NTKTritiumAnimator>
{
    _Bool frozen;
    _Bool _maskingPathStartsFromHourHand;
    id <NTKOlympusViewDelegate> _delegate;
    NSDate *_date;
    float _hourHandAngle;
    float _minuteHandAngle;
    unsigned int _currentStyle;
    unsigned int _currentDial;
    unsigned int _currentColor;
    PUICClientSideAnimation *_olympusMaskAnimation;
    CLKDevice *_device;
    NTKOlympusTimeContentView *_contentView;
    NTKOlympusTimeContentView *_overlayContentView;
    struct CGSize _maskingSize;
}

@property(nonatomic) struct CGSize maskingSize; // @synthesize maskingSize=_maskingSize;
@property(nonatomic) _Bool maskingPathStartsFromHourHand; // @synthesize maskingPathStartsFromHourHand=_maskingPathStartsFromHourHand;
@property(retain, nonatomic) NTKOlympusTimeContentView *overlayContentView; // @synthesize overlayContentView=_overlayContentView;
@property(retain, nonatomic) NTKOlympusTimeContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) PUICClientSideAnimation *olympusMaskAnimation; // @synthesize olympusMaskAnimation=_olympusMaskAnimation;
@property(nonatomic) unsigned int currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) unsigned int currentDial; // @synthesize currentDial=_currentDial;
@property(nonatomic) unsigned int currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) float minuteHandAngle; // @synthesize minuteHandAngle=_minuteHandAngle;
@property(nonatomic) float hourHandAngle; // @synthesize hourHandAngle=_hourHandAngle;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <NTKOlympusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen;
- (void).cxx_destruct;
- (_Bool)_maskingPathStartsFromHourHandForDate:(id)arg1;
- (void)openVictoryAppFromRect:(struct CGRect)arg1;
- (void)olympusContentView:(id)arg1 didHandleLogoTouchUpInsideFromRect:(struct CGRect)arg2;
- (void)olympusContentViewDidHandleLogoResetHighlight:(id)arg1;
- (void)olympusContentViewDidHandleLogoHighlighted:(id)arg1;
- (void)tritium_transitionToFrameSpecifier:(id)arg1;
- (void)tritium_transitionToTritiumOnWithProgress:(float)arg1;
- (void)tritium_transitionToTritiumOffWithProgress:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (_Bool)_hasWindrunnerWedge;
- (float)_calculateDeviationBetweenHourAngle:(float)arg1 minuteAngle:(float)arg2;
- (void)applyWindrunnerMaskStartAngle:(float)arg1 endAngle:(float)arg2;
- (void)applyWindrunnerMaskWithHourAngle:(float)arg1 minuteAngle:(float)arg2;
- (void)updateMaskingPathStartPointWithNewHourAngle:(float)arg1 newMinuteAngle:(float)arg2;
- (void)applyWindrunnerMaskWithDate:(id)arg1 force:(_Bool)arg2;
- (void)applyWindrunnerMaskWithDate:(id)arg1;
- (_Bool)canUpdateWindrunnerMask;
- (float)shortestPathBetweenStartAngle:(float)arg1 targetAngle:(float)arg2;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)applyTransitionFraction:(float)arg1 fromDial:(unsigned int)arg2 toDial:(unsigned int)arg3;
- (void)applyTransitionFraction:(float)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(_Bool)arg4;
- (void)applyTransitionFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)setupViewsForCurrentState:(_Bool)arg1;
- (void)cleanupAfterEditing;
- (void)prepareForEditing;
- (void)_createOverlayViewIfNeeded;
- (void)_createContentViewIfNeeded;
- (void)configureViewsForEditing;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (void)layoutSubviews;
- (id)initWithDevice:(id)arg1 dial:(unsigned int)arg2 style:(unsigned int)arg3 color:(unsigned int)arg4 date:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

