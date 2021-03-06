//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVTimeFormatter, AVTimeIndicatorPopover, AVTrimClipView, AVTrimDimmerView, AVTrimIndicatorFocusRingView, AVTrimIndicatorView, AVTrimSelectionEndFocusRingView, AVTrimSelectionStartFocusRingView, AVTrimSelectionView, AVTrimTracksView, CAGradientLayer, NSArray, NSColor, NSTimer;
@protocol AVTrimViewDelegate, NSObject><NSCopying;

@interface AVTrimView : NSView
{
    unsigned long long _style;
    AVTrimClipView *_clipView;
    AVTrimTracksView *_tracksView;
    AVTrimDimmerView *_dimmerViews[2];
    AVTrimSelectionView *_selectionView;
    NSView *_selectionContainerView;
    AVTrimIndicatorView *_indicatorView;
    AVTrimSelectionStartFocusRingView *_selectionStartFocusRingView;
    AVTrimSelectionEndFocusRingView *_selectionEndFocusRingView;
    AVTrimIndicatorFocusRingView *_indicatorFocusRingView;
    AVTimeIndicatorPopover *_timeIndicatorPopover;
    AVTimeFormatter *_timeIndicatorTimeFormatter;
    double _minValue;
    double _maxValue;
    double _currentValue;
    double _selectionStart;
    double _selectionEnd;
    CDStruct_ef34d2b9 _zoomInfo;
    CAGradientLayer *_clipViewMaskLayer;
    CAGradientLayer *_selectionContainerViewMaskLayer;
    NSColor *_opaqueColor;
    NSColor *_semiOpaqueColor;
    NSColor *_clearColor;
    NSArray *_trackViewControllers;
    id <AVTrimViewDelegate> _delegate;
    unsigned long long _focusedPart;
    double _offsetOnTrimHandle;
    unsigned long long _scrollDirection;
    BOOL _needsLayoutSubviews;
    BOOL _isFirstResponder;
    BOOL _isScrolling;
    BOOL _zoomOutWhenScrollFinishes;
    NSTimer *_scrollTimer;
    NSTimer *_zoomInTimer;
    id <NSObject><NSCopying> _identityOfTrackedTouch;
    double _maximumSelectionDuration;
    double _nominalFrameRate;
    double _zoomFactor;
    double _offset;
    unsigned long long _trackedPart;
    NSTimer *_stopTrackingTimer;
}

+ (void)initialize;
@property(retain, nonatomic) NSTimer *stopTrackingTimer; // @synthesize stopTrackingTimer=_stopTrackingTimer;
@property(nonatomic) unsigned long long trackedPart; // @synthesize trackedPart=_trackedPart;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) double nominalFrameRate; // @synthesize nominalFrameRate=_nominalFrameRate;
@property(nonatomic) double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
- (void).cxx_destruct;
- (double)_trimHandleWidth;
- (struct CGRect)_timeIndicatorPopoverPositioningRectForValue:(double)arg1;
- (double)displayedMaxValue;
- (double)displayedMinValue;
- (double)_zoomedRange;
- (double)_maximumPossibleOffset;
- (void)_scroll:(id)arg1;
- (void)_stopScrolling;
- (void)_startScrollingPart:(unsigned long long)arg1 inDirection:(unsigned long long)arg2;
- (BOOL)_isScrolling;
- (BOOL)_isZooming;
- (BOOL)_isZoomed;
- (unsigned long long)_zoomFactorForZoomDepth:(unsigned long long)arg1;
- (void)_zoomInTimerTask:(id)arg1;
- (void)_stopZoomInTimer;
- (void)_startZoomInTimerForTime:(double)arg1;
- (void)_setZoomFactor:(unsigned long long)arg1 centerZoomAtTime:(double)arg2;
- (BOOL)_canZoom;
- (void)hideTimeIndicatorPopover;
- (void)updateTimeIndicatorPopoverWithValue:(double)arg1;
- (void)showTimeIndicatorPopoverWithValue:(double)arg1;
@property(nonatomic) __weak id <AVTrimViewDelegate> delegate;
@property(copy, nonatomic) NSArray *trackViewControllers;
@property(nonatomic) double selectionEnd;
@property(nonatomic) double selectionStart;
@property(nonatomic) double currentValue;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
@property unsigned long long style;
- (void)_fireStopTrackingTimer:(id)arg1;
- (void)_stopTrackingWithPart:(unsigned long long)arg1 afterDelay:(double)arg2;
- (void)_stopTrackingWithPart:(unsigned long long)arg1;
- (void)_stopTrackingImmediately;
- (void)_startTrackingWithPart:(unsigned long long)arg1;
- (BOOL)_canStartTracking;
- (BOOL)_isTracking;
- (void)_startTrackingWithPart:(unsigned long long)arg1 location:(struct CGPoint)arg2 shouldJumpToLocation:(BOOL)arg3;
- (void)_updateValueForPart:(unsigned long long)arg1 location:(struct CGPoint)arg2 event:(id)arg3;
- (double)_valueForLocation:(struct CGPoint)arg1;
- (void)_zoomOutAndStopScrollingForLocation:(struct CGPoint)arg1;
- (unsigned long long)_partForLocation:(struct CGPoint)arg1 shouldJumpToLocation:(char *)arg2;
- (void)_touchesEndedOrCancelledWithEvent:(id)arg1;
- (unsigned short)_keyForEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_updateFocusRingVisibility;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)arg1;
- (void)handleEvent:(id)arg1;
- (BOOL)canHandleEvent:(id)arg1;
- (unsigned int)_CAViewFlags;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutSubviewsIfNeeded;
- (void)setNeedsLayoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)indicatorAccessibilityElementForPart:(unsigned long long)arg1;

@end

