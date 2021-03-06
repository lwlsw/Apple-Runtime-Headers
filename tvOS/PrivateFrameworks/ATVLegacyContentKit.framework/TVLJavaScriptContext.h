//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TVLJavaScriptContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueJSContext *_globalContext;
    NSMutableArray *_postEvalCommandBlocks;
    NSMutableDictionary *_classesByName;
    NSMutableArray *_protectionArray;
    _Bool _isDestroyed;
}

+ (id)contextFromJSContext:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) _Bool isDestroyed; // @synthesize isDestroyed=_isDestroyed;
- (void).cxx_destruct;
- (_Bool)evaluateSynchronously:(CDUnknownBlockType)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_evaluateNowWithBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRemoteInspectionEnabled:(_Bool)arg1;
@property(copy, nonatomic) NSString *JSContextName;
- (void)_drainProtectionPool:(struct OpaqueJSContext *)arg1;
- (void)_addToProtectionPool:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
- (_Bool)_makeProtectionPoolIfNecessary:(struct OpaqueJSContext *)arg1;
- (void)destroy:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDebugLabel:(id)arg1;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)callFunction:(id)arg1 withArguments:(id)arg2;
- (void)callFunction:(id)arg1 withArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)callFunction:(id)arg1 withArguments:(id)arg2 expectedNumberOfCallbackArguments:(unsigned long long)arg3 returnValueCallbackArg:(CDUnknownBlockType)arg4;
- (_Bool)callSynchronousFunction:(id)arg1 withArguments:(id)arg2 retainedReturnValue:(id *)arg3;
- (struct OpaqueJSClass *)classForName:(id)arg1;
- (void)setClass:(struct OpaqueJSClass *)arg1 forName:(id)arg2;
- (void)addPostEvaluateBlock:(CDUnknownBlockType)arg1;

@end

