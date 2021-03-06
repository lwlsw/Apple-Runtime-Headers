//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCProfile : NSObject
{
    int _trustQueueTrustLevel;
    BOOL _trustQueueTrustHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;
    NSString *_signerQueueSignerSummary;
    NSArray *_signerQueueSignerCertificates;
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;
    BOOL _encrypted;
    BOOL _isLocked;
    BOOL _needsReboot;
    BOOL _isStub;
    BOOL _mustInstallNonInteractively;
    BOOL _isSigned;
    BOOL _isInstalledForSystem;
    BOOL _isInstalledForUser;
    BOOL _shouldHaveFullSSLTrust;
    BOOL _isManagedByProfileService;
    BOOL _isManagedByMDM;
    int _trustLevel;
    NSString *_profileDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    long long _version;
    NSDate *_installDate;
    NSDate *_expiryDate;
    NSString *_removalPasscode;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSDate *_removalDate;
    NSString *_friendlyName;
    NSDictionary *_installOptions;
    NSString *_signerSummary;
    struct __SecCertificate *_signerCertificate;
    NSArray *_signerCertificates;
    long long _installType;
    NSArray *_payloads;
    NSArray *_managedPayloads;
    NSArray *_localizedPayloadSummaryByType;
    NSArray *_localizedManagedPayloadSummaryByType;
    NSDate *_earliestCertificateExpiryDate;
    unsigned long long _targetDeviceType;
    NSArray *_installationWarnings;
    NSString *_localizedConsentText;
}

@property(readonly, nonatomic) BOOL isManagedByMDM; // @synthesize isManagedByMDM=_isManagedByMDM;
@property(readonly, nonatomic) NSString *localizedConsentText; // @synthesize localizedConsentText=_localizedConsentText;
@property(readonly, retain, nonatomic) NSArray *installationWarnings; // @synthesize installationWarnings=_installationWarnings;
@property(readonly, nonatomic) BOOL isManagedByProfileService; // @synthesize isManagedByProfileService=_isManagedByProfileService;
@property(readonly, nonatomic) unsigned long long targetDeviceType; // @synthesize targetDeviceType=_targetDeviceType;
@property(readonly, retain, nonatomic) NSDate *earliestCertificateExpiryDate; // @synthesize earliestCertificateExpiryDate=_earliestCertificateExpiryDate;
@property(readonly, retain, nonatomic) NSArray *localizedManagedPayloadSummaryByType; // @synthesize localizedManagedPayloadSummaryByType=_localizedManagedPayloadSummaryByType;
@property(readonly, retain, nonatomic) NSArray *localizedPayloadSummaryByType; // @synthesize localizedPayloadSummaryByType=_localizedPayloadSummaryByType;
@property(readonly, retain, nonatomic) NSArray *managedPayloads; // @synthesize managedPayloads=_managedPayloads;
@property(readonly, retain, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, nonatomic) BOOL shouldHaveFullSSLTrust; // @synthesize shouldHaveFullSSLTrust=_shouldHaveFullSSLTrust;
@property(readonly, nonatomic) BOOL isInstalledForUser; // @synthesize isInstalledForUser=_isInstalledForUser;
@property(readonly, nonatomic) BOOL isInstalledForSystem; // @synthesize isInstalledForSystem=_isInstalledForSystem;
@property(readonly, nonatomic) long long installType; // @synthesize installType=_installType;
@property(retain, nonatomic) NSArray *signerCertificates; // @synthesize signerCertificates=_signerCertificates;
@property(readonly, nonatomic) struct __SecCertificate *signerCertificate; // @synthesize signerCertificate=_signerCertificate;
@property(readonly, nonatomic) NSString *signerSummary; // @synthesize signerSummary=_signerSummary;
@property(readonly, nonatomic) int trustLevel; // @synthesize trustLevel=_trustLevel;
@property(readonly, nonatomic) BOOL isSigned; // @synthesize isSigned=_isSigned;
@property(nonatomic) BOOL mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property(retain, nonatomic) NSDictionary *installOptions; // @synthesize installOptions=_installOptions;
@property(readonly, retain, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(readonly, nonatomic) NSDate *removalDate; // @synthesize removalDate=_removalDate;
@property(readonly, retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(readonly, retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly, nonatomic) BOOL isStub; // @synthesize isStub=_isStub;
@property(readonly, nonatomic) BOOL needsReboot; // @synthesize needsReboot=_needsReboot;
@property(retain, nonatomic) NSString *removalPasscode; // @synthesize removalPasscode=_removalPasscode;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_isLocked;
@property(readonly, retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
- (void).cxx_destruct;

@end

