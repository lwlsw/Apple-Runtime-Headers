//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DACardDAV/DAGroup-Protocol.h>

@class CNMutableGroup, NSString;

@interface DAContactsGroup : NSObject <DAGroup>
{
    _Bool _markedForDeletion;
    CNMutableGroup *_group;
}

@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNMutableGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void *)asABGroup;
- (id)asGroup;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (_Bool)isGroup;
- (_Bool)isContact;
- (_Bool)isContainer;
- (void)markForDeletion;
- (void)setETag:(id)arg1;
- (id)eTag;
- (void)setExternalIdentifier:(id)arg1;
- (id)externalIdentifier;
- (void)setExternalUUID:(id)arg1;
- (id)externalUUID;
- (int)legacyIdentifier;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

