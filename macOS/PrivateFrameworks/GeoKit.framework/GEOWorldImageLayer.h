//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface GEOWorldImageLayer : CALayer
{
    struct CGSize imageSize;
    double rotation;
    NSArray *slices;
    CALayer *reentrantSlice;
}

+ (id)worldImageLayerWithImage:(struct CGImage *)arg1;
+ (struct CGImage *)_copyOverlappingWorldImageWithImage:(struct CGImage *)arg1;
+ (struct CGContext *)_copyContextToHostOverlappingImage:(struct CGImage *)arg1;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize;
- (void)dealloc;
- (struct CGPoint)imagePointFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setMinificationFilter:(id)arg1;
@property struct CGRect zoomFrame;
@property double rotation;
- (id)initWithImage:(struct CGImage *)arg1;
- (void)_initSlicesWithImage:(struct CGImage *)arg1;
- (void)_applyRotation;

@end

