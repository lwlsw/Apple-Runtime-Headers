//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTSectionInfoListOverrideProvider-Protocol.h>
#import <BulletinDistributorCompanion/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class BLTSectionConfiguration, NPSDomainAccessor, NSDate, NSString;
@protocol BLTSectionInfoListProviderDelegate;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListOverrideProvider>
{
    struct _opaque_pthread_mutex_t _lock;
    NSDate *_lastKnownBridgeSettingsChangeDate;
    NPSDomainAccessor *_npsDomainAccessor;
    id <BLTSectionInfoListProviderDelegate> _delegate;
    BLTSectionConfiguration *_sectionConfiguration;
}

@property(retain, nonatomic) BLTSectionConfiguration *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)enableCustomSettingsForWatchSectionID:(id)arg1;
- (id)_companionSetupNotificationSettingsDictionaryForSectionInfo:(id)arg1 sectionID:(id)arg2;
- (void)setCustomSettingsWithSectionInfo:(id)arg1 watchSectionID:(id)arg2;
- (void)setCustomSettingsWithSectionInfo:(id)arg1;
- (void)setNotificationsLevel:(int)arg1 sectionID:(id)arg2 forceCustom:(_Bool)arg3;
- (id)_loadOverridesChangedSince:(id)arg1;
- (void)_reloadUpdatedOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadUpdatedOverrides;
- (void)dealloc;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSectionConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

