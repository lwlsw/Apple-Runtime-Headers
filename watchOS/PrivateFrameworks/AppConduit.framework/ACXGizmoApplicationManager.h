//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface ACXGizmoApplicationManager : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedConnection;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (_Bool)installRequestFailedForApp:(id)arg1 failureReason:(id)arg2 wasUserInitiated:(_Bool)arg3 error:(id *)arg4;
- (unsigned int)installabilityForDeletableSystemAppWithBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)counterpartApplicationisInstalledOnCompanionForWatchBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)applicationIsInstalledOnCompanionWithBundleID:(id)arg1 error:(id *)arg2;
- (void)reconcileAppsOnPairing:(CDUnknownBlockType)arg1;
- (_Bool)fetchApplicationDatabaseSyncInformationReturningDatabaseUUID:(id *)arg1 lastSequenceNumber:(unsigned int *)arg2 error:(id *)arg3;
- (void)iconForApplicationWithBundleID:(id)arg1 variant:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)compatibleWatchApplicationsOnCompanionWithCompletion:(CDUnknownBlockType)arg1;
- (void)installApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeApplicationUserData:(CDUnknownBlockType)arg1;
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

