//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLTexture;

@interface AR2DSkeletonDetectionPostProcessGPU : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _pipelineStateInterpolate;
    id <MTLComputePipelineState> _pipelineStateMaxFilter;
    id <MTLTexture> _input;
    id <MTLTexture> _intermediate;
    id <MTLTexture> _output;
    float *_outputBuffer;
}

- (void).cxx_destruct;
- (float *)process:(float *)arg1 counter:(unsigned int *)arg2;
- (void)dealloc;
- (id)init;

@end

