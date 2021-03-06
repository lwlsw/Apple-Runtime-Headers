//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString, _MRAVOutputDeviceSourceInfoProtobuf;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _batteryLevel;
    NSString *_bluetoothID;
    int _deviceSubType;
    int _deviceType;
    NSString *_firmwareVersion;
    NSString *_groupID;
    NSString *_logicalDeviceID;
    NSData *_macAddress;
    NSString *_modelID;
    NSData *_modelSpecificInfoData;
    NSString *_name;
    NSString *_parentGroupIdentifier;
    _MRAVOutputDeviceSourceInfoProtobuf *_sourceInfo;
    NSString *_uniqueIdentifier;
    float _volume;
    int _volumeCapabilities;
    BOOL _canAccessAppleMusic;
    BOOL _canAccessRemoteAssets;
    BOOL _canAccessiCloudMusicLibrary;
    BOOL _canFetchMediaDataFromSender;
    BOOL _canPlayEncryptedProgressiveDownloadAssets;
    BOOL _canRelayCommunicationChannel;
    BOOL _groupContainsGroupLeader;
    BOOL _isAddedToHomeKit;
    BOOL _isAirPlayReceiverSessionActive;
    BOOL _isDeviceGroupable;
    BOOL _isGroupLeader;
    BOOL _isGroupable;
    BOOL _isLocalDevice;
    BOOL _isProxyGroupPlayer;
    BOOL _isRemoteControllable;
    BOOL _isVolumeControlAvailable;
    BOOL _parentGroupContainsDiscoverableLeader;
    BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    BOOL _requiresAuthorization;
    BOOL _shouldForceRemoteControlabillity;
    BOOL _supportsBufferedAirPlay;
    BOOL _supportsExternalScreen;
    struct {
        unsigned int batteryLevel:1;
        unsigned int deviceSubType:1;
        unsigned int deviceType:1;
        unsigned int volume:1;
        unsigned int volumeCapabilities:1;
        unsigned int canAccessAppleMusic:1;
        unsigned int canAccessRemoteAssets:1;
        unsigned int canAccessiCloudMusicLibrary:1;
        unsigned int canFetchMediaDataFromSender:1;
        unsigned int canPlayEncryptedProgressiveDownloadAssets:1;
        unsigned int canRelayCommunicationChannel:1;
        unsigned int groupContainsGroupLeader:1;
        unsigned int isAddedToHomeKit:1;
        unsigned int isAirPlayReceiverSessionActive:1;
        unsigned int isDeviceGroupable:1;
        unsigned int isGroupLeader:1;
        unsigned int isGroupable:1;
        unsigned int isLocalDevice:1;
        unsigned int isProxyGroupPlayer:1;
        unsigned int isRemoteControllable:1;
        unsigned int isVolumeControlAvailable:1;
        unsigned int parentGroupContainsDiscoverableLeader:1;
        unsigned int presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets:1;
        unsigned int requiresAuthorization:1;
        unsigned int shouldForceRemoteControlabillity:1;
        unsigned int supportsBufferedAirPlay:1;
        unsigned int supportsExternalScreen:1;
    } _has;
}

