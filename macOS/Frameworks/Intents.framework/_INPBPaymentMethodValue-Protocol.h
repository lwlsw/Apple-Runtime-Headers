//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBPaymentMethodValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasIdentificationHint;
@property(copy, nonatomic) NSString *identificationHint;
@property(readonly, nonatomic) BOOL hasIcon;
@property(retain, nonatomic) _INPBImageValue *icon;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

