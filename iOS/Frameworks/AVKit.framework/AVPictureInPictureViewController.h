//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AVKit/PGPictureInPictureViewController-Protocol.h>

@class AVPictureInPicturePlayerLayerView, AVPlayerController, NSString;
@protocol AVPictureInPictureViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController>
{
    _Bool _shouldShowAlternateActionButtonImage;
    AVPlayerController *_playerController;
    AVPictureInPicturePlayerLayerView *_pictureInPicturePlayerLayerView;
    id <AVPictureInPictureViewControllerDelegate> _delegate;
}

+ (id)keyPathsForValuesAffectingShouldShowLoadingIndicator;
@property(nonatomic) __weak id <AVPictureInPictureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowAlternateActionButtonImage; // @synthesize shouldShowAlternateActionButtonImage=_shouldShowAlternateActionButtonImage;
@property(readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView; // @synthesize pictureInPicturePlayerLayerView=_pictureInPicturePlayerLayerView;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
- (void)actionButtonTapped;
- (void)didAnimatePictureInPictureStop;
- (void)willAnimatePictureInPictureStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

