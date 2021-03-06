//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CWFSCNetworkInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore *_storeRef;
    BOOL _isMonitoringEvents;
    NSString *_interfaceName;
    NSString *_hardwareAddress;
    CDUnknownBlockType _eventHandler;
}

@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, copy, nonatomic) NSString *hardwareAddress; // @synthesize hardwareAddress=_hardwareAddress;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (void).cxx_destruct;
- (id)__hardwareAddress;
- (id)__networkInterfaceHardwareAddress;
- (id)__networkStackHardwareAddress;
- (BOOL)isLinkActive;
- (id)IPv6PrefixLengths;
- (id)IPv6Flags;
- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)IPv4BroadcastAddresses;
- (id)IPv4Addresses;
- (id)__linkStateConfig;
- (id)__IPv6StateConfig;
- (id)__IPv4StateConfig;
- (id)airPortSetupConfiguration;
- (id)airPortStateConfiguration;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (void)dealloc;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;

@end

