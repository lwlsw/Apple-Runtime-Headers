//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegateHomeKit-Protocol.h>
#import <HomeKitDaemon/NSURLSessionDelegate-Protocol.h>

@class HMDHome, HMFNetMonitor, IDSService, NSHashTable, NSMutableArray, NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HMDRelayManager : HMFObject <HMFNetMonitorDelegate, IDSServiceDelegateHomeKit, NSURLSessionDelegate, HMFLogging>
{
    _Bool _supported;
    _Bool _enabled;
    unsigned long long _currentState;
    NSString *_controllerIdentifier;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    IDSService *_idsService;
    NSHashTable *_delegates;
    NSHashTable *_relayAccessories;
    NSMutableArray *_relayStreams;
    NSURLSession *_urlSession;
    HMFNetMonitor *_networkMonitor;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSMutableArray *relayStreams; // @synthesize relayStreams=_relayStreams;
@property(readonly, nonatomic) NSHashTable *relayAccessories; // @synthesize relayAccessories=_relayAccessories;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryReportMessage:(id)arg3 controllerID:(id)arg4 accessoryID:(id)arg5 context:(id)arg6;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (id)logIdentifier;
- (void)_sendAccessoryReport:(id)arg1 reportIdentifier:(id)arg2;
- (void)_requestUserReportAccessory:(id)arg1 reportIdentifier:(id)arg2;
- (void)_tearDownRelayForAccessory:(id)arg1;
- (void)_setupRelayForAccessory:(id)arg1;
- (void)accessory:(id)arg1 didUpdateEnabledState:(_Bool)arg2;
- (void)_disableRelayForAccessory:(id)arg1;
- (_Bool)_enableRelayForAccessory:(id)arg1;
- (void)accessoryDidPair:(id)arg1;
- (void)_pairAccessory:(id)arg1;
- (void)accessoryDidActivate:(id)arg1;
- (void)_activateAccessory:(id)arg1;
- (void)_handleAccessoryEnabled:(id)arg1;
- (void)startAccessories:(id)arg1;
- (id)_accessTokenForAccessTokenAttributes:(id)arg1 consentTokens:(id)arg2 matchedConsentToken:(id *)arg3 error:(id *)arg4;
- (void)_accessTokensForConsentTokens:(id)arg1 user:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addUserToRelayAccessories:(id)arg1 consentTokens:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_consentTokenForConsentTokenAttributes:(id)arg1 matchedAccessory:(id *)arg2 error:(id *)arg3;
- (void)_requestConsentTokensForAccessoryIdentifiers:(id)arg1 administratorIdentifier:(id)arg2;
- (void)_requestPairingWithAccessories:(id)arg1;
- (void)requestPairingWithRelayAccessories:(id)arg1;
- (void)removeRelayAccessory:(id)arg1;
- (void)addRelayAccessory:(id)arg1;
- (void)__resumeAllStreams;
- (void)__suspendAllStreams;
- (id)_relayStreamForAccessory:(id)arg1;
- (void)_handleNotifyingDelegatesOfControllerIdentifierUpdate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)_updateControllerIdentifier;
@property(copy, nonatomic) NSString *controllerIdentifier; // @synthesize controllerIdentifier=_controllerIdentifier;
- (void)_handleRelayManagerUnsupported;
- (void)_handleRelayManagerDisabled;
- (void)_handleRelayManagerEnabled;
- (void)_handleRelayManagerEnabling;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)_updateCurrentState;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
- (id)initWithHome:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

