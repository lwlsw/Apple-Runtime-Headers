//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDKeyValueDomain, HDProfile, NSCalendar;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject
{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    NSCalendar *_gregorianCalendar;
    HDKeyValueDomain *_keyValueDomain;
    struct os_unfair_lock_s _lock;
}

@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HDKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (void).cxx_destruct;
- (id)templateForDateComponents:(id)arg1 error:(id *)arg2;
- (id)allCachedTemplatesWithError:(id *)arg1;
- (_Bool)cacheTemplate:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;

@end

