//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentVocabulary-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentVocabulary : PBCodable <_INPBIntentVocabulary, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_intentSlotVocabularyPolicies;
    NSArray *_intentTypePhrases;
}

+ (BOOL)supportsSecureCoding;
+ (Class)intentTypePhrasesType;
+ (Class)intentSlotVocabularyPoliciesType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *intentTypePhrases; // @synthesize intentTypePhrases=_intentTypePhrases;
@property(copy, nonatomic) NSArray *intentSlotVocabularyPolicies; // @synthesize intentSlotVocabularyPolicies=_intentSlotVocabularyPolicies;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentTypePhrasesCount;
- (void)addIntentTypePhrases:(id)arg1;
- (void)clearIntentTypePhrases;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyPoliciesCount;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (void)clearIntentSlotVocabularyPolicies;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

