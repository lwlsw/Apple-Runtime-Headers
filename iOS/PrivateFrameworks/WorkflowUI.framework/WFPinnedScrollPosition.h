//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, WFScrollPositionPinningCollectionView;

@interface WFPinnedScrollPosition : NSObject
{
    WFScrollPositionPinningCollectionView *_scrollView;
    UIView *_view;
    struct CGPoint _center;
}

@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak WFScrollPositionPinningCollectionView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (struct CGRect)adjustedBounds:(struct CGRect)arg1 contentSize:(struct CGSize)arg2;
- (id)initWithScrollView:(id)arg1 view:(id)arg2;

@end

