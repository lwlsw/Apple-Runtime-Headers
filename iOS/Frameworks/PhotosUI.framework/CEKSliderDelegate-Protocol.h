//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class CEKSlider;

@protocol CEKSliderDelegate <NSObject>

@optional
- (void)sliderDidEndScrolling:(CEKSlider *)arg1;
- (void)sliderWillEndScrolling:(CEKSlider *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)slider:(CEKSlider *)arg1 willUpdateValue:(double *)arg2 withVelocity:(double)arg3;
- (void)sliderDidScroll:(CEKSlider *)arg1;
- (void)sliderWillBeginScrolling:(CEKSlider *)arg1;
@end

