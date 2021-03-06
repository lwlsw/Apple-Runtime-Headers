//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSArray, NSString;

@interface CRMLModel : NSObject
{
    MLModel *model;
    int _modelHeight;
    int _modelWidth;
    int _classCount;
    const int *_codeMap;
    NSArray *_modelShape;
    long long _gpuBatchSize;
    long long _cpuBatchSize;
}

@property long long cpuBatchSize; // @synthesize cpuBatchSize=_cpuBatchSize;
@property long long gpuBatchSize; // @synthesize gpuBatchSize=_gpuBatchSize;
@property(retain) NSArray *modelShape; // @synthesize modelShape=_modelShape;
@property(readonly) int classCount; // @synthesize classCount=_classCount;
@property(readonly) const int *codeMap; // @synthesize codeMap=_codeMap;
- (void).cxx_destruct;
- (id)predict:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *modelName;
@property(readonly) int inputHeight;
@property(readonly) int inputWidth;
- (id)initWithURL:(id)arg1 restrictToCPU:(_Bool)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initRestrictingToCPU:(_Bool)arg1;
- (id)init;
- (vector_00ef371e)activationsFromImage:(id)arg1;
- (id)decodeActivations:(vector_00ef371e *)arg1 blank:(unsigned short)arg2 ctcAllowGarbage:(_Bool)arg3 numResultNeeded:(long long)arg4;
- (id)decodeActivations:(vector_00ef371e *)arg1;

@end

