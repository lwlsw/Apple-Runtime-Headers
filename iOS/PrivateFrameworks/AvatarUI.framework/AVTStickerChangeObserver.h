//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTCoreEnvironment, AVTImageStore;
@protocol AVTStickerBackend;

@interface AVTStickerChangeObserver : NSObject
{
    AVTCoreEnvironment *_environment;
    id <AVTStickerBackend> _stickerBackend;
    AVTImageStore *_imageStore;
}

@property(readonly, nonatomic) AVTImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property(readonly, nonatomic) id <AVTStickerBackend> stickerBackend; // @synthesize stickerBackend=_stickerBackend;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)processChangesForChangeTracker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithStickerBackend:(id)arg1 imageStore:(id)arg2 environment:(id)arg3;
- (id)initWithStickerBackend:(id)arg1 environment:(id)arg2;

@end

