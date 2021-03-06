//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mondrian/MOMediaViewSupplementary.h>

#import <Mondrian/NSTextViewDelegate-Protocol.h>

@class NSAttributedString, NSLayoutConstraint, NSProgressIndicator, NSStackView, NSString, NSTextField, NSTextView;

@interface MOPhotosSupplementaryFooter : MOMediaViewSupplementary <NSTextViewDelegate>
{
    BOOL _highlightInformation;
    BOOL _progressDisabled;
    NSAttributedString *_title;
    NSAttributedString *_referencedMediaInformation;
    NSAttributedString *_subtitle;
    NSAttributedString *_message;
    NSAttributedString *_information;
    CDUnknownBlockType _action;
    double _progress;
    NSStackView *_centeringStackView;
    NSTextField *_titleTextField;
    NSTextField *_referencedMediaInformationTextField;
    NSProgressIndicator *_progressIndicator;
    NSTextView *_subtitleTextView;
    NSTextField *_messageTextField;
    NSTextView *_informationTextView;
    NSLayoutConstraint *_informationTextViewHeightConstraint;
}

+ (double)footerHeight;
@property(retain, nonatomic) NSLayoutConstraint *informationTextViewHeightConstraint; // @synthesize informationTextViewHeightConstraint=_informationTextViewHeightConstraint;
@property(retain, nonatomic) NSTextView *informationTextView; // @synthesize informationTextView=_informationTextView;
@property(retain, nonatomic) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(retain, nonatomic) NSTextView *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSTextField *referencedMediaInformationTextField; // @synthesize referencedMediaInformationTextField=_referencedMediaInformationTextField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSStackView *centeringStackView; // @synthesize centeringStackView=_centeringStackView;
@property(nonatomic) BOOL progressDisabled; // @synthesize progressDisabled=_progressDisabled;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) BOOL highlightInformation; // @synthesize highlightInformation=_highlightInformation;
@property(retain, nonatomic) NSAttributedString *information; // @synthesize information=_information;
@property(retain, nonatomic) NSAttributedString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSAttributedString *referencedMediaInformation; // @synthesize referencedMediaInformation=_referencedMediaInformation;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setFooterInfo:(id)arg1;
- (BOOL)_isAttributedStringA:(id)arg1 equalToAttributedStringB:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layout;
- (BOOL)isOpaque;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateTextViewConfiguration:(id)arg1 highlighted:(BOOL)arg2;
- (void)_performAction:(id)arg1;
- (id)_newProgressIndicator;
- (id)_newInformationTextView;
- (id)_newSubtitleTextView;
- (id)_newTextField;
- (id)_newCenteringStackView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

