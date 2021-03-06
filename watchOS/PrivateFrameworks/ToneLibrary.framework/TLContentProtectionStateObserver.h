//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    int _contentProtectionStatus;
    int _unlockedSinceBootStatus;
}

+ (id)sharedContentProtectionStateObserver;
- (void).cxx_destruct;
- (int)_queryCurrentUnlockedSinceBootStatus;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (id)_performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (id)performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

