//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCICloudIdentityToken, BDSICloudIdentityToken, NSHashTable;
@protocol BDSLiverpoolStatusChangeObserving, OS_dispatch_queue;

@interface BDSLiverpoolStatusMonitor : NSObject
{
    _Bool _optedIn;
    _Bool _optedInKnown;
    _Bool _lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
    BDSICloudIdentityToken *_lastArchivedICloudIdentityToken;
    BDSICloudIdentityToken *_lastArchivedNonNilICloudIdentityToken;
    BDSICloudIdentityToken *_currentICloudIdentityToken;
    int _tccNotifyToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_containerQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSHashTable *_observers;
    id <BDSLiverpoolStatusChangeObserving> _coordinatingObserver;
}

@property(nonatomic) __weak id <BDSLiverpoolStatusChangeObserving> coordinatingObserver; // @synthesize coordinatingObserver=_coordinatingObserver;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue; // @synthesize containerQueue=_containerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int tccNotifyToken; // @synthesize tccNotifyToken=_tccNotifyToken;
@property(nonatomic) _Bool lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch; // @synthesize lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch=_lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property(nonatomic) _Bool optedInKnown; // @synthesize optedInKnown=_optedInKnown;
@property(copy, nonatomic) BDSICloudIdentityToken *currentICloudIdentityToken; // @synthesize currentICloudIdentityToken=_currentICloudIdentityToken;
@property(copy, nonatomic) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken; // @synthesize lastArchivedNonNilICloudIdentityToken=_lastArchivedNonNilICloudIdentityToken;
@property(copy, nonatomic) BDSICloudIdentityToken *lastArchivedICloudIdentityToken; // @synthesize lastArchivedICloudIdentityToken=_lastArchivedICloudIdentityToken;
@property(nonatomic) _Bool optedIn; // @synthesize optedIn=_optedIn;
- (void).cxx_destruct;
- (id)description;
- (void)dq_refreshICloudAvailabilityStatus;
- (void)_notifyObserversWithCurrentToken:(id)arg1 lastToken:(id)arg2;
- (void)p_iCloudIdentityDidChange:(id)arg1;
- (void)dq_archiveCurrentICloudIdentityToken;
- (void)restartObserving;
- (void)registerCoordinatingObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isCloudKitEnabled;
- (_Bool)dq_isCloudKitEnabled;
@property(readonly, copy, nonatomic) BCICloudIdentityToken *iCloudIdentityToken;
@property(readonly, nonatomic) _Bool userIdentityPreviouslyRecordedOnThisDevice;
- (void)dealloc;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(_Bool)arg1;
- (void)updateWithOptedIn:(_Bool)arg1;
- (id)init;

@end

