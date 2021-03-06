//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUserDefaults, NSFileManager, NSNumber, NSString;

@interface CNEnvironment : NSObject
{
    NSFileManager *_fileManager;
    CNUserDefaults *_userDefaults;
    NSString *_mainBundleIdentifier;
    struct NSNumber *_isInternalBuildStorage;
    struct NSNumber *_isCommLimitsEnabledStorage;
    struct NSNumber *_isCommLimitsPersistenceAccessibleStorage;
}

+ (id)currentEnvironment;
@property(readonly, nonatomic) NSNumber *isCommLimitsPersistenceAccessibleStorage; // @synthesize isCommLimitsPersistenceAccessibleStorage=_isCommLimitsPersistenceAccessibleStorage;
@property(readonly, nonatomic) NSNumber *isCommLimitsEnabledStorage; // @synthesize isCommLimitsEnabledStorage=_isCommLimitsEnabledStorage;
@property(readonly, nonatomic) NSNumber *isInternalBuildStorage; // @synthesize isInternalBuildStorage=_isInternalBuildStorage;
@property(readonly, nonatomic) NSString *mainBundleIdentifier; // @synthesize mainBundleIdentifier=_mainBundleIdentifier;
@property(readonly, nonatomic) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (BOOL)isCommLimitsPersistenceAccessibleImpl;
- (BOOL)isCommLimitsPersistenceAccessible;
- (BOOL)isCommLimitsEnabledImpl;
- (BOOL)isCommLimitsEnabled;
- (BOOL)isInternalBuildImpl;
- (BOOL)isInternalBuild;
- (id)initWithFileManager:(id)arg1 userDefaults:(id)arg2 mainBundleIdentifier:(id)arg3;
- (id)init;

@end

