//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class AVBMACAddress;

@interface AVB17221AEMAVBInterface : AVB17221AEMNamedModelObject <NSCopying>
{
    unsigned char priority1;
    unsigned char clockClass;
    unsigned char clockAccuracy;
    unsigned char priority2;
    unsigned char domainNumber;
    BOOL logSyncInterval;
    BOOL logAnnounceInterval;
    BOOL logPDelayInterval;
    unsigned short interfaceFlags;
    unsigned short offsetScaledLogVariance;
    unsigned short portNumber;
    AVBMACAddress *macAddress;
    unsigned long long clockIdentity;
}

+ (id)keyPathsForValuesAffectingSrpSupported;
+ (id)keyPathsForValuesAffectingGPTPSupported;
+ (id)keyPathsForValuesAffectingGPTPGrandmasterCapable;
@property unsigned short portNumber; // @synthesize portNumber;
@property BOOL logPDelayInterval; // @synthesize logPDelayInterval;
@property BOOL logAnnounceInterval; // @synthesize logAnnounceInterval;
@property BOOL logSyncInterval; // @synthesize logSyncInterval;
@property unsigned char domainNumber; // @synthesize domainNumber;
@property unsigned char priority2; // @synthesize priority2;
@property unsigned char clockAccuracy; // @synthesize clockAccuracy;
@property unsigned short offsetScaledLogVariance; // @synthesize offsetScaledLogVariance;
@property unsigned char clockClass; // @synthesize clockClass;
@property unsigned char priority1; // @synthesize priority1;
@property unsigned long long clockIdentity; // @synthesize clockIdentity;
@property unsigned short interfaceFlags; // @synthesize interfaceFlags;
@property(copy) AVBMACAddress *macAddress; // @synthesize macAddress;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)objectLogName;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)srpSupported;
@property(getter=isSRPSupported) BOOL srpSupported; // @dynamic srpSupported;
@property(getter=isGPTPSupported) BOOL gPTPSupported; // @dynamic gPTPSupported;
@property(getter=isGPTPGrandmasterCapable) BOOL gPTPGrandmasterCapable; // @dynamic gPTPGrandmasterCapable;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

