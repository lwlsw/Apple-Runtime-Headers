//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetContentEffect.h>

#import <OpusKit/CAAnimationDelegate-Protocol.h>

@class CABasicAnimation, NSString, OKPanGenerator;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect <CAAnimationDelegate>
{
    OKPanGenerator *_panGenerator;
    CABasicAnimation *_translationXAnimation;
    CABasicAnimation *_translationYAnimation;
    CABasicAnimation *_scaleAnimation;
    double _fromScale;
    double _toScale;
    double _fromX;
    double _toX;
    double _fromY;
    double _toY;
    double _panningCropThreshold;
    double _beginTime;
    NSString *_timingFunction;
    double _speedMitigator;
    double _durationPadding;
    double _panningAmount;
    _Bool _animationIsUnderway;
    double _animationProgressAtStateChange;
    double _animationResumeTime;
}

+ (id)supportedSettings;
- (double)remainingPlayDuration;
- (double)_fullDuration;
- (void)setDefaultDuration:(double)arg1;
- (void)stopAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (float)_croppedFractionforRectAspectRatio:(float)arg1 photoAspectRatio:(float)arg2;
- (void)_applyGeometryForStart:(_Bool)arg1;
- (void)_setupAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)prepareContentEffectWithView:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)applySettings;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

