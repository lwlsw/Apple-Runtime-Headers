//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBIconView.h>

#import <SearchUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <SearchUI/SBIconViewDelegate-Protocol.h>
#import <SearchUI/SBLeafIconDataSource-Protocol.h>

@class LSApplicationProxy, NSString, NSURL, SFSearchResult;
@protocol SearchUIHomeScreenEngagementDelegate;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBLeafIconDataSource, SBIconViewDelegate, LSApplicationWorkspaceObserverProtocol>
{
    id <SearchUIHomeScreenEngagementDelegate> _engagementDelegate;
    unsigned long long _variant;
    LSApplicationProxy *_applicationProxy;
    SFSearchResult *_searchResult;
    NSURL *_applicationBundleURL;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

+ (id)applicationShortcutService;
+ (struct CGPath *)shadowPathForIconFrame:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)cacheForVariant:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(copy, nonatomic) NSURL *applicationBundleURL; // @synthesize applicationBundleURL=_applicationBundleURL;
@property(retain) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(nonatomic) __weak id <SearchUIHomeScreenEngagementDelegate> engagementDelegate; // @synthesize engagementDelegate=_engagementDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appIconsChanged:(id)arg1;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1;
- (_Bool)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1;
- (_Bool)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1;
- (id)applicationBundleURLForShortcutsWithIconView:(id)arg1;
- (id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2;
- (_Bool)iconViewShouldBeginShortcutsPresentation:(id)arg1;
- (void)launchIcon;
- (void)iconTapped:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (_Bool)isTimedOutForIcon:(id)arg1;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (_Bool)shouldHideShortcutsForAppIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (void)fetchApplicationShortcutInfoForIcon:(id)arg1;
- (void)fetchIconImageForIcon:(id)arg1;
- (void)resetImageWithAppIcon:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setIcon:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

