//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLCounterSampleBufferDescriptor.h>

#import <Metal/NSCopying-Protocol.h>

@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying>
{
    id <MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setCounterSet:(id)arg1;
- (id)counterSet;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

