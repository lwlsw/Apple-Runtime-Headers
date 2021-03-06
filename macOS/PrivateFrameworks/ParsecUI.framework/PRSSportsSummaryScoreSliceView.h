//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSLayoutConstraint, NSString, NSTextField, PRSImageView;

@interface PRSSportsSummaryScoreSliceView : NSView
{
    NSImage *_leftImage;
    NSImage *_rightImage;
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_leftImageSubtitle;
    NSString *_rightImageSubtitle;
    NSString *_leftImageAxLabel;
    NSString *_rightImageAxLabel;
    PRSImageView *_leftImageView;
    PRSImageView *_rightImageView;
    NSTextField *_leftImageViewLabelTextField;
    NSTextField *_rightImageViewLabelTextField;
    NSTextField *_titleTextField;
    NSTextField *_subTitleTextField;
    NSLayoutConstraint *_leadingImageConstraint;
    NSLayoutConstraint *_trailingImageConstraint;
    NSLayoutConstraint *_titleTopBaselineConstraint;
    NSLayoutConstraint *_labelToBottomConstraint;
    NSLayoutConstraint *_subtitleTitleEqualWidthConstraint;
}

@property __weak NSLayoutConstraint *subtitleTitleEqualWidthConstraint; // @synthesize subtitleTitleEqualWidthConstraint=_subtitleTitleEqualWidthConstraint;
@property __weak NSLayoutConstraint *labelToBottomConstraint; // @synthesize labelToBottomConstraint=_labelToBottomConstraint;
@property __weak NSLayoutConstraint *titleTopBaselineConstraint; // @synthesize titleTopBaselineConstraint=_titleTopBaselineConstraint;
@property __weak NSLayoutConstraint *trailingImageConstraint; // @synthesize trailingImageConstraint=_trailingImageConstraint;
@property __weak NSLayoutConstraint *leadingImageConstraint; // @synthesize leadingImageConstraint=_leadingImageConstraint;
@property NSTextField *subTitleTextField; // @synthesize subTitleTextField=_subTitleTextField;
@property NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property NSTextField *rightImageViewLabelTextField; // @synthesize rightImageViewLabelTextField=_rightImageViewLabelTextField;
@property NSTextField *leftImageViewLabelTextField; // @synthesize leftImageViewLabelTextField=_leftImageViewLabelTextField;
@property PRSImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property PRSImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) NSString *rightImageAxLabel; // @synthesize rightImageAxLabel=_rightImageAxLabel;
@property(retain, nonatomic) NSString *leftImageAxLabel; // @synthesize leftImageAxLabel=_leftImageAxLabel;
@property(retain, nonatomic) NSString *rightImageSubtitle; // @synthesize rightImageSubtitle=_rightImageSubtitle;
@property(retain, nonatomic) NSString *leftImageSubtitle; // @synthesize leftImageSubtitle=_leftImageSubtitle;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSImage *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) NSImage *leftImage; // @synthesize leftImage=_leftImage;
- (void).cxx_destruct;
- (void)resizeSubtitles;
- (long long)getHeightForText:(id)arg1 maxSize:(long long)arg2 font:(id)arg3;
- (BOOL)isAccessibilityElement;
- (void)updateConstraints;
- (void)awakeFromNib;

@end

