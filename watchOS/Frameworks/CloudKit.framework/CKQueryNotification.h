//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKNotification.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSDictionary;

@interface CKQueryNotification : CKNotification <NSSecureCoding>
{
    int _queryNotificationReason;
    NSDictionary *_recordFields;
    CKRecordID *_recordID;
    int _databaseScope;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int databaseScope; // @synthesize databaseScope=_databaseScope;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSDictionary *recordFields; // @synthesize recordFields=_recordFields;
@property(nonatomic) int queryNotificationReason; // @synthesize queryNotificationReason=_queryNotificationReason;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isPublicDatabase;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

