//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenControlBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenControlBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>
{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenControlBar *__controlBar;
}

@property(retain, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar; // @synthesize _controlBar=__controlBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)_updateBarLayout;
- (void)_updateControls;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;
- (void)_handleSendButtonTapped:(id)arg1;
- (void)_handleFunEffectsButtonTapped:(id)arg1;
- (void)_handleMarkupButtonTapped:(id)arg1;
- (void)_handleEditButtonTapped:(id)arg1;
- (void)becomeReusable;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

