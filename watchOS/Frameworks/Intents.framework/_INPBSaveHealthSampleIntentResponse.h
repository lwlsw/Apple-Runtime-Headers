//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSaveHealthSampleIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBString;

@interface _INPBSaveHealthSampleIntentResponse : PBCodable <_INPBSaveHealthSampleIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBString *_defaultUnit;
    _INPBString *_punchoutUrl;
    _INPBDateTimeRange *_recordDate;
    NSArray *_sampleUuids;
    _INPBString *_userProvidedUnit;
    NSArray *_valuesDefaultUnits;
    NSArray *_valuesUserProvidedUnits;
}

+ (_Bool)supportsSecureCoding;
+ (Class)valuesUserProvidedUnitType;
+ (Class)valuesDefaultUnitType;
+ (Class)sampleUuidsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *valuesUserProvidedUnits; // @synthesize valuesUserProvidedUnits=_valuesUserProvidedUnits;
@property(copy, nonatomic) NSArray *valuesDefaultUnits; // @synthesize valuesDefaultUnits=_valuesDefaultUnits;
@property(retain, nonatomic) _INPBString *userProvidedUnit; // @synthesize userProvidedUnit=_userProvidedUnit;
@property(copy, nonatomic) NSArray *sampleUuids; // @synthesize sampleUuids=_sampleUuids;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate; // @synthesize recordDate=_recordDate;
@property(retain, nonatomic) _INPBString *punchoutUrl; // @synthesize punchoutUrl=_punchoutUrl;
@property(retain, nonatomic) _INPBString *defaultUnit; // @synthesize defaultUnit=_defaultUnit;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)valuesUserProvidedUnitAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int valuesUserProvidedUnitsCount;
- (void)addValuesUserProvidedUnit:(id)arg1;
- (void)clearValuesUserProvidedUnits;
- (id)valuesDefaultUnitAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int valuesDefaultUnitsCount;
- (void)addValuesDefaultUnit:(id)arg1;
- (void)clearValuesDefaultUnits;
@property(readonly, nonatomic) _Bool hasUserProvidedUnit;
- (id)sampleUuidsAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int sampleUuidsCount;
- (void)addSampleUuids:(id)arg1;
- (void)clearSampleUuids;
@property(readonly, nonatomic) _Bool hasRecordDate;
@property(readonly, nonatomic) _Bool hasPunchoutUrl;
@property(readonly, nonatomic) _Bool hasDefaultUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

