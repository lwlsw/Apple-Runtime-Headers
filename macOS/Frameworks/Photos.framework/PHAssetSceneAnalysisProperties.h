//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSDate;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet
{
    unsigned long long _sceneAnalysisVersion;
    NSDate *_sceneAnalysisTimestamp;
    NSData *_distanceIdentity;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, nonatomic) NSData *distanceIdentity; // @synthesize distanceIdentity=_distanceIdentity;
@property(readonly, nonatomic) NSDate *sceneAnalysisTimestamp; // @synthesize sceneAnalysisTimestamp=_sceneAnalysisTimestamp;
@property(readonly, nonatomic) unsigned long long sceneAnalysisVersion; // @synthesize sceneAnalysisVersion=_sceneAnalysisVersion;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

