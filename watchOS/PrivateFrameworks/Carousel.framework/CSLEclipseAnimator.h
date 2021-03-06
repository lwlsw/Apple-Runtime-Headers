//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol CSLEclipseAnimatorDelegate;

@interface CSLEclipseAnimator : NSObject
{
    _Bool _reading;
    _Bool _interactiveReading;
    _Bool _resolving;
    float _current;
    float _target;
    float _decelerationConstant;
    float _velocity;
    float _lastVelocity;
    double _lastInteractionTime;
    double _lastTickTime;
    CADisplayLink *_displayLink;
    id <CSLEclipseAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLEclipseAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animate:(float)arg1;
- (void)_tick:(id)arg1;
- (void)_updateDisplayLink;
- (_Bool)_needsDisplayLink;
- (_Bool)_withinTolerance;
- (void)animateInteractivelyToPercent:(float)arg1;
- (void)resolveToMinimum;
- (void)resolveToMaximum;
- (void)_beginReadingIfNecessary;
- (void)_updateDelegateWithPercent:(float)arg1;
- (void)_handleDelta:(float)arg1;
- (void)_addDelta:(float)arg1;
- (float)_deltaFromScrollAmount:(float)arg1;
- (void)addCrownScrollAmount:(float)arg1;
- (float)clipValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (float)_scrollAmountToExceedVelocityLimitInDirection:(_Bool)arg1;
- (float)_scrollAmountFromDelta:(float)arg1;
@property(readonly, nonatomic) float current;
- (void)_resetToCurrent:(float)arg1;
- (void)reset;
- (id)init;

@end

