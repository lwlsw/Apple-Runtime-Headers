//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentItemCellBackgroundView : UIView
{
    double _scale;
    double _cornerRadius;
    long long _position;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

