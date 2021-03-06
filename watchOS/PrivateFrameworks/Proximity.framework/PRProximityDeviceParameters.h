//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PRProximityDeviceParameters : NSObject
{
    struct BtProximityFilterBase *_filter;
    unsigned int _samplesize;
    NSNumber *_rssiImmediate;
    NSNumber *_rssiNear;
}

@property(readonly) NSNumber *rssiNear; // @synthesize rssiNear=_rssiNear;
@property(readonly) NSNumber *rssiImmediate; // @synthesize rssiImmediate=_rssiImmediate;
@property(readonly) unsigned int samplesize; // @synthesize samplesize=_samplesize;
@property(readonly) struct BtProximityFilterBase *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)initWithFilter:(struct BtProximityFilterBase *)arg1 sampleSize:(unsigned int)arg2 rssiImmediate:(id)arg3 rssiNear:(id)arg4;
- (id)init;

@end

