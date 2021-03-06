//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/ETDataProvider-Protocol.h>

@class NSDictionary;

@interface _MLDataSource : NSObject <ETDataProvider>
{
    NSDictionary *_dataTensorDictionary;
}

@property(retain, nonatomic) NSDictionary *dataTensorDictionary; // @synthesize dataTensorDictionary=_dataTensorDictionary;
- (void).cxx_destruct;
- (unsigned long long)numberOfDataPoints;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithMLFeatureProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;

@end

