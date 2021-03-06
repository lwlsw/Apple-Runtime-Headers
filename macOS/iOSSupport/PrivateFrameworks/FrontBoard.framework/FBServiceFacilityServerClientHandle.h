//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSInvalidatable-Protocol.h>
#import <FrontBoard/FBSServiceFacilityClientHandle_Internal-Protocol.h>

@class BSProcessHandle, BSServiceConnection, FBProcess, NSString, RBSProcessIdentity;
@protocol BSXPCServiceConnectionMessaging, FBSServiceFacilityClientContext;

@interface FBServiceFacilityServerClientHandle : NSObject <FBSServiceFacilityClientHandle_Internal, BSInvalidatable>
{
    NSString *_facilityID;
    BSServiceConnection *_connection;
    FBProcess *_process;
    BSProcessHandle *_processHandle;
    id <FBSServiceFacilityClientContext> _context;
}

@property(retain, nonatomic) id <FBSServiceFacilityClientContext> context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *facilityID; // @synthesize facilityID=_facilityID;
@property(readonly, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
- (void).cxx_destruct;
- (id)prettyProcessDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <BSXPCServiceConnectionMessaging> clientHandle_messageBuilder;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property(readonly, nonatomic) int pid;
- (void)invalidate;
- (id)initWithFacilityID:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

