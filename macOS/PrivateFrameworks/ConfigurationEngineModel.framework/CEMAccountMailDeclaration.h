//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMAccountMailDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadEmailAccountDescription;
    NSString *_payloadEmailAccountName;
    NSString *_payloadEmailAccountType;
    NSString *_payloadEmailAddress;
    NSString *_payloadIncomingMailServerAuthentication;
    NSString *_payloadIncomingMailServerHostName;
    NSNumber *_payloadIncomingMailServerPortNumber;
    NSNumber *_payloadIncomingMailServerUseSSL;
    NSNumber *_payloadOutgoingPasswordSameAsIncomingPassword;
    NSString *_payloadOutgoingMailServerAuthentication;
    NSNumber *_payloadOutgoingMailServerPortNumber;
    NSNumber *_payloadOutgoingMailServerUseSSL;
    NSString *_payloadOutgoingMailServerUsername;
    NSNumber *_payloadPreventMove;
    NSNumber *_payloadPreventAppSheet;
    NSNumber *_payloadSMIMEEnabled;
    NSNumber *_payloadSMIMESigningEnabled;
    NSString *_payloadSMIMESigningCertificateUUID;
    NSNumber *_payloadSMIMEEncryptionEnabled;
    NSString *_payloadSMIMEEncryptionCertificateUUID;
    NSNumber *_payloadSMIMEEnablePerMessageSwitch;
    NSNumber *_payloadDisableMailRecentsSyncing;
    NSNumber *_payloadAllowMailDrop;
    NSString *_payloadIncomingMailServerIMAPPathPrefix;
    NSString *_payloadIncomingCredentials;
    NSString *_payloadOutgoingCredentials;
    NSNumber *_payloadSMIMESigningOverrideable;
    NSNumber *_payloadSMIMESigningCertificateUUIDOverrideable;
    NSNumber *_payloadSMIMEEncryptByDefault;
    NSNumber *_payloadSMIMEEncryptByDefaultOverrideable;
    NSNumber *_payloadSMIMEEncryptionCertificateUUIDOverrideable;
    NSNumber *_payloadSMIMEEnableEncryptionPerMessageSwitch;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAccountType:(id)arg2 withIncomingMailServerAuthentication:(id)arg3 withIncomingMailServerHostName:(id)arg4 withOutgoingMailServerAuthentication:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withEmailAccountDescription:(id)arg2 withEmailAccountName:(id)arg3 withEmailAccountType:(id)arg4 withEmailAddress:(id)arg5 withIncomingMailServerAuthentication:(id)arg6 withIncomingMailServerHostName:(id)arg7 withIncomingMailServerPortNumber:(id)arg8 withIncomingMailServerUseSSL:(id)arg9 withOutgoingPasswordSameAsIncomingPassword:(id)arg10 withOutgoingMailServerAuthentication:(id)arg11 withOutgoingMailServerPortNumber:(id)arg12 withOutgoingMailServerUseSSL:(id)arg13 withOutgoingMailServerUsername:(id)arg14 withPreventMove:(id)arg15 withPreventAppSheet:(id)arg16 withSMIMEEnabled:(id)arg17 withSMIMESigningEnabled:(id)arg18 withSMIMESigningCertificateUUID:(id)arg19 withSMIMEEncryptionEnabled:(id)arg20 withSMIMEEncryptionCertificateUUID:(id)arg21 withSMIMEEnablePerMessageSwitch:(id)arg22 withDisableMailRecentsSyncing:(id)arg23 withAllowMailDrop:(id)arg24 withIncomingMailServerIMAPPathPrefix:(id)arg25 withIncomingCredentials:(id)arg26 withOutgoingCredentials:(id)arg27 withSMIMESigningOverrideable:(id)arg28 withSMIMESigningCertificateUUIDOverrideable:(id)arg29 withSMIMEEncryptByDefault:(id)arg30 withSMIMEEncryptByDefaultOverrideable:(id)arg31 withSMIMEEncryptionCertificateUUIDOverrideable:(id)arg32 withSMIMEEnableEncryptionPerMessageSwitch:(id)arg33;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadSMIMEEnableEncryptionPerMessageSwitch; // @synthesize payloadSMIMEEnableEncryptionPerMessageSwitch=_payloadSMIMEEnableEncryptionPerMessageSwitch;
