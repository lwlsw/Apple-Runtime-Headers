//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UIProgressView;
@protocol SFReaderFontListTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderFontListTableViewCell : UITableViewCell
{
    UIButton *_downloadButton;
    UIProgressView *_progressView;
    UIImageView *_fontSelectionImageView;
    int _downloadState;
    id <SFReaderFontListTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SFReaderFontListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) UIImageView *fontSelectionImageView; // @synthesize fontSelectionImageView=_fontSelectionImageView;
- (void).cxx_destruct;
- (void)_didPressDownloadButton:(id)arg1;
- (void)_setUpProgressViewIfNecessary;
- (void)_setUpDownloadButtonIfNecessary;
- (void)_setUpFontSelectionImageViewIfNecessary;
- (void)setProgressIndicatorProgress:(double)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

