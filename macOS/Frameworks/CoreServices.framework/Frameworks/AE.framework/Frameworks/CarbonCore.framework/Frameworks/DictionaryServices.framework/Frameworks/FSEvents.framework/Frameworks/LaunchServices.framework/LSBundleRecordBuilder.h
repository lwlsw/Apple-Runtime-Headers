//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LaunchServices/LSRecordBuilder.h>

@class LSRegistrationInfo, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSBundleRecordBuilder : LSRecordBuilder
{
    unsigned int _bundleClass;
    LSRegistrationInfo *_registrationInfo;
    unsigned char _retries;
    unsigned long long _sequenceNumber;
    BOOL _registerChildItemsTrusted;
    NSData *_bundleAlias;
    unsigned long long _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned char _iconFlags;
    unsigned int _itemFlags;
    unsigned short _archFlags;
    unsigned int _platform;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    unsigned long long _inode;
    BOOL _canDoHiResMode;
    BOOL _canDoMagnifiedMode;
    BOOL _hiResExplicit;
    BOOL _canUse_eGPU;
    BOOL _eGPUExplicit;
    BOOL _canChange_eGPU;
    NSMutableDictionary *_plistRarities;
    NSMutableDictionary *_commonInfoPlistEntries;
    BOOL _containerized;
    NSString *_version;
    NSString *_minSystemVersion;
    NSString *_maxSystemVersion;
    NSString *_sdkVersion;
    NSString *_minExecOSVersion;
    NSString *_shortVersionString;
    NSString *_execPath;
    NSArray *_machOUUIDs;
    NSNumber *_itemID;
    NSString *_teamID;
    NSArray *_activityTypes;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_shortDisplayName;
    NSString *_bundleName;
    NSArray *_alternateNames;
    NSURL *_dataContainerURL;
    NSURL *_bundleContainerURL;
    NSString *_categoryType;
    NSString *_secondCategoryType;
    NSMutableSet *_counterpartAppIDs;
    NSString *_watchKitVersion;
    NSString *_complicationPrincipalClass;
    NSArray *_supportedComplicationFamilies;
    NSString *_ratingLabel;
    NSNumber *_ratingRank;
    NSString *_genre;
    NSNumber *_genreID;
    NSString *_primaryIconName;
    NSDictionary *_iconsDict;
    NSArray *_iconFileNames;
    NSString *_libraryPath;
    NSArray *_libraryItems;
    NSArray *_documentClaims;
    NSArray *_URLClaims;
    NSArray *_importedTypes;
    NSArray *_exportedTypes;
    NSArray *_services;
    NSDictionary *_pluginPlists;
    NSDictionary *_pluginMIDicts;
    NSDictionary *_groupContainers;
    NSDictionary *_entitlements;
    NSDictionary *_sandboxEnvironmentVariables;
    NSDictionary *_extensionSDK;
    NSArray *_bgPermittedIdentifiers;
    NSDictionary *_localizedNames;
    NSDictionary *_localizedShortNames;
    NSDictionary *_localizedStrings;
    NSDictionary *_unlocalizedNamesWithContext;
    NSArray *_managedPersonas;
    NSNumber *_directoryClass;
}

