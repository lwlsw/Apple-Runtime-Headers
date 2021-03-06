//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/_NSExitFullScreenTransitionController.h>

@class NSArray, NSWindow, NSWindowController, _NSWindowFullScreenContentController, _NSWindowFullScreenStorage;

__attribute__((visibility("hidden")))
@interface _NSWindowExitFullScreenTransitionController : _NSExitFullScreenTransitionController
{
    NSWindow *_window;
    NSWindowController *_windowController;
    _NSWindowFullScreenContentController *_contentController;
    NSArray *_customWindows;
    _NSWindowFullScreenStorage *_fullScreenStorage;
    BOOL _calledOutDidExitFullScreen;
    BOOL _didReenterDoAfterExitFullScreen;
}

- (void)configureBeforeStarting;
- (void)failedToExitFullScreen;
- (struct CGImage *)captureAfterSnapshot;
- (struct CGImage *)captureBeforeSnapshot;
- (unsigned long long)destinationSpaceID;
- (struct CGSize)transitionedWindowShadowOffset;
- (id)windowIDsForSnapshot;
- (struct CGRect)transitionedWindowFrame;
- (void)doAfterExitFullScreen;
- (void)doBeforeExitFullScreen;
- (BOOL)startCustomTransition;
- (void)orderTransitionedWindowFront;
- (id)maybeFilterParticipatingWindowNumbers:(id)arg1 byScreen:(id)arg2;
- (id)gatherParticipatingWindowNumbers;
- (void)setupWindowForAfterFullScreenExit;
- (void)prepareToExitFullScreenMode;
- (id)_getPossibleCustomWindowsForExitingFullScreen;
- (id)contentController;
- (BOOL)usingAppKitTransition;
- (unsigned int)contentWindowID;
- (BOOL)shouldContentWindowBeVisible;
- (id)fullScreenStorage;
- (void)dealloc;
- (id)initForExitingContentController:(id)arg1;

@end

