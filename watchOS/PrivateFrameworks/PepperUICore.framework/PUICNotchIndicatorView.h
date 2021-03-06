//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PUICNotchBelt;

@interface PUICNotchIndicatorView : UIView
{
    PUICNotchBelt *_notchBelt;
    float _offset;
    float _startOffset;
    UIView *_targetView;
    float _indicationWidth;
    float _notchTriggerOffset;
    float _settleOffset;
}

@property(nonatomic) float settleOffset; // @synthesize settleOffset=_settleOffset;
@property(nonatomic) float notchTriggerOffset; // @synthesize notchTriggerOffset=_notchTriggerOffset;
@property(nonatomic) float indicationWidth; // @synthesize indicationWidth=_indicationWidth;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(nonatomic) __weak PUICNotchBelt *notchBelt; // @synthesize notchBelt=_notchBelt;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)_nextColor:(int)arg1;
- (void)drawTriangle:(struct CGContext *)arg1 start:(struct CGPoint)arg2 width:(float)arg3 down:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

