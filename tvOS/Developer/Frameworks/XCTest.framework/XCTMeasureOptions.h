//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface XCTMeasureOptions : NSObject
{
    NSMutableDictionary *_instrumentOptions;
    _Bool _discardFirstIteration;
    unsigned long long _instrumentAutomatic;
    unsigned long long _metricPerferredSampleMode;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool discardFirstIteration; // @synthesize discardFirstIteration=_discardFirstIteration;
@property(readonly, nonatomic) unsigned long long metricPerferredSampleMode; // @synthesize metricPerferredSampleMode=_metricPerferredSampleMode;
@property(readonly, nonatomic) unsigned long long instrumentAutomatic; // @synthesize instrumentAutomatic=_instrumentAutomatic;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInstrumentOptionsDictionary:(id)arg1;
@property(nonatomic) unsigned long long iterationCount;
@property(nonatomic) unsigned long long invocationOptions;
@property(nonatomic) _Bool allowContinuousSampling;
@property(nonatomic) _Bool allowConcurrentIterations;
@property(readonly, nonatomic) NSDictionary *instrumentOptions;

@end

