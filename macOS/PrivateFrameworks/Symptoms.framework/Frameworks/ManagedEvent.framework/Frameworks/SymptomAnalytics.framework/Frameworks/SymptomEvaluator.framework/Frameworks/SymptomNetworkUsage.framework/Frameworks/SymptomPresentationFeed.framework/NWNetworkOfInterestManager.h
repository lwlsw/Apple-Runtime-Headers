//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnalyticsWorkspace, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue, ServiceInterface;

@interface NWNetworkOfInterestManager : NSObject
{
    AnalyticsWorkspace *workspace;
    NSMutableSet *registryNOI;
    int notifyToken;
    BOOL closing;
    id _delegate;
    NSXPCConnection *_connection;
    id <ServiceInterface> _service;
    NSObject<OS_dispatch_queue> *_callerQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *callerQueue; // @synthesize callerQueue=_callerQueue;
@property(retain) id <ServiceInterface> service; // @synthesize service=_service;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateNOI:(id)arg1 keyPath:(id)arg2 change:(id)arg3;
- (void)haveNOIs:(id)arg1 tornDown:(BOOL)arg2;
- (void)trafficInvitesHourlyDistributionForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)trainingProgressForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dayOfWeekPredictionGroupingForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)errorPredictionsForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)destroy;
- (BOOL)isClosing;
- (void)stopTrackingNOIs:(id)arg1;
- (void)canUseOnAlternateNOI:(id)arg1 appStates:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)canUseOnAlternateNOI:(id)arg1 apps:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)foregroundNetworkActivityUnderwayOn:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)estimatedDataTransferTimeOnNOI:(id)arg1 withPayloadInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)linkThroughputOnNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)networkAttachmentInfoForScopedNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)auditableLinkQualityForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)instantQualityForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updatePredictionsForNOI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)trackCustomNOI:(id)arg1 options:(id)arg2;
- (void)trackAllBuiltinNOIsForInterfaceType:(long long)arg1 options:(id)arg2;
- (void)trackNOIAnyForInterfaceType:(long long)arg1 options:(id)arg2;
- (void)setQueue:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_commonFinalizeRequestFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 isStaged:(BOOL)arg4;
- (void)_commonTrackRequestFor:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 options:(id)arg4 isCustom:(id)arg5;
- (BOOL)_connect;
- (void)_unloadState;

@end

