//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSArray *_shareIDs;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(retain, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

