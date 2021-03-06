//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMReplicaManagerProviding-Protocol.h>

@class NSString, REMStore;

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject <REMReplicaManagerProviding>
{
    REMStore *_store;
}

+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
+ (id)replicaManagerForAccountID:(id)arg1 withStore:(id)arg2;
@property(retain, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

