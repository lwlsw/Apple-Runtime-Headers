//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisionKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class ICDocCamImageQuad, NSIndexPath, NSString, UIImage, UIView;

@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
    UIImage *_filteredImage;
    UIImage *_unfilteredImage;
    NSIndexPath *_indexPath;
    double _duration;
    CDUnknownBlockType _completion;
    long long _orientation;
    UIView *_startView;
    ICDocCamImageQuad *_quadForOverlay;
    struct CGRect _containerViewFrame;
}

@property(retain, nonatomic) ICDocCamImageQuad *quadForOverlay; // @synthesize quadForOverlay=_quadForOverlay;
@property(nonatomic) __weak UIView *startView; // @synthesize startView=_startView;
@property(nonatomic) struct CGRect containerViewFrame; // @synthesize containerViewFrame=_containerViewFrame;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *unfilteredImage; // @synthesize unfilteredImage=_unfilteredImage;
@property(retain, nonatomic) UIImage *filteredImage; // @synthesize filteredImage=_filteredImage;
@property(nonatomic) BOOL presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
-     // Error parsing type: {?=[3]}80@0:8d16d24d32d40d48d56d64d72, name: matrixTransformingToUnitSquareWithPoints:y0:x1:y1:x2:y2:x3:y3:
- (void)sortPoints:(struct CGPoint *)arg1 sorted:(struct CGPoint *)arg2;
-     // Error parsing type: {?=[3]}24@0:8^c16, name: matrixTransformingQuadForOverlayToImageView:
- (id)scrollViewTransform:(BOOL)arg1;
- (id)imageMeshTransform:(BOOL)arg1;
- (void)performSimpleFadeInFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performPopTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performPushTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithImage:(id)arg1 unfilteredImage:(id)arg2 orientation:(long long)arg3 indexPath:(id)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

