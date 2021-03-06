//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UITextViewDelegate-Protocol.h>

@class CKAvatarView, NSArray, NSDictionary, NSString, UIButton, UIImageView, UITextView, UIVisualEffectView;
@protocol CKNicknameBannerViewDelegate;

@interface CKNicknameBannerView : UIView <UITextViewDelegate>
{
    _Bool _useNamedTitles;
    _Bool _useNamedSubtitles;
    _Bool _inUpdatesMode;
    id <CKNicknameBannerViewDelegate> _delegate;
    unsigned long long _style;
    NSArray *_nicknameUpdates;
    UITextView *_titleLabel;
    UITextView *_subtitleLabel;
    NSDictionary *_contactMap;
    UIVisualEffectView *_blurView;
    CKAvatarView *_avatarView;
    CKAvatarView *_secondaryAvatarView;
    UIView *_avatarCutoutView;
    UIImageView *_contactsIconView;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *contactsIconView; // @synthesize contactsIconView=_contactsIconView;
@property(retain, nonatomic) UIView *avatarCutoutView; // @synthesize avatarCutoutView=_avatarCutoutView;
@property(retain, nonatomic) CKAvatarView *secondaryAvatarView; // @synthesize secondaryAvatarView=_secondaryAvatarView;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool inUpdatesMode; // @synthesize inUpdatesMode=_inUpdatesMode;
@property(retain, nonatomic) NSDictionary *contactMap; // @synthesize contactMap=_contactMap;
@property(retain, nonatomic) UITextView *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UITextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) _Bool useNamedSubtitles; // @synthesize useNamedSubtitles=_useNamedSubtitles;
@property(nonatomic) _Bool useNamedTitles; // @synthesize useNamedTitles=_useNamedTitles;
@property(retain, nonatomic) NSArray *nicknameUpdates; // @synthesize nicknameUpdates=_nicknameUpdates;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) id <CKNicknameBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)contactStore;
- (id)nicknameController;
- (void)cancelButtonTapped:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)createContactForOutgoingShare;
- (id)createContactFromNickname:(id)arg1;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)_avatarContactForUpdate:(id)arg1;
- (void)_updateAvatarView;
- (void)layoutSubviews;
@property(readonly, nonatomic) double titleLabelAlignmentX;
- (double)maxLabelWidthForSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)layoutMargins;
- (id)cancelGlyph;
- (void)setupViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 updates:(id)arg3 useNamedTitles:(_Bool)arg4 inUpdatesMode:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

