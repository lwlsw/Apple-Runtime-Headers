//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRideVehicle-Protocol.h>

@class GEOLocation, NSString, _INPBImageValue;

@interface _INPBRideVehicle : PBCodable <_INPBRideVehicle, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    GEOLocation *_location;
    NSString *_manufacturer;
    _INPBImageValue *_mapAnnotationImage;
    NSString *_model;
    NSString *_registrationPlate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *registrationPlate; // @synthesize registrationPlate=_registrationPlate;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) _INPBImageValue *mapAnnotationImage; // @synthesize mapAnnotationImage=_mapAnnotationImage;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasRegistrationPlate;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasMapAnnotationImage;
@property(readonly, nonatomic) _Bool hasManufacturer;
@property(readonly, nonatomic) _Bool hasLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

