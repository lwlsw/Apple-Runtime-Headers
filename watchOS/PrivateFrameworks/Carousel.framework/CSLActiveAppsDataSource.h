//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLDuetActivityBudgetDataSourceDelegateProtocol-Protocol.h>
#import <Carousel/CSLSessionObserver-Protocol.h>

@class CSLDuetActivityBudgetDataSource, CSLSConcurrentObserverStore, CSLSessionManager, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface CSLActiveAppsDataSource : NSObject <CSLSessionObserver, CSLDuetActivityBudgetDataSourceDelegateProtocol>
{
    NSObject<OS_dispatch_queue> *_callQueue;
    struct os_unfair_lock_s _lock;
    CSLSConcurrentObserverStore *_observers;
    NSOrderedSet *_activeApps;
    CSLDuetActivityBudgetDataSource *_dataSource;
    CSLSessionManager *_sessionManager;
}

@property(nonatomic) __weak CSLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) CSLDuetActivityBudgetDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)sessionManagerConfigurationChanged:(id)arg1;
- (void)sessionManager:(id)arg1 sessionDidEnd:(id)arg2;
- (void)sessionManager:(id)arg1 sessionDidStart:(id)arg2;
- (void)dataSource:(id)arg1 addedBundleIDs:(id)arg2 removedBundleIDs:(id)arg3 changedBundleIDs:(id)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *activeApps; // @synthesize activeApps=_activeApps;
- (_Bool)isActive:(id)arg1;
- (_Bool)isComplication:(id)arg1;
- (void)_refreshActiveApps;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithComplicationMonitor:(id)arg1 switcherItemModel:(id)arg2 sessionManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

