//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverController.h>

#import <TSReading/UIPopoverControllerDelegate-Protocol.h>

@class NSString;
@protocol UIPopoverControllerDelegate;

@interface TSKPopoverController : UIPopoverController <UIPopoverControllerDelegate>
{
    BOOL mDismissOnUndo;
    BOOL mDismissOnMoviePlayback;
    BOOL mDismissAnimatedOnOrientationChange;
    id <UIPopoverControllerDelegate> mSavedDelegate;
    BOOL mIsDismissing;
}

+ (double)defaultPopoverPlacementPadding;
+ (BOOL)anyPopoversVisible;
@property(nonatomic) BOOL dismissAnimatedOnOrientationChange; // @synthesize dismissAnimatedOnOrientationChange=mDismissAnimatedOnOrientationChange;
@property(nonatomic) BOOL dismissOnMoviePlayback; // @synthesize dismissOnMoviePlayback=mDismissOnMoviePlayback;
@property(nonatomic) BOOL dismissOnUndo; // @synthesize dismissOnUndo=mDismissOnUndo;
- (void)p_applicationDidEnterBackground:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)p_orientationWillChange:(id)arg1;
- (void)moviePlaybackWillBegin:(id)arg1;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 constrainToView:(BOOL)arg5 withPadding:(double)arg6;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)p_dismissPopoverAnimated:(BOOL)arg1;
- (void)p_sendPopoverHidDelegateMessage;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

