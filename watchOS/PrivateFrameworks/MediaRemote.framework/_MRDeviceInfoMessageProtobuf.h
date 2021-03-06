//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _protocolVersion;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_name;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    _Bool _allowsPairing;
    _Bool _connected;
    _Bool _isAirplayActive;
    _Bool _isGroupLeader;
    _Bool _isProxyGroupPlayer;
    _Bool _supportsACL;
    _Bool _supportsExtendedMotion;
    _Bool _supportsSharedQueue;
    _Bool _supportsSystemPairing;
    _Bool _tightlySyncedGroup;
    struct {
        unsigned int protocolVersion:1;
        unsigned int deviceClass:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int logicalDeviceCount:1;
        unsigned int sharedQueueVersion:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int isAirplayActive:1;
        unsigned int isGroupLeader:1;
        unsigned int isProxyGroupPlayer:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
        unsigned int tightlySyncedGroup:1;
    } _has;
}

+ (Class)airplayReceiversType;
+ (Class)groupedDevicesType;
@property(retain, nonatomic) NSString *linkAgent; // @synthesize linkAgent=_linkAgent;
@property(retain, nonatomic) NSMutableArray *airplayReceivers; // @synthesize airplayReceivers=_airplayReceivers;
@property(retain, nonatomic) NSString *senderDefaultGroupUID; // @synthesize senderDefaultGroupUID=_senderDefaultGroupUID;
@property(retain, nonatomic) NSString *systemPodcastApplication; // @synthesize systemPodcastApplication=_systemPodcastApplication;
@property(nonatomic) _Bool isAirplayActive; // @synthesize isAirplayActive=_isAirplayActive;
@property(nonatomic) _Bool isGroupLeader; // @synthesize isGroupLeader=_isGroupLeader;
@property(retain, nonatomic) NSMutableArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property(retain, nonatomic) NSString *tightSyncUID; // @synthesize tightSyncUID=_tightSyncUID;
@property(nonatomic) _Bool isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property(nonatomic) _Bool tightlySyncedGroup; // @synthesize tightlySyncedGroup=_tightlySyncedGroup;
@property(nonatomic) unsigned int logicalDeviceCount; // @synthesize logicalDeviceCount=_logicalDeviceCount;
@property(retain, nonatomic) NSString *managedConfigDeviceID; // @synthesize managedConfigDeviceID=_managedConfigDeviceID;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(nonatomic) unsigned int sharedQueueVersion; // @synthesize sharedQueueVersion=_sharedQueueVersion;
@property(retain, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) _Bool supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property(nonatomic) _Bool supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(nonatomic) _Bool supportsACL; // @synthesize supportsACL=_supportsACL;
@property(retain, nonatomic) NSString *systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool allowsPairing; // @synthesize allowsPairing=_allowsPairing;
@property(nonatomic) _Bool supportsSystemPairing; // @synthesize supportsSystemPairing=_supportsSystemPairing;
@property(nonatomic) unsigned int lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *applicationBundleVersion; // @synthesize applicationBundleVersion=_applicationBundleVersion;
@property(retain, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLinkAgent;
- (id)airplayReceiversAtIndex:(unsigned int)arg1;
- (unsigned int)airplayReceiversCount;
- (void)addAirplayReceivers:(id)arg1;
- (void)clearAirplayReceivers;
@property(readonly, nonatomic) _Bool hasSenderDefaultGroupUID;
@property(readonly, nonatomic) _Bool hasSystemPodcastApplication;
@property(nonatomic) _Bool hasIsAirplayActive;
@property(nonatomic) _Bool hasIsGroupLeader;
- (id)groupedDevicesAtIndex:(unsigned int)arg1;
- (unsigned int)groupedDevicesCount;
- (void)addGroupedDevices:(id)arg1;
- (void)clearGroupedDevices;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(readonly, nonatomic) _Bool hasGroupUID;
@property(readonly, nonatomic) _Bool hasTightSyncUID;
@property(nonatomic) _Bool hasIsProxyGroupPlayer;
@property(nonatomic) _Bool hasTightlySyncedGroup;
@property(nonatomic) _Bool hasLogicalDeviceCount;
- (int)StringAsDeviceClass:(id)arg1;
- (id)deviceClassAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceClass;
@property(nonatomic) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) _Bool hasManagedConfigDeviceID;
@property(readonly, nonatomic) _Bool hasDeviceUID;
@property(nonatomic) _Bool hasSharedQueueVersion;
@property(readonly, nonatomic) _Bool hasBluetoothAddress;
@property(nonatomic) _Bool hasSupportsExtendedMotion;
@property(nonatomic) _Bool hasSupportsSharedQueue;
@property(nonatomic) _Bool hasSupportsACL;
@property(readonly, nonatomic) _Bool hasSystemMediaApplication;
@property(nonatomic) _Bool hasConnected;
@property(nonatomic) _Bool hasAllowsPairing;
@property(nonatomic) _Bool hasSupportsSystemPairing;
@property(nonatomic) _Bool hasLastSupportedMessageType;
@property(nonatomic) _Bool hasProtocolVersion;
@property(readonly, nonatomic) _Bool hasApplicationBundleVersion;
@property(readonly, nonatomic) _Bool hasApplicationBundleIdentifier;
@property(readonly, nonatomic) _Bool hasSystemBuildVersion;
@property(readonly, nonatomic) _Bool hasLocalizedModelName;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;

@end

