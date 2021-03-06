//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, UIActivityIndicatorView, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver>
{
    struct {
        unsigned long long needsUpdate;
        unsigned long long updated;
        _Bool isPerformingUpdate;
    } _updateFlags;
    UIView *_successView;
    UIActivityIndicatorView *_progressIndicatorView;
    UIImageView *_errorView;
    _Bool __isPerformingChanges;
    PUAssetViewModel *_assetViewModel;
}

@property(nonatomic) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateStatusView;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)becomeReusable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

