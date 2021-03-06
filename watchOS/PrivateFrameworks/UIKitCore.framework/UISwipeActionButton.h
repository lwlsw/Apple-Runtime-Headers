//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UISwipeActionButton : UIButton
{
    _Bool _autosizes;
    UIColor *_defaultBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIView *_backgroundView;
}

+ (id)titleFont;
+ (id)titleFontOfSize:(float)arg1;
+ (float)defaultButtonWidth;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool autosizes; // @synthesize autosizes=_autosizes;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) float buttonWidth;
@property(readonly, nonatomic) UIView *sourceView;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (int)_numberOfLinesForTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (unsigned int)_defaultLayoutForHeight:(float)arg1;
- (_Bool)_heightDemandsCompactLayout;
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

