//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SUViewController;

@interface SURotationController : NSObject
{
    SUViewController *_viewController;
}

@property(nonatomic) SUViewController *viewController; // @synthesize viewController=_viewController;
- (struct CGRect)viewFrameForInterfaceOrientation:(long long)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)orientationAffectsViewFrame;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

