//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLDuetActivityBudgetDataSourceProtocol-Protocol.h>

@class CSLAppSwitcherItemModel, CSLComplicationMonitor, NSMutableDictionary, NSMutableSet, NSString;
@protocol CSLDuetActivityBudgetDataSourceDelegateProtocol, OS_dispatch_queue;

@interface CSLDuetActivityBudgetDataSource : NSObject <CSLDuetActivityBudgetDataSourceProtocol>
{
    CSLAppSwitcherItemModel *_switcherModel;
    CSLComplicationMonitor *_complicationMonitor;
    NSMutableSet *_privilegedClients;
    id <CSLDuetActivityBudgetDataSourceDelegateProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_callQueue;
    NSMutableDictionary *_bundleIDsByClass;
    struct _opaque_pthread_mutex_t _lock;
}

@property(retain, nonatomic) NSMutableDictionary *bundleIDsByClass; // @synthesize bundleIDsByClass=_bundleIDsByClass;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *callQueue; // @synthesize callQueue=_callQueue;
@property(nonatomic) __weak id <CSLDuetActivityBudgetDataSourceDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *privilegedClients; // @synthesize privilegedClients=_privilegedClients;
@property(nonatomic) __weak CSLComplicationMonitor *complicationMonitor; // @synthesize complicationMonitor=_complicationMonitor;
@property(nonatomic) __weak CSLAppSwitcherItemModel *switcherModel; // @synthesize switcherModel=_switcherModel;
- (void).cxx_destruct;
- (void)removePrivilegedClient:(id)arg1;
- (void)addPrivilegedClient:(id)arg1;
- (void)complicationMonitorComplicationsDidChange:(id)arg1 addedBundleIDs:(id)arg2 removedBundleIDs:(id)arg3;
- (void)appSwitcherItemModelDidChange:(id)arg1 removedItems:(id)arg2 addedItems:(id)arg3;
- (id)budgetClassesFor:(id)arg1;
- (void)_budgetClass:(unsigned int)arg1 addedIDs:(id)arg2 removedIDs:(id)arg3;
- (id)minusNeverEligibleBundleIDs:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1 callQueue:(id)arg2;
- (id)_allBundleIDs;
- (id)eligibleBundleIDsForClass:(unsigned int)arg1;
- (id)initWithSwitcherModel:(id)arg1 complicationMonitor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

