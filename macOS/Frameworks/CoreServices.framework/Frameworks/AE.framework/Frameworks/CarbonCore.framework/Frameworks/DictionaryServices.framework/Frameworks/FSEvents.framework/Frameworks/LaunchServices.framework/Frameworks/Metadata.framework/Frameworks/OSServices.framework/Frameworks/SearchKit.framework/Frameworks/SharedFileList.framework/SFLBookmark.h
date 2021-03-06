//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedFileList/NSCopying-Protocol.h>

@class NSData, NSError, NSURL;

@interface SFLBookmark : NSObject <NSCopying>
{
    NSURL *_url;
    unsigned long long _state;
    NSError *_error;
    struct os_unfair_lock_s _lock;
    NSData *_data;
    CDUnknownBlockType _synchronousResolver;
    CDUnknownBlockType _asynchronousResolver;
}

@property(copy) CDUnknownBlockType asynchronousResolver; // @synthesize asynchronousResolver=_asynchronousResolver;
@property(copy) CDUnknownBlockType synchronousResolver; // @synthesize synchronousResolver=_synchronousResolver;
@property(readonly) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (id)resourcePropertyForKey:(id)arg1;
- (BOOL)resolveWithOptions:(unsigned long long)arg1 relativeToURL:(id)arg2 error:(id *)arg3;
- (BOOL)resolveWithOptions:(unsigned long long)arg1 relativeToURL:(id)arg2;
- (BOOL)resolveWithOptions:(unsigned long long)arg1;
- (BOOL)resolve;
- (void)resolveWithOptions:(unsigned long long)arg1 relativeToURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resolveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithResolveResult:(id)arg1;
@property(readonly, getter=isStale) BOOL stale;
@property(readonly, getter=isResolved) BOOL resolved;
@property(readonly) NSError *error; // @dynamic error;
@property(readonly) unsigned long long state; // @dynamic state;
@property(readonly) NSURL *url; // @dynamic url;
- (BOOL)isEqual:(id)arg1 requiredMatchResult:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 includingResourceValuesForKeys:(id)arg3 relativeToURL:(id)arg4;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithBookmarkData:(id)arg1;
- (id)_init;

@end

