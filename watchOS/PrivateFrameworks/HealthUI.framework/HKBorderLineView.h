//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HKBorderLineView : UIView
{
    int _edges;
    float _borderWidth;
    UIColor *_borderLineColor;
    float _minimumHeight;
    float _minimumWidth;
    struct UIEdgeInsets _borderInsets;
}

+ (void)drawBorderLinesInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 borderEdges:(int)arg3 borderLineWidth:(float)arg4 borderLineColor:(id)arg5 borderInsets:(struct UIEdgeInsets)arg6;
@property(nonatomic) float minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) float minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
@property(retain, nonatomic) UIColor *borderLineColor; // @synthesize borderLineColor=_borderLineColor;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) int edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_initFields;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

