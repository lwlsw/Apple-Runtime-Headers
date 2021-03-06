//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WirelessProximity/NSXPCListenerDelegate-Protocol.h>
#import <WirelessProximity/WPXPCClientProtocol-Protocol.h>
#import <WirelessProximity/WPXPCDaemonProtocol-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WPClient : NSObject <NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol>
{
    unsigned char _type;
    BOOL _isTestClient;
    BOOL _isBubbleTestClient;
    BOOL _peerTrackingSlotsAvailable;
    BOOL _needsToRegister;
    BOOL _registering;
    BOOL _servicesAdded;
    long long _state;
    long long _advertiserState;
    long long _scannerState;
    long long _pipeState;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_daemonDeliveryQueue;
    NSObject<OS_dispatch_semaphore> *_daemonRegisteredSemaphore;
    NSString *_machName;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
}

+ (id)stateAsString:(long long)arg1;
+ (BOOL)holdVoucherForConnections;
+ (void)initialize;
+ (BOOL)isHomePod;
@property(retain) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property BOOL servicesAdded; // @synthesize servicesAdded=_servicesAdded;
@property BOOL registering; // @synthesize registering=_registering;
@property BOOL needsToRegister; // @synthesize needsToRegister=_needsToRegister;
@property BOOL peerTrackingSlotsAvailable; // @synthesize peerTrackingSlotsAvailable=_peerTrackingSlotsAvailable;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *machName; // @synthesize machName=_machName;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *daemonRegisteredSemaphore; // @synthesize daemonRegisteredSemaphore=_daemonRegisteredSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *daemonDeliveryQueue; // @synthesize daemonDeliveryQueue=_daemonDeliveryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property BOOL isBubbleTestClient; // @synthesize isBubbleTestClient=_isBubbleTestClient;
@property BOOL isTestClient; // @synthesize isTestClient=_isTestClient;
@property unsigned char type; // @synthesize type=_type;
@property(readonly) long long pipeState; // @synthesize pipeState=_pipeState;
@property long long scannerState; // @synthesize scannerState=_scannerState;
@property long long advertiserState; // @synthesize advertiserState=_advertiserState;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)sendTestRequest:(id)arg1;
- (void)disableScanning;
- (void)dumpDaemonState;
- (void)getPowerLogStats:(CDUnknownBlockType)arg1;
- (void)enableBubbleTestMode;
- (void)enableTestMode;
- (void)checkAllowDuplicates:(CDUnknownBlockType)arg1;
- (void)receivedTestResponse:(id)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)listenToBandwidthNotifications;
- (void)isRangingEnabledReply:(CDUnknownBlockType)arg1;
- (void)enableRanging:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getAllTrackedZones;
- (void)stopTrackingAllZones;
- (void)stopTrackingZones:(id)arg1;
- (void)startTrackingZone:(id)arg1;
- (void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
- (void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
- (void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)disconnectFromPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withOptions:(id)arg2;
- (void)connectToPeer:(id)arg1;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)stopTrackingPeerWithRequest:(id)arg1;
- (void)startTrackingPeerWithRequest:(id)arg1;
- (void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2;
- (void)unregisterEndpoint:(id)arg1;
- (void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3;
- (void)startScanning:(id)arg1 andAdvertising:(id)arg2;
- (void)updateScanningRequest:(id)arg1 withUpdate:(CDUnknownBlockType)arg2;
- (void)stopScanning:(id)arg1;
- (void)startScanning:(id)arg1;
- (void)registerForAnyScanResults:(BOOL)arg1;
- (void)stopAdvertising:(id)arg1;
- (void)startAdvertising:(id)arg1;
- (void)addServices;
- (void)populateClientGATT:(CDUnknownBlockType)arg1;
- (id)clientAsString;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)registeredWithDaemonAndContinuingSession:(BOOL)arg1;
- (void)destroyConnection;
- (void)whitelistConnectionMethods:(id)arg1;
- (id)connection;
- (void)establishConnection;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setupMachXPCService;
- (void)dealloc;
- (void)invalidate;
- (id)initWithQueue:(id)arg1 machName:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

