//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceDomain, BSServiceSpecification, BSZeroingWeakReference, NSMutableArray, NSMutableDictionary;

@interface BSService : NSObject
{
    BSServiceDomain *_domain;
    BSServiceSpecification *_specification;
    struct os_unfair_lock_s _lock;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
}

- (void).cxx_destruct;
- (void)_didReceiveConnection:(id)arg1;
- (void)_disableConnectionPending;
- (id)_identifier;
- (id)_registerListener:(id)arg1 forInstance:(id)arg2;
- (id)_initWithSpecification:(id)arg1 domain:(id)arg2;

@end

