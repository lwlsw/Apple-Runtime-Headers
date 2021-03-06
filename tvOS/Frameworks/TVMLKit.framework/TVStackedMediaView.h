//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVUIKit/_TVStackedMediaView.h>

@class TVImageProxy, TVLSMDocumentProxy, UICollectionReusableView, UIImage;

@interface TVStackedMediaView : _TVStackedMediaView
{
    _Bool _loadingDone;
    UIImage *_placeHolder;
    TVLSMDocumentProxy *_lsmDocumentProxy;
    TVImageProxy *_fallbackImageProxy;
    UICollectionReusableView *_containingCell;
}

@property(nonatomic) __weak UICollectionReusableView *containingCell; // @synthesize containingCell=_containingCell;
@property(readonly, nonatomic) TVImageProxy *fallbackImageProxy; // @synthesize fallbackImageProxy=_fallbackImageProxy;
@property(readonly, nonatomic) TVLSMDocumentProxy *lsmDocumentProxy; // @synthesize lsmDocumentProxy=_lsmDocumentProxy;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)placeHolder;
- (void)_teardownHosting;
- (void)_setupHosting;
- (void)_loadProxy;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)didMoveToWindow;
- (void)setLSMDocumentProxy:(id)arg1 withFallbackImageProxy:(id)arg2;

@end

