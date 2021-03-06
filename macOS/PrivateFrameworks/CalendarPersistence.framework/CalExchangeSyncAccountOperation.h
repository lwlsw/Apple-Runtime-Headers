//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeOperation.h>

#import <CalendarPersistence/CalMessageTraceableOpearation-Protocol.h>

@class NSString;

@interface CalExchangeSyncAccountOperation : CalExchangeOperation <CalMessageTraceableOpearation>
{
    NSString *_messageTracerUID;
    BOOL _fetchMailbox;
    BOOL _refreshDelegatePrivileges;
}

+ (id)getFolderResponseShape;
+ (id)findFolderRestriction;
+ (id)findFolderResponseShape;
@property BOOL refreshDelegatePrivileges; // @synthesize refreshDelegatePrivileges=_refreshDelegatePrivileges;
@property BOOL fetchMailbox; // @synthesize fetchMailbox=_fetchMailbox;
- (void).cxx_destruct;
- (id)messageTracerUUID;
- (id)messageTracerName;
- (id)debugTitle;
- (BOOL)_fetchRootFolderIdForPrincipal:(id)arg1 binding:(id)arg2 error:(id *)arg3;
- (BOOL)_fetchDeletedItemsFolderId:(id)arg1 mailbox:(id)arg2 binding:(id)arg3 error:(id *)arg4;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (BOOL)syncPrincipal:(id)arg1 binding:(id)arg2 error:(id *)arg3;
- (void)refreshUserNameForPrincipal:(id)arg1 binding:(id)arg2;
- (BOOL)isObject:(id)arg1 anInstanceOf:(Class)arg2;
- (BOOL)isFirstObjectInArray:(id)arg1 anInstanceOf:(Class)arg2;
- (BOOL)syncDelegate:(id)arg1 binding:(id)arg2 error:(id *)arg3;
- (BOOL)syncPrincipalFolderHierarchy:(id)arg1 binding:(id)arg2 error:(id *)arg3;
- (BOOL)updateCalendarsForPrincipal:(id)arg1 withFolders:(id)arg2 binding:(id)arg3 error:(id *)arg4;
- (id)initWithSessionID:(id)arg1;

@end

