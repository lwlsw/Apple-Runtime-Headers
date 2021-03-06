//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>

#import <MusicLibrary/_ML3MultiUserDaemonAccountChangeOperationDelegate-Protocol.h>

@class NSObject, NSOperationQueue, NSString;
@protocol ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate>
{
    NSString *_currentActiveAccountDSID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_accountChangeOperationQueue;
    id <ML3AccountInformationProviding> _accountInfo;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
}

@property(nonatomic) __weak id <MLMediaLibraryAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(retain, nonatomic) id <ML3AccountInformationProviding> accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) NSOperationQueue *accountChangeOperationQueue; // @synthesize accountChangeOperationQueue=_accountChangeOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)arg1 newDatabasePath:(id)arg2;
- (id)databasePathForDSID:(id)arg1;
- (_Bool)shouldExecuteAccountChangeOperation:(id)arg1 reason:(id *)arg2;
- (void)_notifyClients:(id)arg1;
- (void)_processAccountChangeNotification;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (id)_libraryContainerPathForDSID:(id)arg1;
@property(copy, nonatomic) NSString *currentActiveAccountDSID; // @synthesize currentActiveAccountDSID=_currentActiveAccountDSID;
- (id)libraryContainerPath;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

