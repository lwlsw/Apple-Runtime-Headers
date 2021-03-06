//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPDeviceProtocol-Protocol.h>
#import <CoreCDP/NSCopying-Protocol.h>
#import <CoreCDP/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface CDPDevice : NSObject <NSCopying, NSSecureCoding, CDPDeviceProtocol>
{
    NSString *_localizedName;
    NSString *_model;
    NSString *_modelVersion;
    NSString *_modelClass;
    unsigned long long _platform;
    NSString *_recordID;
    NSString *_machineID;
    NSData *_simplePublicKey;
    NSDate *_recordDate;
    NSDictionary *_recordInfo;
    _Bool _hasRandomSecret;
    _Bool _hasNumericSecret;
    NSNumber *_numericSecretLength;
    _Bool _isUsingMultipleiCSC;
    unsigned long long _remainingAttempts;
    NSString *_deviceColor;
    NSString *_enclosureColor;
    NSString *_serialNumber;
    _Bool _isCurrentDevice;
    NSString *_localizedDescription;
    unsigned long long _recoveryStatus;
    NSNumber *_coolOffPeriod;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *simplePublicKey; // @synthesize simplePublicKey=_simplePublicKey;
@property(copy, nonatomic) NSDictionary *recordInfo; // @synthesize recordInfo=_recordInfo;
@property(retain, nonatomic) NSNumber *coolOffPeriod; // @synthesize coolOffPeriod=_coolOffPeriod;
@property(nonatomic) unsigned long long recoveryStatus; // @synthesize recoveryStatus=_recoveryStatus;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(copy, nonatomic) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property(nonatomic) _Bool isCurrentDevice; // @synthesize isCurrentDevice=_isCurrentDevice;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long remainingAttempts; // @synthesize remainingAttempts=_remainingAttempts;
@property(nonatomic) _Bool isUsingMultipleiCSC; // @synthesize isUsingMultipleiCSC=_isUsingMultipleiCSC;
@property(copy, nonatomic) NSNumber *numericSecretLength; // @synthesize numericSecretLength=_numericSecretLength;
@property(nonatomic) _Bool hasNumericSecret; // @synthesize hasNumericSecret=_hasNumericSecret;
@property(nonatomic) _Bool hasRandomSecret; // @synthesize hasRandomSecret=_hasRandomSecret;
@property(copy, nonatomic) NSDate *recordDate; // @synthesize recordDate=_recordDate;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *modelClass; // @synthesize modelClass=_modelClass;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long localSecretType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

