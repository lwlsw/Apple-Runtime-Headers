//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ARPredictedSamplesQueue : NSObject
{
    int _capacity;
    NSMutableArray *_allSamples;
}

@property(nonatomic) int capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSMutableArray *allSamples; // @synthesize allSamples=_allSamples;
- (void).cxx_destruct;
- (id)samples;
- (void)add:(id)arg1;
- (id)description;
- (id)init;

@end

