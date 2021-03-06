//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>
{
    NSMutableArray *_samples;
}

+ (_Bool)supportsSecureCoding;
+ (id)makeMetric;
@property(retain, nonatomic) NSMutableArray *samples; // @synthesize samples=_samples;
- (void).cxx_destruct;
- (id)generateDataForSR:(id)arg1 dropSampleSize:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (_Bool)isEmpty;
- (unsigned long long)size;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (double)variance;
- (double)average;
- (void)addSample:(id)arg1;
- (id)init;

@end

