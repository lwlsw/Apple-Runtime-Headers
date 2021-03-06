//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPaymentRecord-Protocol.h>

@class NSString, _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@interface _INPBPaymentRecord : PBCodable <_INPBPaymentRecord, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int status:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBCurrencyAmount *_feeAmount;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBContact *_payer;
    _INPBPaymentMethodValue *_paymentMethod;
    int _status;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBPaymentMethodValue *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) _INPBContact *payer; // @synthesize payer=_payer;
@property(retain, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasPaymentMethod;
@property(readonly, nonatomic) _Bool hasPayer;
@property(readonly, nonatomic) _Bool hasPayee;
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasFeeAmount;
@property(readonly, nonatomic) _Bool hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

