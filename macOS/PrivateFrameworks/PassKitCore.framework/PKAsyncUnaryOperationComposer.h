//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operations;
}

+ (id)_evaluateOperations:(id)arg1 withInput:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)evaluateWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOperation:(CDUnknownBlockType)arg1;
- (id)init;

@end

