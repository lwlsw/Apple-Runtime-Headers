//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPTextMagnifierRanged.h>

@interface TSWPTextMagnifierVerticalRanged : TSWPTextMagnifierRanged
{
}

+ (id)sharedRangedMagnifier;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)shouldHideCanvasLayer;
- (id)maskImageName;
- (id)overlayImageName;
- (id)underlayImageName;
- (void)stopMagnifying:(BOOL)arg1;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(BOOL)arg4;
- (void)remove;
- (void)updateFrame;
- (double)currentOffset;
- (void)zoomRightAnimation;
- (void)zoomLeftAnimation;
- (void)dealloc;
- (id)initWithDefaultFrame;

@end

