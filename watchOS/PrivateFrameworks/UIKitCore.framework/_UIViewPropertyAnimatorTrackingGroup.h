//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating>
{
    NSArray *_trackingAnimators;
}

@property(readonly, nonatomic) NSArray *trackingAnimators; // @synthesize trackingAnimators=_trackingAnimators;
- (void).cxx_destruct;
- (void)finishAnimationAtPosition:(int)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@property(nonatomic) float fractionComplete;
@property(nonatomic, getter=isReversed) _Bool reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) int state;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(float)arg2;
- (id)initWithAnimators:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

