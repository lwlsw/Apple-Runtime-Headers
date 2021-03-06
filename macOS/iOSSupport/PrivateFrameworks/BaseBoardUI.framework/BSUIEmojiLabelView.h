//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface BSUIEmojiLabelView : UIView
{
    UILabel *_contentLabel;
    UILabel *_emojiLabel;
    NSString *_rawText;
}

@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (id)_newLabel;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
- (double)_firstLineBaselineOffsetFromBoundsTop;
@property(nonatomic) long long numberOfLines;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

