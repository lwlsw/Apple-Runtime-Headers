//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLPNetwork, MPSNNOptimizer;

@interface MLPOptimizer : NSObject
{
    MPSNNOptimizer *_mpsOptimizer;
    MLPNetwork *_network;
}

+ (id)optimizerWithNetwork:(id)arg1 momentum:(CDUnknownBlockType)arg2 velocity:(CDUnknownBlockType)arg3;
@property(readonly) __weak MLPNetwork *network; // @synthesize network=_network;
@property(readonly) MPSNNOptimizer *mpsOptimizer; // @synthesize mpsOptimizer=_mpsOptimizer;
- (void).cxx_destruct;
- (void)updateLearningRate:(float)arg1;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;
- (id)initWithNetwork:(id)arg1 mpsOptimizer:(id)arg2;

@end

