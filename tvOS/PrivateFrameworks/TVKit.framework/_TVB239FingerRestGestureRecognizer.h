//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface _TVB239FingerRestGestureRecognizer : UIGestureRecognizer
{
    _Bool _selectButtonDepressed;
    int _touchCount;
    long long _stateToEnter;
    double _minimumPressDuration;
    NSTimer *_pressDurationTimer;
    struct CGPoint _digitizerStartLocation;
    struct CGPoint _digitizerLocation;
}

+ (_Bool)_shouldDefaultToTouches;
@property(nonatomic) __weak NSTimer *pressDurationTimer; // @synthesize pressDurationTimer=_pressDurationTimer;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(readonly, nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property(readonly, nonatomic) struct CGPoint digitizerStartLocation; // @synthesize digitizerStartLocation=_digitizerStartLocation;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recognizeFingerRest;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

