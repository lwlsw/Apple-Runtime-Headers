//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDExtensionSessionProtocol-Protocol.h>
#import <FileProviderDaemon/FPDProcessMonitorDelegate-Protocol.h>

@class FPDDomain, FPDExtension, FPDProcessMonitor, FPGracePeriodTimer, NSCountedSet, NSExtension, NSHashTable, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol>
{
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSHashTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    BOOL _invalidated;
    BOOL _isForeground;
    int _pid;
    BOOL _hasFileProviderPresenceTCCAccess;
}

@property(nonatomic) BOOL hasFileProviderPresenceTCCAccess; // @synthesize hasFileProviderPresenceTCCAccess=_hasFileProviderPresenceTCCAccess;
- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (void)processMonitor:(id)arg1 didBecomeForeground:(BOOL)arg2;
- (void)_evaluateExtensionForegroundness;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)arg1;
- (void)_networkingGracePeriodOver;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)start;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (void)_unregisterLifetimeExtensionForObject:(id)arg1;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 createIfNeeded:(BOOL)arg3;
- (id)existingFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
- (id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1;
- (id)newFileProviderProxyWithPID:(int)arg1;
- (id)newFileProviderProxyWithoutPID;
- (void)_invalidateExtensionIfPossible;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)_connectionWithError:(id *)arg1;
- (BOOL)_setUpConnectionWithAttemptNumber:(long long)arg1 error:(id *)arg2;
- (id)_alternateContentsDictionary;
- (void)__invalidateWithCancellation:(BOOL)arg1;
- (void)_invalidateWithCancellation:(BOOL)arg1;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 extension:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