@property(readonly, nonatomic) NSNumber *directoryClass; // @synthesize directoryClass=_directoryClass;
@property(readonly, nonatomic) NSArray *managedPersonas; // @synthesize managedPersonas=_managedPersonas;
@property(readonly, nonatomic) NSDictionary *unlocalizedNamesWithContext; // @synthesize unlocalizedNamesWithContext=_unlocalizedNamesWithContext;
@property(readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(readonly, nonatomic) NSDictionary *localizedShortNames; // @synthesize localizedShortNames=_localizedShortNames;
@property(readonly, nonatomic) NSDictionary *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) NSArray *bgPermittedIdentifiers; // @synthesize bgPermittedIdentifiers=_bgPermittedIdentifiers;
@property(readonly, nonatomic) NSDictionary *extensionSDK; // @synthesize extensionSDK=_extensionSDK;
@property(readonly, nonatomic) NSDictionary *sandboxEnvironmentVariables; // @synthesize sandboxEnvironmentVariables=_sandboxEnvironmentVariables;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSDictionary *groupContainers; // @synthesize groupContainers=_groupContainers;
@property(readonly, nonatomic) NSDictionary *pluginMIDicts; // @synthesize pluginMIDicts=_pluginMIDicts;
@property(readonly, nonatomic) NSDictionary *pluginPlists; // @synthesize pluginPlists=_pluginPlists;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, nonatomic) NSArray *exportedTypes; // @synthesize exportedTypes=_exportedTypes;
@property(readonly, nonatomic) NSArray *importedTypes; // @synthesize importedTypes=_importedTypes;
@property(readonly, nonatomic) NSArray *URLClaims; // @synthesize URLClaims=_URLClaims;
@property(readonly, nonatomic) NSArray *documentClaims; // @synthesize documentClaims=_documentClaims;
@property(readonly, nonatomic) NSArray *libraryItems; // @synthesize libraryItems=_libraryItems;
@property(readonly, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
@property(readonly, nonatomic) NSArray *iconFileNames; // @synthesize iconFileNames=_iconFileNames;
@property(readonly, nonatomic) NSDictionary *iconsDict; // @synthesize iconsDict=_iconsDict;
@property(readonly, nonatomic) NSString *primaryIconName; // @synthesize primaryIconName=_primaryIconName;
@property(readonly, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly, nonatomic) NSArray *supportedComplicationFamilies; // @synthesize supportedComplicationFamilies=_supportedComplicationFamilies;
@property(readonly, nonatomic) NSString *complicationPrincipalClass; // @synthesize complicationPrincipalClass=_complicationPrincipalClass;
@property(readonly, nonatomic) NSString *watchKitVersion; // @synthesize watchKitVersion=_watchKitVersion;
@property(readonly, nonatomic) NSMutableSet *counterpartAppIDs; // @synthesize counterpartAppIDs=_counterpartAppIDs;
@property(readonly, nonatomic) NSString *secondCategoryType; // @synthesize secondCategoryType=_secondCategoryType;
@property(readonly, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, nonatomic) NSURL *bundleContainerURL; // @synthesize bundleContainerURL=_bundleContainerURL;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, nonatomic) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(readonly, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *activityTypes; // @synthesize activityTypes=_activityTypes;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSArray *machOUUIDs; // @synthesize machOUUIDs=_machOUUIDs;
@property(readonly, nonatomic) NSString *execPath; // @synthesize execPath=_execPath;
@property(readonly, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, nonatomic) NSString *minExecOSVersion; // @synthesize minExecOSVersion=_minExecOSVersion;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *maxSystemVersion; // @synthesize maxSystemVersion=_maxSystemVersion;
@property(readonly, nonatomic) NSString *minSystemVersion; // @synthesize minSystemVersion=_minSystemVersion;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) BOOL containerized; // @synthesize containerized=_containerized;
@property(readonly, nonatomic) BOOL registerChildItemsTrusted; // @synthesize registerChildItemsTrusted=_registerChildItemsTrusted;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned char retries; // @synthesize retries=_retries;
- (void).cxx_destruct;
- (unsigned int)registerBundleRecord:(id)arg1 error:(id *)arg2;
- (int)activateBindings:(id)arg1 unitID:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
- (struct LSBundleData)buildBundleData:(id)arg1 error:(id *)arg2;
- (void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg1;
- (void)parseActivityTypesFromDictionary:(id)arg1;
- (BOOL)parseInstallationInfo:(id)arg1;
- (BOOL)parseInfoPlist:(id)arg1;
- (void)parseURLClaimsFromDict:(id)arg1;
- (void)parseIconFilenamesFromDict:(id)arg1;
- (id)iconsDictionaryFromDict:(id)arg1;
- (void)parseCapabilityFlagsFromDict:(id)arg1;
- (void)parseArchitecturesFromDict:(id)arg1;
- (void)setCommonInfoPlistKeysFromDictionary:(id)arg1;
- (void)setRaritiesFromDictionary:(id)arg1;
- (void)setFlagsFromDictionary:(id)arg1;
- (id)_LSKeyTypeMap;
- (id)_LSPlistRaritiesMap;
- (id)_LSBundleFlagMap;
- (void)addArchitectureFlag:(unsigned short)arg1;
- (void)addItemInfoFlag:(unsigned int)arg1;
- (void)addIconFlag:(unsigned char)arg1;
- (void)addPlistFlag:(unsigned int)arg1;
- (void)addBundleFlag:(unsigned long long)arg1;
- (void)setRegistrationInfo:(id)arg1 alias:(id)arg2;

@end

