//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIAssetManaging-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TIMobileAssetTimer, TIRequestedInputModes;
@protocol OS_dispatch_queue, TIInputModePreferenceProvider, TIMobileAssetMediator;

@interface TIAssetManager : NSObject <TIAssetManaging>
{
    NSMutableArray *_notificationTokens;
    BOOL _assetDownloadingEnabled;
    CDUnknownBlockType _enabledInputModeIdentifiersProviderBlock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <TIMobileAssetMediator> _mobileAssetMediator;
    NSMutableDictionary *_assetsByInputMode;
    NSMutableDictionary *_assetsByInputModeLevel;
    NSArray *_requestedInputModes_mainThreadCache;
    id <TIInputModePreferenceProvider> _inputModePreferenceProvider;
    TIMobileAssetTimer *_timer;
    NSArray *_currentActiveRegions;
    NSArray *_currentNormalizedActiveRegions;
    TIRequestedInputModes *_requestedInputModes;
}

+ (id)_regionFromAddress:(id)arg1;
+ (id)_addressFromRegion:(id)arg1;
+ (id)singletonInstanceWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
+ (id)sharedAssetManager;
+ (void)setSharedAssetManager:(id)arg1;
@property(readonly, nonatomic) TIRequestedInputModes *requestedInputModes; // @synthesize requestedInputModes=_requestedInputModes;
@property(retain, nonatomic) NSArray *currentNormalizedActiveRegions; // @synthesize currentNormalizedActiveRegions=_currentNormalizedActiveRegions;
@property(retain, nonatomic) NSArray *currentActiveRegions; // @synthesize currentActiveRegions=_currentActiveRegions;
@property(readonly, nonatomic) BOOL assetDownloadingEnabled; // @synthesize assetDownloadingEnabled=_assetDownloadingEnabled;
@property(retain, nonatomic) TIMobileAssetTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) id <TIInputModePreferenceProvider> inputModePreferenceProvider; // @synthesize inputModePreferenceProvider=_inputModePreferenceProvider;
@property(copy, nonatomic) NSArray *requestedInputModes_mainThreadCache; // @synthesize requestedInputModes_mainThreadCache=_requestedInputModes_mainThreadCache;
@property(readonly, nonatomic) NSMutableDictionary *assetsByInputModeLevel; // @synthesize assetsByInputModeLevel=_assetsByInputModeLevel;
@property(readonly, nonatomic) NSMutableDictionary *assetsByInputMode; // @synthesize assetsByInputMode=_assetsByInputMode;
@property(readonly, nonatomic) id <TIMobileAssetMediator> mobileAssetMediator; // @synthesize mobileAssetMediator=_mobileAssetMediator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock; // @synthesize enabledInputModeIdentifiersProviderBlock=_enabledInputModeIdentifiersProviderBlock;
- (void).cxx_destruct;
- (BOOL)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (void)performMaintenance;
- (void)updateInputModesAndLevels;
- (void)addAssets:(id)arg1;
- (void)submitStatistics:(id)arg1;
- (void)gatherStatistics:(id)arg1;
- (void)scheduleNextDownload;
- (void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 regions:(id)arg2;
- (void)updateInstalledAssets;
- (void)updateAssetDownloadingEnabled;
- (id)updatedActiveRegions;
- (id)activeInputModeLevels;
- (id)activeInputModes;
- (id)defaultEnabledInputModes;
- (id)enabledInputModes;
- (id)levelsForInputMode:(id)arg1;
- (void)didUpdateAssets;
- (void)newAssetInstalled:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)requestAssetDownloadForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
@property(readonly, nonatomic) double requestExpirationInterval;
- (id)recursiveDescription;
- (void)dealloc;
- (id)initWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initForTestingWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

