//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXFDispatchWorkItem : NSObject
{
    CDUnknownBlockType ___block;
    unsigned long long __attributes;
}

@property(readonly, nonatomic) unsigned long long _attributes; // @synthesize _attributes=__attributes;
@property(readonly, nonatomic) CDUnknownBlockType _block; // @synthesize _block=___block;
- (void).cxx_destruct;
- (void)notifyWithQueue:(id)arg1 workItem:(id)arg2;
- (void)notifyWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)waitWithTimeout:(long long)arg1;
- (void)wait;
@property(readonly) BOOL isCancelled;
- (void)cancel;
- (id)initWithAttributes:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end

