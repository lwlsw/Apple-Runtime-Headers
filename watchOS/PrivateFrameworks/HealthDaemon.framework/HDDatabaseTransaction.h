//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDSQLiteDatabase, NSMutableArray;
@protocol HDSQLiteDatabaseProvider;

@interface HDDatabaseTransaction : NSObject
{
    id <HDSQLiteDatabaseProvider> _databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    _Bool _isActive;
    _Bool _isOutermostTransactionUnprotected;
    _Bool _isHandlingTransactionEnd;
    _Bool _performingMigration;
    HDSQLiteDatabase *_unprotectedDatabase;
    HDSQLiteDatabase *_protectedDatabase;
    HDDatabaseTransactionContext *_rootContext;
}

@property(nonatomic) _Bool performingMigration; // @synthesize performingMigration=_performingMigration;
@property(readonly, copy, nonatomic) HDDatabaseTransactionContext *rootContext; // @synthesize rootContext=_rootContext;
@property(readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // @synthesize protectedDatabase=_protectedDatabase;
@property(readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // @synthesize unprotectedDatabase=_unprotectedDatabase;
- (void).cxx_destruct;
- (void)transactionDidEndWithError:(id)arg1;
- (void)onCommit:(CDUnknownBlockType)arg1 orRollback:(CDUnknownBlockType)arg2;
- (_Bool)performWithContext:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (id)databaseForEntityClass:(Class)arg1;
- (id)databaseForEntity:(id)arg1;
- (id)databaseForEntityProtectionClass:(int)arg1;
- (id)initWithDatabaseProvider:(id)arg1 rootContext:(id)arg2;
- (void)dealloc;

@end

