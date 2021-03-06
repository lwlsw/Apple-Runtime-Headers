//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_startScrollingIndexPath;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSIndexPath *startScrollingIndexPath; // @synthesize startScrollingIndexPath=_startScrollingIndexPath;
- (void).cxx_destruct;
- (void)_panGestureRecognized:(id)arg1;
- (struct CGPoint)_collectionViewBoundsCenter;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end

