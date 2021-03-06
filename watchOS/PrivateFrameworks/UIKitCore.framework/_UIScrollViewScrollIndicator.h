//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIScrollViewScrollIndicator : UIView
{
    _Bool _expandedForDirectManipulation;
    unsigned int _type;
    int _style;
    UIView *_roundedFillView;
    UIColor *_foregroundColor;
}

+ (float)_expandedIndicatorDimension;
+ (float)indicatorDimension;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIView *roundedFillView; // @synthesize roundedFillView=_roundedFillView;
@property(nonatomic) _Bool expandedForDirectManipulation; // @synthesize expandedForDirectManipulation=_expandedForDirectManipulation;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutFillViewAnimated:(_Bool)arg1;
- (struct CGRect)_offsetFillViewRectForExpandedState:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_colorForStyle:(int)arg1;

@end

