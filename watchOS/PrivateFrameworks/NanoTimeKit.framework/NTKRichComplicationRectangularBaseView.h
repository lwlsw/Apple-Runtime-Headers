//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationView.h>

@protocol NTKRichComplicationRectangularBaseViewDelegate;

@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView
{
    id <NTKRichComplicationRectangularBaseViewDelegate> _delegate;
}

+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned int)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (void)prepareCustomDataAnimation:(id)arg1 fromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(_Bool)arg4;
+ (id)viewWithLegacyComplicationType:(unsigned int)arg1;
@property(nonatomic) __weak id <NTKRichComplicationRectangularBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(float)arg2;
- (id)_createAndAddColoringLabelWithFontSize:(float)arg1 weight:(float)arg2 usesTextProviderTintColoring:(_Bool)arg3;
- (id)initWithFamily:(int)arg1;
- (id)init;

@end