@property(copy, nonatomic) NSNumber *payloadSMIMEEncryptionCertificateUUIDOverrideable; // @synthesize payloadSMIMEEncryptionCertificateUUIDOverrideable=_payloadSMIMEEncryptionCertificateUUIDOverrideable;
@property(copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefaultOverrideable; // @synthesize payloadSMIMEEncryptByDefaultOverrideable=_payloadSMIMEEncryptByDefaultOverrideable;
@property(copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefault; // @synthesize payloadSMIMEEncryptByDefault=_payloadSMIMEEncryptByDefault;
@property(copy, nonatomic) NSNumber *payloadSMIMESigningCertificateUUIDOverrideable; // @synthesize payloadSMIMESigningCertificateUUIDOverrideable=_payloadSMIMESigningCertificateUUIDOverrideable;
@property(copy, nonatomic) NSNumber *payloadSMIMESigningOverrideable; // @synthesize payloadSMIMESigningOverrideable=_payloadSMIMESigningOverrideable;
@property(copy, nonatomic) NSString *payloadOutgoingCredentials; // @synthesize payloadOutgoingCredentials=_payloadOutgoingCredentials;
@property(copy, nonatomic) NSString *payloadIncomingCredentials; // @synthesize payloadIncomingCredentials=_payloadIncomingCredentials;
@property(copy, nonatomic) NSString *payloadIncomingMailServerIMAPPathPrefix; // @synthesize payloadIncomingMailServerIMAPPathPrefix=_payloadIncomingMailServerIMAPPathPrefix;
@property(copy, nonatomic) NSNumber *payloadAllowMailDrop; // @synthesize payloadAllowMailDrop=_payloadAllowMailDrop;
@property(copy, nonatomic) NSNumber *payloadDisableMailRecentsSyncing; // @synthesize payloadDisableMailRecentsSyncing=_payloadDisableMailRecentsSyncing;
@property(copy, nonatomic) NSNumber *payloadSMIMEEnablePerMessageSwitch; // @synthesize payloadSMIMEEnablePerMessageSwitch=_payloadSMIMEEnablePerMessageSwitch;
@property(copy, nonatomic) NSString *payloadSMIMEEncryptionCertificateUUID; // @synthesize payloadSMIMEEncryptionCertificateUUID=_payloadSMIMEEncryptionCertificateUUID;
@property(copy, nonatomic) NSNumber *payloadSMIMEEncryptionEnabled; // @synthesize payloadSMIMEEncryptionEnabled=_payloadSMIMEEncryptionEnabled;
@property(copy, nonatomic) NSString *payloadSMIMESigningCertificateUUID; // @synthesize payloadSMIMESigningCertificateUUID=_payloadSMIMESigningCertificateUUID;
@property(copy, nonatomic) NSNumber *payloadSMIMESigningEnabled; // @synthesize payloadSMIMESigningEnabled=_payloadSMIMESigningEnabled;
@property(copy, nonatomic) NSNumber *payloadSMIMEEnabled; // @synthesize payloadSMIMEEnabled=_payloadSMIMEEnabled;
@property(copy, nonatomic) NSNumber *payloadPreventAppSheet; // @synthesize payloadPreventAppSheet=_payloadPreventAppSheet;
@property(copy, nonatomic) NSNumber *payloadPreventMove; // @synthesize payloadPreventMove=_payloadPreventMove;
@property(copy, nonatomic) NSString *payloadOutgoingMailServerUsername; // @synthesize payloadOutgoingMailServerUsername=_payloadOutgoingMailServerUsername;
@property(copy, nonatomic) NSNumber *payloadOutgoingMailServerUseSSL; // @synthesize payloadOutgoingMailServerUseSSL=_payloadOutgoingMailServerUseSSL;
@property(copy, nonatomic) NSNumber *payloadOutgoingMailServerPortNumber; // @synthesize payloadOutgoingMailServerPortNumber=_payloadOutgoingMailServerPortNumber;
@property(copy, nonatomic) NSString *payloadOutgoingMailServerAuthentication; // @synthesize payloadOutgoingMailServerAuthentication=_payloadOutgoingMailServerAuthentication;
@property(copy, nonatomic) NSNumber *payloadOutgoingPasswordSameAsIncomingPassword; // @synthesize payloadOutgoingPasswordSameAsIncomingPassword=_payloadOutgoingPasswordSameAsIncomingPassword;
@property(copy, nonatomic) NSNumber *payloadIncomingMailServerUseSSL; // @synthesize payloadIncomingMailServerUseSSL=_payloadIncomingMailServerUseSSL;
@property(copy, nonatomic) NSNumber *payloadIncomingMailServerPortNumber; // @synthesize payloadIncomingMailServerPortNumber=_payloadIncomingMailServerPortNumber;
@property(copy, nonatomic) NSString *payloadIncomingMailServerHostName; // @synthesize payloadIncomingMailServerHostName=_payloadIncomingMailServerHostName;
@property(copy, nonatomic) NSString *payloadIncomingMailServerAuthentication; // @synthesize payloadIncomingMailServerAuthentication=_payloadIncomingMailServerAuthentication;
@property(copy, nonatomic) NSString *payloadEmailAddress; // @synthesize payloadEmailAddress=_payloadEmailAddress;
@property(copy, nonatomic) NSString *payloadEmailAccountType; // @synthesize payloadEmailAccountType=_payloadEmailAccountType;
@property(copy, nonatomic) NSString *payloadEmailAccountName; // @synthesize payloadEmailAccountName=_payloadEmailAccountName;
@property(copy, nonatomic) NSString *payloadEmailAccountDescription; // @synthesize payloadEmailAccountDescription=_payloadEmailAccountDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

