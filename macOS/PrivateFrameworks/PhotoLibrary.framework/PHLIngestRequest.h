//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PHLIngestAsset;

@interface PHLIngestRequest : NSObject
{
    NSString *_uuid;
    PHLIngestAsset *_masterAsset;
    PHLIngestAsset *_alternateMasterAsset;
    PHLIngestAsset *_renderedAsset;
    PHLIngestAsset *_thumbnailAsset;
    NSArray *_adjustments;
    NSDictionary *_metadataProperties;
    NSDictionary *_userInfo;
    long long _options;
    PHLIngestAsset *_miniThumbnailAsset;
    PHLIngestAsset *_videoComplementAsset;
}

@property(retain) PHLIngestAsset *videoComplementAsset; // @synthesize videoComplementAsset=_videoComplementAsset;
@property(retain) PHLIngestAsset *miniThumbnailAsset; // @synthesize miniThumbnailAsset=_miniThumbnailAsset;
@property(readonly) long long options; // @synthesize options=_options;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSDictionary *metadataProperties; // @synthesize metadataProperties=_metadataProperties;
@property(retain) NSArray *adjustments; // @synthesize adjustments=_adjustments;
@property(retain) PHLIngestAsset *thumbnailAsset; // @synthesize thumbnailAsset=_thumbnailAsset;
@property(retain) PHLIngestAsset *renderedAsset; // @synthesize renderedAsset=_renderedAsset;
@property(retain) PHLIngestAsset *alternateMasterAsset; // @synthesize alternateMasterAsset=_alternateMasterAsset;
@property(retain) PHLIngestAsset *masterAsset; // @synthesize masterAsset=_masterAsset;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithMasterAsset:(id)arg1 alternateMasterAsset:(id)arg2 renderedAsset:(id)arg3 thumbnailAsset:(id)arg4 miniThumbnailAsset:(id)arg5 videoComplement:(id)arg6 adjustments:(id)arg7 metadataProperties:(id)arg8 userInfo:(id)arg9 options:(long long)arg10;
- (id)initWithMasterAsset:(id)arg1 renderedAsset:(id)arg2 thumbnailAsset:(id)arg3 videoComplement:(id)arg4 adjustments:(id)arg5 metadataProperties:(id)arg6 userInfo:(id)arg7;
- (id)initWithMasterAsset:(id)arg1 renderedAsset:(id)arg2 thumbnailAsset:(id)arg3 adjustments:(id)arg4 metadataProperties:(id)arg5 userInfo:(id)arg6;

@end

