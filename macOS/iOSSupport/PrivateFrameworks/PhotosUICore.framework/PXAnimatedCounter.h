//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIFont, UILabel;

@interface PXAnimatedCounter : UIView
{
    UIFont *_font;
    unsigned long long _number;
    NSMutableArray *_digitLabels;
    UILabel *_backingLabel;
    unsigned long long _animationsInProgress;
    struct CGSize _maxDigitSize;
    struct CGSize _previousSize;
}

@property struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property unsigned long long animationsInProgress; // @synthesize animationsInProgress=_animationsInProgress;
@property struct CGSize maxDigitSize; // @synthesize maxDigitSize=_maxDigitSize;
@property(readonly) UILabel *backingLabel; // @synthesize backingLabel=_backingLabel;
@property(readonly) NSMutableArray *digitLabels; // @synthesize digitLabels=_digitLabels;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)_labelForDigit:(unsigned long long)arg1;
- (void)_updateSizeIfNeeded;
- (void)_updateFramesForShownDigits;
- (void)_calculateLargestDigitSize;
- (void)_setCounterToNumber:(unsigned long long)arg1;
- (id)_numberStringForNumber:(long long)arg1;
- (unsigned long long)_numDigitsForNumber:(long long)arg1;
- (double)_xOffsetForBackingLabel:(id)arg1;
- (struct CGSize)requiredSizeForNumber:(unsigned long long)arg1;
- (long long)preferredAnimationStyleForNumber:(unsigned long long)arg1;
- (void)setNumber:(unsigned long long)arg1 withAnimationStyle:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setNumber:(unsigned long long)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setNumber:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithNumber:(unsigned long long)arg1;
- (void)commonInit;

@end

