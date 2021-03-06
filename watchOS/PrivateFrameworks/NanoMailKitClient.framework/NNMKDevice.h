//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NNMKDevice : NSObject
{
    _Bool _isDeviceUnlocked;
    _Bool _isClassCDataAvailable;
    _Bool _isRunningInStoreDemoMode;
    NSString *_registryBasePath;
    NSString *_databaseSubfolder;
}

+ (_Bool)isWebKitSupported;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool isRunningInStoreDemoMode; // @synthesize isRunningInStoreDemoMode=_isRunningInStoreDemoMode;
@property(readonly, nonatomic) NSString *databaseSubfolder; // @synthesize databaseSubfolder=_databaseSubfolder;
@property(readonly, nonatomic) NSString *registryBasePath; // @synthesize registryBasePath=_registryBasePath;
@property(readonly, nonatomic) _Bool isClassCDataAvailable; // @synthesize isClassCDataAvailable=_isClassCDataAvailable;
@property(readonly, nonatomic) _Bool isDeviceUnlocked; // @synthesize isDeviceUnlocked=_isDeviceUnlocked;
- (void).cxx_destruct;
@property(readonly, nonatomic) float screenScale;
@property(readonly, nonatomic) float screenWidth;
@property(readonly, nonatomic) _Bool isRunningTest;
- (void)setIsRunningInStoreDemoMode:(_Bool)arg1;
- (void)setIsDeviceUnlocked:(_Bool)arg1;
- (void)setDatabaseSubfolder:(id)arg1;
- (void)setRegistryBasePath:(id)arg1;
- (id)_defaultRegistryBasePath;
- (void)_updateDeviceUnlockedState;
- (void)reloadMobileKeyBag;
- (id)init;

@end

