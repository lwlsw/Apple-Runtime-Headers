//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PLCloudDownloadBatchDetails : NSObject
{
    _Bool _hasResourceChanges;
    int _numberOfPhotos;
    int _numberOfVideos;
    NSArray *_cmmUUIDsToNotify;
    NSArray *_flippedPlaceholderAssetUUIDs;
    NSSet *_confirmedResourceIDs;
}

@property(copy, nonatomic) NSSet *confirmedResourceIDs; // @synthesize confirmedResourceIDs=_confirmedResourceIDs;
@property(copy, nonatomic) NSArray *flippedPlaceholderAssetUUIDs; // @synthesize flippedPlaceholderAssetUUIDs=_flippedPlaceholderAssetUUIDs;
@property(copy, nonatomic) NSArray *cmmUUIDsToNotify; // @synthesize cmmUUIDsToNotify=_cmmUUIDsToNotify;
@property(nonatomic) int numberOfVideos; // @synthesize numberOfVideos=_numberOfVideos;
@property(nonatomic) int numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property(nonatomic) _Bool hasResourceChanges; // @synthesize hasResourceChanges=_hasResourceChanges;
- (void).cxx_destruct;
- (void)unionBatchDetails:(id)arg1;

@end

