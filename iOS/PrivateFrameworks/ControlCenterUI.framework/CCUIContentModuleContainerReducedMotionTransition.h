//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIContentModuleContainerTransition.h>

@class UIView, UIWindow;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition
{
    UIWindow *_snapshotHostWindow;
    UIView *_snapshotView;
    struct CGAffineTransform _snapshotCorrectiveTransform;
}

@property(nonatomic) struct CGAffineTransform snapshotCorrectiveTransform; // @synthesize snapshotCorrectiveTransform=_snapshotCorrectiveTransform;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) __weak UIWindow *snapshotHostWindow; // @synthesize snapshotHostWindow=_snapshotHostWindow;
- (void).cxx_destruct;
- (id)customAnimator;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

@end

