//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISURLCacheConfiguration, NSString, NSURLCache;

@interface ISURLCache : NSObject
{
    NSURLCache *_cache;
    ISURLCacheConfiguration *_configuration;
}

+ (id)cacheDirectoryPath;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)saveMemoryCacheToDisk;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeAllCachedResponses;
- (void)purgeMemoryCache;
@property(readonly, nonatomic) unsigned long long memoryCapacity;
@property(readonly, nonatomic) unsigned long long diskCapacity;
@property(readonly, nonatomic) unsigned long long currentMemoryUsage;
@property(readonly, nonatomic) unsigned long long currentDiskUsage;
- (id)cachedResponseForRequest:(id)arg1;
- (void)reloadWithCacheConfiguration:(id)arg1;
@property(readonly) NSString *persistentIdentifier;
- (void)dealloc;
- (id)initWithCacheConfiguration:(id)arg1;
- (id)init;

@end

