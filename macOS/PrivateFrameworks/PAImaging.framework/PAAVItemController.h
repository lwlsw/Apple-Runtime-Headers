//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAItemController.h>

#import <PAImaging/PAUnadjustedCompositionProvider-Protocol.h>

@class IPAVideoPlaybackSettings, NSObject, PLVideoEditSource;
@protocol DGDescriptionCompositionProvider, OS_dispatch_queue;

@interface PAAVItemController : PAItemController <PAUnadjustedCompositionProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct PFAsyncDispatchMulticaster *_multicaster;
    IPAVideoPlaybackSettings *_playbackSettings;
    PLVideoEditSource *_source;
    long long _sourceOrientation;
    id <DGDescriptionCompositionProvider> _assetCompositionProvider;
    id <DGDescriptionCompositionProvider> _unadjustedCompositionProvider;
}

+ (Class)itemClass;
- (void).cxx_destruct;
- (void)addPlaybackSettingsEditReceiver:(struct NSObject *)arg1;
- (void)_setPlaybackSettings:(id)arg1 sourceChanged:(BOOL)arg2;
- (void)setPlaybackSettings:(id)arg1;
- (void)setCurrentContentEditingInput:(id)arg1 orientation:(long long)arg2 playbackSettings:(id)arg3;
- (void)setCurrentContentEditingInput:(id)arg1;
- (void)_setCurrentContentEditingInput:(id)arg1;
- (id)videoURL;
- (id)playbackSettings;
- (void)didEndEditing:(BOOL)arg1 discard:(BOOL)arg2;
- (void)resetEditingWithContentEditingInput:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_renderAdjustedVideo:(id)arg1 contentEditingInput:(id)arg2 composition:(id)arg3 playbackSettings:(id)arg4 queue:(id)arg5 workQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_revertVideo:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditingToAsset:(id)arg1 contentEditingInput:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginEditingWithContentEditingInput:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetEditingWithContentEditingInput:(id)arg1 playbackSettings:(id)arg2 error:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unadjustedComposition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)compositionIfEditing;
- (id)assetComposition;
- (id)init;
- (struct CGImage *)newVideoThumbnail;

@end

