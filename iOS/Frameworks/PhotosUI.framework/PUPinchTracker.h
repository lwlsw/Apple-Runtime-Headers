//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUValueFilter;

__attribute__((visibility("hidden")))
@interface PUPinchTracker : NSObject
{
    struct CGPoint _initialCenter;
    struct CGSize _initialSize;
    struct CGAffineTransform _initialTransform;
    struct CGAffineTransform _initialTransformInverse;
    _Bool _didSetInitialPinchValues;
    struct CGPoint _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint _initialPinchOrigin;
    PUValueFilter *_pinchRotationValueFilter;
    _Bool _allowTrackingOutside;
    CDUnknownBlockType _updateHandler;
    double _rotationHysteresisDegrees;
}

@property(nonatomic) double rotationHysteresisDegrees; // @synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees;
@property(nonatomic) _Bool allowTrackingOutside; // @synthesize allowTrackingOutside=_allowTrackingOutside;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)_transformPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2 intoCenter:(struct CGPoint *)arg3 distance:(double *)arg4 angle:(double *)arg5;
- (void)setPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2;
- (id)initWithInitialCenter:(struct CGPoint)arg1 initialSize:(struct CGSize)arg2 initialTransform:(struct CGAffineTransform)arg3;
- (id)init;

@end

