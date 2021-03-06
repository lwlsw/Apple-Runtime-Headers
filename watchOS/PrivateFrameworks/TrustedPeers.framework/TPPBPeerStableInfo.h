//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface TPPBPeerStableInfo : PBCodable <NSCopying>
{
    unsigned long long _clock;
    unsigned long long _policyVersion;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_policyHash;
    NSMutableArray *_policySecrets;
    NSData *_recoveryEncryptionPublicKey;
    NSData *_recoverySigningPublicKey;
    NSString *_serialNumber;
    struct {
        unsigned int clock:1;
        unsigned int policyVersion:1;
    } _has;
}

+ (Class)policySecretsType;
@property(retain, nonatomic) NSMutableArray *policySecrets; // @synthesize policySecrets=_policySecrets;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSData *recoveryEncryptionPublicKey; // @synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey;
@property(retain, nonatomic) NSData *recoverySigningPublicKey; // @synthesize recoverySigningPublicKey=_recoverySigningPublicKey;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *policyHash; // @synthesize policyHash=_policyHash;
@property(nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
@property(nonatomic) unsigned long long clock; // @synthesize clock=_clock;
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
- (id)policySecretsAtIndex:(unsigned int)arg1;
- (unsigned int)policySecretsCount;
- (void)addPolicySecrets:(id)arg1;
- (void)clearPolicySecrets;
@property(readonly, nonatomic) _Bool hasSerialNumber;
@property(readonly, nonatomic) _Bool hasRecoveryEncryptionPublicKey;
@property(readonly, nonatomic) _Bool hasRecoverySigningPublicKey;
@property(readonly, nonatomic) _Bool hasDeviceName;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasPolicyHash;
@property(nonatomic) _Bool hasPolicyVersion;
@property(nonatomic) _Bool hasClock;

@end

