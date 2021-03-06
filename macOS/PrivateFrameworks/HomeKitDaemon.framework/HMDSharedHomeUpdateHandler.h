//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSharedHomeUpdateSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMDSharedHomeUpdateSession, HMFUnfairLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState>
{
    HMFUnfairLock *_lock;
    BOOL _firstFetchComplete;
    BOOL _suspended;
    BOOL _pendingRequestDataFromResident;
    HMDSharedHomeUpdateSession *_pendingRequestDataFromResidentSession;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
@property(nonatomic) BOOL pendingRequestDataFromResident; // @synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident;
@property(getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) BOOL firstFetchComplete; // @synthesize firstFetchComplete=_firstFetchComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)dumpState;
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;
@property(retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession; // @synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_evaluateNeedForSync;
- (void)requestHomeDataSync;
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;
- (void)residentsChanged:(id)arg1;
- (void)resume;
- (void)pause;
- (id)logIdentifier;
- (void)registerForMessages;
- (void)configureWithHome:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

