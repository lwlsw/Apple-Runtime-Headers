//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVDelegateManager, AVKeyValueObserverCollection, AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsViewController : UIViewController
{
    _Bool _playing;
    _Bool _scrubberEnabled;
    _Bool _playPauseButtonEnabled;
    _Bool _showsStreamingControls;
    _Bool _showsLoadingIndicator;
    _Bool _viewHasAppeared;
    float _playbackRate;
    AVPlayerController *_playerController;
    AVDelegateManager *_delegateManager;
    AVKeyValueObserverCollection *_keyValueObservers;
}

@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(readonly) AVKeyValueObserverCollection *keyValueObservers; // @synthesize keyValueObservers=_keyValueObservers;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) _Bool showsStreamingControls; // @synthesize showsStreamingControls=_showsStreamingControls;
@property(nonatomic, getter=isPlayPauseButtonEnabled) _Bool playPauseButtonEnabled; // @synthesize playPauseButtonEnabled=_playPauseButtonEnabled;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled; // @synthesize scrubberEnabled=_scrubberEnabled;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) AVDelegateManager *delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (_Bool)forwardMethodToPlayerViewController:(SEL)arg1 sender:(id)arg2;
- (void)didChangePlayerController;
- (void)_didChangePlayerControllerFrom:(id)arg1 to:(id)arg2;
- (void)skipToPreviousFrame;
- (void)skipToNextFrame;
- (void)downToNextNavigationMode;
- (void)upToNextNavigationMode;
- (void)setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=areControlsVisible) _Bool controlsVisible;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_endObservations;
- (void)_beginObservations;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

