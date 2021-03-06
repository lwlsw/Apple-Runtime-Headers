//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSData, NSMutableArray, NSString;

@interface CKDPShare : PBCodable <NSCopying>
{
    NSString *_displayedHostname;
    NSString *_etag;
    NSMutableArray *_invitedKeyToRemoves;
    CKDPProtectionInfo *_invitedPcs;
    NSString *_origin;
    NSMutableArray *_participants;
    NSMutableArray *_potentialMatchs;
    int _publicAccess;
    int _publisherModelType;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
    NSData *_shortTokenHash;
    NSString *_shortTokenRoutingKey;
    BOOL _anonymousPublicAccess;
    BOOL _publisherModel;
    struct {
        unsigned int publicAccess:1;
        unsigned int publisherModelType:1;
        unsigned int anonymousPublicAccess:1;
        unsigned int publisherModel:1;
    } _has;
}

+ (Class)invitedKeyToRemoveType;
+ (Class)potentialMatchType;
+ (Class)participantType;
@property(retain, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property(retain, nonatomic) NSMutableArray *invitedKeyToRemoves; // @synthesize invitedKeyToRemoves=_invitedKeyToRemoves;
@property(retain, nonatomic) NSMutableArray *potentialMatchs; // @synthesize potentialMatchs=_potentialMatchs;
@property(retain, nonatomic) NSString *shortTokenRoutingKey; // @synthesize shortTokenRoutingKey=_shortTokenRoutingKey;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) CKDPProtectionInfo *selfAddedPcs; // @synthesize selfAddedPcs=_selfAddedPcs;
@property(retain, nonatomic) CKDPProtectionInfo *invitedPcs; // @synthesize invitedPcs=_invitedPcs;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
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
@property(readonly, nonatomic) BOOL hasOrigin;
@property(readonly, nonatomic) BOOL hasShortTokenHash;
- (int)StringAsPublisherModelType:(id)arg1;
- (id)publisherModelTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPublisherModelType;
@property(nonatomic) int publisherModelType; // @synthesize publisherModelType=_publisherModelType;
@property(readonly, nonatomic) BOOL hasDisplayedHostname;
@property(nonatomic) BOOL hasAnonymousPublicAccess;
@property(nonatomic) BOOL anonymousPublicAccess; // @synthesize anonymousPublicAccess=_anonymousPublicAccess;
@property(nonatomic) BOOL hasPublisherModel;
@property(nonatomic) BOOL publisherModel; // @synthesize publisherModel=_publisherModel;
- (id)invitedKeyToRemoveAtIndex:(unsigned long long)arg1;
- (unsigned long long)invitedKeyToRemovesCount;
- (void)addInvitedKeyToRemove:(id)arg1;
- (void)clearInvitedKeyToRemoves;
- (id)potentialMatchAtIndex:(unsigned long long)arg1;
- (unsigned long long)potentialMatchsCount;
- (void)addPotentialMatch:(id)arg1;
- (void)clearPotentialMatchs;
@property(readonly, nonatomic) BOOL hasShortTokenRoutingKey;
- (id)participantAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
@property(readonly, nonatomic) BOOL hasSelfAddedPcs;
@property(readonly, nonatomic) BOOL hasInvitedPcs;
- (int)StringAsPublicAccess:(id)arg1;
- (id)publicAccessAsString:(int)arg1;
@property(nonatomic) BOOL hasPublicAccess;
@property(nonatomic) int publicAccess; // @synthesize publicAccess=_publicAccess;
@property(readonly, nonatomic) BOOL hasEtag;
@property(readonly, nonatomic) BOOL hasShareId;
- (id)_publicAccessCKLogValue;

@end

