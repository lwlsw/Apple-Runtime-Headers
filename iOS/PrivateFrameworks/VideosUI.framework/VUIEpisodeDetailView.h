//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <VideosUI/VUILibraryEpisodeFrameViewDelegate-Protocol.h>

@class NSString, UIFont, VUIFocusableTextView, VUILabel, VUILibraryEpisodeFrameView, VUIMediaItem, VUIMediaTagsView;
@protocol VUIEpisodeDetailViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailView : UIScrollView <VUILibraryEpisodeFrameViewDelegate>
{
    id <VUIEpisodeDetailViewDelegate> _episodeViewDelegate;
    VUILibraryEpisodeFrameView *_imageFrameView;
    VUILabel *_episodeTitleLabel;
    VUILabel *_seasonNumberLabel;
    VUILabel *_episodeNumberLabel;
    VUILabel *_releaseDateLabel;
    VUILabel *_dotSeparatorLabel;
    VUIFocusableTextView *_contentDescriptionView;
    UIFont *_contentDescriptionFont;
    VUIMediaItem *_mediaItem;
    VUIMediaTagsView *_mediaBadgeTagsView;
}

+ (void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2 viewSize:(struct CGSize)arg3;
+ (struct CGSize)_episodeFrameImageSizeWithViewSize:(struct CGSize)arg1;
@property(retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView; // @synthesize mediaBadgeTagsView=_mediaBadgeTagsView;
@property(retain, nonatomic) VUIMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) UIFont *contentDescriptionFont; // @synthesize contentDescriptionFont=_contentDescriptionFont;
@property(retain, nonatomic) VUIFocusableTextView *contentDescriptionView; // @synthesize contentDescriptionView=_contentDescriptionView;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUILabel *releaseDateLabel; // @synthesize releaseDateLabel=_releaseDateLabel;
@property(retain, nonatomic) VUILabel *episodeNumberLabel; // @synthesize episodeNumberLabel=_episodeNumberLabel;
@property(retain, nonatomic) VUILabel *seasonNumberLabel; // @synthesize seasonNumberLabel=_seasonNumberLabel;
@property(retain, nonatomic) VUILabel *episodeTitleLabel; // @synthesize episodeTitleLabel=_episodeTitleLabel;
@property(retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // @synthesize imageFrameView=_imageFrameView;
@property(nonatomic) __weak id <VUIEpisodeDetailViewDelegate> episodeViewDelegate; // @synthesize episodeViewDelegate=_episodeViewDelegate;
- (void).cxx_destruct;
- (void)didTapButtonForEpisodeFrameView:(id)arg1;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (void)_configureDotSeparator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

