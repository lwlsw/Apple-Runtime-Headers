//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSData, NSString;

@interface SGDCKInteractionInfo : PBCodable <NSCopying>
{
    NSString *_intentResponseUserActivityString;
    NSString *_interactionBundleId;
    NSString *_interactionGroupId;
    NSString *_interactionId;
    NSString *_interactionTeamId;
    NSData *_reservationContainerReference;
    NSData *_reservationItemReferences;
}

@property(retain, nonatomic) NSString *interactionTeamId; // @synthesize interactionTeamId=_interactionTeamId;
@property(retain, nonatomic) NSString *intentResponseUserActivityString; // @synthesize intentResponseUserActivityString=_intentResponseUserActivityString;
@property(retain, nonatomic) NSData *reservationContainerReference; // @synthesize reservationContainerReference=_reservationContainerReference;
@property(retain, nonatomic) NSData *reservationItemReferences; // @synthesize reservationItemReferences=_reservationItemReferences;
@property(retain, nonatomic) NSString *interactionBundleId; // @synthesize interactionBundleId=_interactionBundleId;
@property(retain, nonatomic) NSString *interactionGroupId; // @synthesize interactionGroupId=_interactionGroupId;
@property(retain, nonatomic) NSString *interactionId; // @synthesize interactionId=_interactionId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasInteractionTeamId;
@property(readonly, nonatomic) _Bool hasIntentResponseUserActivityString;
@property(readonly, nonatomic) _Bool hasReservationContainerReference;
@property(readonly, nonatomic) _Bool hasReservationItemReferences;
@property(readonly, nonatomic) _Bool hasInteractionBundleId;
@property(readonly, nonatomic) _Bool hasInteractionGroupId;
@property(readonly, nonatomic) _Bool hasInteractionId;

@end

