//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCHChartLayoutCache : NSObject
{
    NSMutableArray *mCacheItems;
    _Bool mIgnoreInvalidation;
}

+ (id)cacheWithCacheItem:(id)arg1;
@property(nonatomic) _Bool ignoreInvalidation; // @synthesize ignoreInvalidation=mIgnoreInvalidation;
- (void).cxx_destruct;
- (void)printDebug;
- (void)invalidate;
- (void)accessWithCacheItemBlock:(CDUnknownBlockType)arg1 calculateBlock:(CDUnknownBlockType)arg2;
- (id)initWithCacheItem:(id)arg1;
- (id)init;

@end

