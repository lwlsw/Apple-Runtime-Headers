//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CSKStringsIndexer : NSObject
{
    unsigned long long _length;
    NSArray *_cachedObjects;
    NSMutableArray *_markers;
    unsigned long long _lastMarkerIndex;
}

+ (id)indexedObjects:(id)arg1;
@property(nonatomic) unsigned long long lastMarkerIndex; // @synthesize lastMarkerIndex=_lastMarkerIndex;
@property(retain, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(retain, nonatomic) NSArray *cachedObjects; // @synthesize cachedObjects=_cachedObjects;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (void).cxx_destruct;
- (long long)_searchMarkerIndexForLocation:(unsigned long long)arg1;
- (void)_indexObjects:(id)arg1;
- (id)markerAtIndex:(long long)arg1;
- (id)markerForLocation:(unsigned long long)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)appendObjects:(id)arg1;

@end

