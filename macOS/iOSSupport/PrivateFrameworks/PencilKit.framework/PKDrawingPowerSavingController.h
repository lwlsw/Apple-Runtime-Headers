//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKDrawingPowerSavingController : NSObject
{
    vector_b67dfe3a _movementDistanceHistoryBuffer;
    struct CGPoint _previousDrawingLocation;
    double _currentMovement;
    double _accumulatedMovement;
    double _previousRenderTimestamp;
    BOOL _valid;
    double _minimumMovementDistancePencil;
    double _minimumMovementDistanceFinger;
    double _minimumMovementDistanceTimeout;
    BOOL _isDrawingWithPencil;
    BOOL _isDrawingWithMarkerOrEraser;
}

@property(nonatomic) BOOL isDrawingWithMarkerOrEraser; // @synthesize isDrawingWithMarkerOrEraser=_isDrawingWithMarkerOrEraser;
@property(nonatomic) BOOL isDrawingWithPencil; // @synthesize isDrawingWithPencil=_isDrawingWithPencil;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)averageMovementDistance;
- (void)accumulateMovementForCurrentFrame;
- (void)registerFrameStartTimestamp:(double)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (BOOL)shouldSkipFrameWithFrameStartTimestamp:(double)arg1 framesAfterStart:(unsigned long long)arg2;
- (void)drawingMovedToLocation:(struct CGPoint)arg1;
- (void)drawingBeganAtLocation:(struct CGPoint)arg1;
- (id)init;

@end

