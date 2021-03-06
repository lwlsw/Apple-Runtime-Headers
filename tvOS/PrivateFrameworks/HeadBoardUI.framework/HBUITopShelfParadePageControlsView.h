//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPageControl, _HBUITopShelfParadeSwipeAffordanceView;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadePageControlsView : UIView
{
    _Bool _leadingSwipeAffordanceViewHidden;
    _Bool _trailingSwipeAffordanceViewHidden;
    UIPageControl *_pageControl;
    _HBUITopShelfParadeSwipeAffordanceView *_leadingSwipeAffordanceView;
    _HBUITopShelfParadeSwipeAffordanceView *_trailingSwipeAffordanceView;
}

@property(readonly, nonatomic) _HBUITopShelfParadeSwipeAffordanceView *trailingSwipeAffordanceView; // @synthesize trailingSwipeAffordanceView=_trailingSwipeAffordanceView;
@property(readonly, nonatomic) _HBUITopShelfParadeSwipeAffordanceView *leadingSwipeAffordanceView; // @synthesize leadingSwipeAffordanceView=_leadingSwipeAffordanceView;
@property(nonatomic, getter=isTrailingSwipeAffordanceViewHidden) _Bool trailingSwipeAffordanceViewHidden; // @synthesize trailingSwipeAffordanceViewHidden=_trailingSwipeAffordanceViewHidden;
@property(nonatomic, getter=isLeadingSwipeAffordanceViewHidden) _Bool leadingSwipeAffordanceViewHidden; // @synthesize leadingSwipeAffordanceViewHidden=_leadingSwipeAffordanceViewHidden;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

