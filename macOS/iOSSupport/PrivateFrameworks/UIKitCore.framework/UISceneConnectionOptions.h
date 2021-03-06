//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShareMetadata, FBSScene, FBSSceneSpecification, NSDictionary, NSSet, NSString, UIApplicationShortcutItem, UNNotificationResponse;

@interface UISceneConnectionOptions : NSObject
{
    NSDictionary *_launchOptionsDictionary;
    FBSScene *_fbsScene;
    FBSSceneSpecification *_specification;
}

@property(readonly, nonatomic) __weak FBSSceneSpecification *_specification; // @synthesize _specification;
@property(readonly, nonatomic) __weak FBSScene *_fbsScene; // @synthesize _fbsScene;
@property(readonly, nonatomic) NSDictionary *_launchOptionsDictionary; // @synthesize _launchOptionsDictionary;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) CKShareMetadata *cloudKitShareMetadata; // @dynamic cloudKitShareMetadata;
@property(readonly, nonatomic) UNNotificationResponse *notificationResponse; // @dynamic notificationResponse;
@property(readonly, copy, nonatomic) NSSet *userActivities; // @dynamic userActivities;
@property(readonly, nonatomic) NSString *handoffUserActivityType; // @dynamic handoffUserActivityType;
@property(readonly, nonatomic) NSString *sourceApplication; // @dynamic sourceApplication;
@property(readonly, copy, nonatomic) NSSet *URLContexts; // @dynamic URLContexts;
- (id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) UIApplicationShortcutItem *shortcutItem; // @dynamic shortcutItem;

@end

