//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewAnimationComposing-Protocol.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewAnimationComposer : NSObject <UIViewAnimationComposing>
{
    double _previousInteractiveUpdateTimestamp;
    id _previousInteractiveUpdateValue;
    id <UIVectorOperatable> _previousTarget;
    BOOL _interactive;
    id <UIVectorOperatable> _targetVelocity;
}

@property(retain, nonatomic) id <UIVectorOperatable> targetVelocity; // @synthesize targetVelocity=_targetVelocity;
- (void).cxx_destruct;
- (id)projectValue:(id)arg1 decelerationFactor:(double)arg2;
- (id)composeAnimation:(id)arg1 withNewAnimationDescription:(id)arg2 interactive:(BOOL)arg3 currentValue:(id)arg4 targetValue:(id)arg5;
- (id)createAnimationFromDescription:(id)arg1 currentValue:(id)arg2 velocity:(id)arg3 targetValue:(id)arg4;
- (BOOL)isActive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

