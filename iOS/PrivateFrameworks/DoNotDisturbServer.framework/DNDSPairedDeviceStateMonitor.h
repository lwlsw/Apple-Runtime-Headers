//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>
#import <DoNotDisturbServer/IDSServiceDelegate-Protocol.h>

@class DNDSPairedDevice, IDSService, NSString;
@protocol DNDSPairedDeviceStateMonitorDelegate, OS_dispatch_queue;

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_idsService;
    int _pairedDeviceDidChangeNotificationToken;
    DNDSPairedDevice *_pairedDevice;
    id <DNDSPairedDeviceStateMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSPairedDeviceStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) DNDSPairedDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
- (void).cxx_destruct;
- (id)sysdiagnoseDataForDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)_pairedDeviceStateChanged:(id)arg1;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (id)_getCurrentPairedDevice;
- (void)_queue_updatePairedState;
- (void)resume;
- (void)dealloc;
- (id)initWithIDSService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

