//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface QLOverlayProgressLayer : CALayer
{
    float _progress;
    CALayer *_contentLayer;
    CALayer *_middleLayer;
    CALayer *_maskLayer;
    NSTimer *_progressTimer;
}

+ (id)defaultActionForKey:(id)arg1;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property BOOL expanded;
- (void)_updateMiddleLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setContentsScale:(double)arg1;
- (id)init;

@end

