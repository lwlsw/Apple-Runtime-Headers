//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthToolbox/WDHealthTableViewController.h>

#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKSourceListDataSource, NSString;

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder>
{
    HKSourceListDataSource *_dataSource;
    NSString *_restorationSourceBundleIdentifier;
}

+ (id)tableViewSectionClasses;
@property(copy, nonatomic) NSString *restorationSourceBundleIdentifier; // @synthesize restorationSourceBundleIdentifier=_restorationSourceBundleIdentifier;
- (void).cxx_destruct;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (id)uniqueUserActivityType;
- (void)applicationWillEnterForeground;
- (void)pushViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithProfile:(id)arg1 usingInsetStyling:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