@property(retain, nonatomic) NSString *bluetoothID; // @synthesize bluetoothID=_bluetoothID;
@property(nonatomic) int volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property(nonatomic) BOOL isAddedToHomeKit; // @synthesize isAddedToHomeKit=_isAddedToHomeKit;
@property(nonatomic) BOOL parentGroupContainsDiscoverableLeader; // @synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader;
@property(retain, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
@property(nonatomic) BOOL isAirPlayReceiverSessionActive; // @synthesize isAirPlayReceiverSessionActive=_isAirPlayReceiverSessionActive;
@property(nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // @synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(nonatomic) BOOL canFetchMediaDataFromSender; // @synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender;
@property(nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets; // @synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets;
@property(nonatomic) BOOL supportsBufferedAirPlay; // @synthesize supportsBufferedAirPlay=_supportsBufferedAirPlay;
@property(nonatomic) BOOL groupContainsGroupLeader; // @synthesize groupContainsGroupLeader=_groupContainsGroupLeader;
@property(nonatomic) BOOL canAccessiCloudMusicLibrary; // @synthesize canAccessiCloudMusicLibrary=_canAccessiCloudMusicLibrary;
@property(nonatomic) BOOL canAccessAppleMusic; // @synthesize canAccessAppleMusic=_canAccessAppleMusic;
@property(nonatomic) BOOL isVolumeControlAvailable; // @synthesize isVolumeControlAvailable=_isVolumeControlAvailable;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(nonatomic) BOOL isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property(retain, nonatomic) NSString *logicalDeviceID; // @synthesize logicalDeviceID=_logicalDeviceID;
@property(nonatomic) BOOL canRelayCommunicationChannel; // @synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel;
@property(nonatomic) BOOL isDeviceGroupable; // @synthesize isDeviceGroupable=_isDeviceGroupable;
@property(retain, nonatomic) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) BOOL shouldForceRemoteControlabillity; // @synthesize shouldForceRemoteControlabillity=_shouldForceRemoteControlabillity;
@property(nonatomic) BOOL requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(nonatomic) BOOL supportsExternalScreen; // @synthesize supportsExternalScreen=_supportsExternalScreen;
@property(nonatomic) BOOL isLocalDevice; // @synthesize isLocalDevice=_isLocalDevice;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) NSData *modelSpecificInfoData; // @synthesize modelSpecificInfoData=_modelSpecificInfoData;
@property(nonatomic) BOOL isGroupable; // @synthesize isGroupable=_isGroupable;
@property(nonatomic) BOOL isGroupLeader; // @synthesize isGroupLeader=_isGroupLeader;
@property(nonatomic) BOOL isRemoteControllable; // @synthesize isRemoteControllable=_isRemoteControllable;
@property(nonatomic) BOOL canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasBluetoothID;
@property(nonatomic) BOOL hasVolumeCapabilities;
@property(nonatomic) BOOL hasIsAddedToHomeKit;
@property(nonatomic) BOOL hasParentGroupContainsDiscoverableLeader;
@property(readonly, nonatomic) BOOL hasParentGroupIdentifier;
@property(nonatomic) BOOL hasIsAirPlayReceiverSessionActive;
@property(nonatomic) BOOL hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(nonatomic) BOOL hasCanFetchMediaDataFromSender;
@property(nonatomic) BOOL hasCanPlayEncryptedProgressiveDownloadAssets;
@property(nonatomic) BOOL hasSupportsBufferedAirPlay;
@property(nonatomic) BOOL hasGroupContainsGroupLeader;
@property(nonatomic) BOOL hasCanAccessiCloudMusicLibrary;
@property(nonatomic) BOOL hasCanAccessAppleMusic;
@property(nonatomic) BOOL hasIsVolumeControlAvailable;
@property(nonatomic) BOOL hasVolume;
@property(readonly, nonatomic) BOOL hasFirmwareVersion;
@property(nonatomic) BOOL hasIsProxyGroupPlayer;
@property(readonly, nonatomic) BOOL hasLogicalDeviceID;
@property(nonatomic) BOOL hasCanRelayCommunicationChannel;
@property(nonatomic) BOOL hasIsDeviceGroupable;
@property(readonly, nonatomic) BOOL hasSourceInfo;
@property(nonatomic) BOOL hasShouldForceRemoteControlabillity;
@property(nonatomic) BOOL hasRequiresAuthorization;
@property(nonatomic) BOOL hasSupportsExternalScreen;
@property(nonatomic) BOOL hasIsLocalDevice;
@property(nonatomic) BOOL hasBatteryLevel;
@property(readonly, nonatomic) BOOL hasModelSpecificInfoData;
- (int)StringAsDeviceSubType:(id)arg1;
- (id)deviceSubTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceSubType;
@property(nonatomic) int deviceSubType; // @synthesize deviceSubType=_deviceSubType;
- (int)StringAsDeviceType:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceType;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) BOOL hasIsGroupable;
@property(nonatomic) BOOL hasIsGroupLeader;
@property(nonatomic) BOOL hasIsRemoteControllable;
@property(nonatomic) BOOL hasCanAccessRemoteAssets;
@property(readonly, nonatomic) BOOL hasMacAddress;
@property(readonly, nonatomic) BOOL hasModelID;
@property(readonly, nonatomic) BOOL hasGroupID;
@property(readonly, nonatomic) BOOL hasUniqueIdentifier;
@property(readonly, nonatomic) BOOL hasName;

@end

