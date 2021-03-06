//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>

#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider-Protocol.h>

@class NSDictionary, NSLayoutConstraint, NSString, NSTimer, UILayoutGuide, _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemPlacementGroup;

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider>
{
    NSDictionary *_orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement *_serviceNamePlacement;
    _UIStatusBarDisplayItemPlacement *_dualServiceNamePlacement;
    _UIStatusBarDisplayItemPlacementGroup *_lowerWifiGroup;
    _UIStatusBarDisplayItemPlacement *_batteryChargingPlacement;
    UILayoutGuide *_cutoutLayoutGuide;
    UILayoutGuide *_mainRegionsLayoutGuide;
    NSLayoutConstraint *_leadingBottomConstraint;
    NSLayoutConstraint *_expandedLeadingLowerTopConstraint;
    NSLayoutConstraint *_expandedTrailingBottomConstraint;
    NSTimer *_systemUpdatesTimer;
    NSTimer *_batteryExpansionTimer;
    NSTimer *_airplaneModeIgnoreChangesTimer;
}

+ (float)condensedPointSizeForCellularType:(int)arg1 defaultPointSize:(float)arg2 baselineOffset:(float *)arg3;
+ (struct CGSize)intrinsicContentSizeForOrientation:(int)arg1;
+ (struct NSDirectionalEdgeInsets)expandedEdgeInsets;
+ (struct NSDirectionalEdgeInsets)trailingEdgeInsets;
+ (struct NSDirectionalEdgeInsets)leadingEdgeInsets;
+ (struct NSDirectionalEdgeInsets)_edgeInsetsFromCenteringEdgeInset:(float)arg1 trailing:(_Bool)arg2;
+ (float)baseIconScale;
+ (float)bottomLeadingTopOffset;
+ (float)bottomLeadingWidth;
+ (float)lowerExpandedBaselineOffset;
+ (float)baselineBottomInset;
+ (id)pillSmallFont;
+ (id)pillFont;
+ (id)smallFont;
+ (id)emphasizedFont;
+ (id)expandedFont;
+ (id)normalFont;
+ (struct CGSize)smallPillSize;
+ (struct CGSize)pillSize;
+ (float)pillCenteringEdgeInset;
+ (float)trailingCenteringEdgeInset;
+ (float)leadingCenteringEdgeInset;
+ (float)leadingSmallPillSpacing;
+ (float)leadingPillInset;
+ (float)leadingPillSpacing;
+ (float)leadingItemSpacing;
+ (float)notchBottomCornerRadius;
+ (float)notchTopCornerRadius;
+ (struct CGSize)notchSize;
+ (float)referenceScale;
+ (float)referenceWidth;
+ (float)cornerRadius;
+ (float)height;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
@property(retain, nonatomic) NSTimer *airplaneModeIgnoreChangesTimer; // @synthesize airplaneModeIgnoreChangesTimer=_airplaneModeIgnoreChangesTimer;
@property(retain, nonatomic) NSTimer *batteryExpansionTimer; // @synthesize batteryExpansionTimer=_batteryExpansionTimer;
@property(retain, nonatomic) NSTimer *systemUpdatesTimer; // @synthesize systemUpdatesTimer=_systemUpdatesTimer;
@property(retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // @synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandedLeadingLowerTopConstraint; // @synthesize expandedLeadingLowerTopConstraint=_expandedLeadingLowerTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint; // @synthesize leadingBottomConstraint=_leadingBottomConstraint;
@property(retain, nonatomic) UILayoutGuide *mainRegionsLayoutGuide; // @synthesize mainRegionsLayoutGuide=_mainRegionsLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *cutoutLayoutGuide; // @synthesize cutoutLayoutGuide=_cutoutLayoutGuide;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement; // @synthesize batteryChargingPlacement=_batteryChargingPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // @synthesize lowerWifiGroup=_lowerWifiGroup;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualServiceNamePlacement; // @synthesize dualServiceNamePlacement=_dualServiceNamePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *serviceNamePlacement; // @synthesize serviceNamePlacement=_serviceNamePlacement;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (void).cxx_destruct;
- (void)setExpanded:(_Bool)arg1;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateExpandedTrailingRegion;
- (void)_updateLowerRegionsWithData:(id)arg1;
- (void)_disableSystemUpdates;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (_Bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_resetBattery;
- (void)_collapseBattery;
- (void)_stopBatteryCollapseTimer;
- (id)_removalAnimationForBatteryCharging;
- (id)_additionAnimationForBatteryCharging;
- (struct CGAffineTransform)_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (struct CGAffineTransform)_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (id)animationForAirplaneMode;
- (float)airplaneObstacleFadeOutDuration;
- (float)airplaneShouldFadeForAnimationType:(int)arg1;
- (float)airplaneSpeedForAnimationType:(int)arg1;
- (float)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(int)arg2;
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(float)arg2;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (void)updateDataForService:(id)arg1;
- (_Bool)canFixupDisplayItemAttributes;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)statusBarRegionsUpdated;
- (void)dataUpdated:(id)arg1;
- (void)styleUpdatedFromStyle:(int)arg1;
- (void)orientationUpdatedFromOrientation:(int)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)willUpdateWithData:(id)arg1;
- (id)condensedFontForCellularType:(int)arg1 defaultFont:(id)arg2 baselineOffset:(float *)arg3;
- (id)stringForCellularType:(int)arg1 condensed:(_Bool)arg2;
- (void)itemCreated:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(int)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

