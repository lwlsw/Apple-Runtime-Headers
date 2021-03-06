//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSVirtualMachine, NSThread, NSTimer;
@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;

@interface WFRemoteQuarantinePolicyEvaluator : NSObject
{
    JSVirtualMachine *_javaScriptVirtualMachine;
    id <WFRemoteQuarantinePolicyEvaluatorDelegate> _delegate;
    NSThread *_javaScriptEvaluationThread;
    struct __CFRunLoop *_javaScriptEvaluationThreadRunLoop;
    NSTimer *_javaScriptVirtualMachineDestructionTimer;
}

+ (id)sharedEvaluator;
@property(readonly, nonatomic) NSTimer *javaScriptVirtualMachineDestructionTimer; // @synthesize javaScriptVirtualMachineDestructionTimer=_javaScriptVirtualMachineDestructionTimer;
@property(readonly, nonatomic) struct __CFRunLoop *javaScriptEvaluationThreadRunLoop; // @synthesize javaScriptEvaluationThreadRunLoop=_javaScriptEvaluationThreadRunLoop;
@property(readonly, nonatomic) NSThread *javaScriptEvaluationThread; // @synthesize javaScriptEvaluationThread=_javaScriptEvaluationThread;
@property(nonatomic) __weak id <WFRemoteQuarantinePolicyEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JSVirtualMachine *javaScriptVirtualMachine; // @synthesize javaScriptVirtualMachine=_javaScriptVirtualMachine;
- (void).cxx_destruct;
- (void)_evaluatePolicyForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaluatePolicyForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

