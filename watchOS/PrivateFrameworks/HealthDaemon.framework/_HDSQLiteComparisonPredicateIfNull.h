//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate
{
    id _ifPropertyIsNullValue;
}

@property(readonly, copy, nonatomic) id ifPropertyIsNullValue; // @synthesize ifPropertyIsNullValue=_ifPropertyIsNullValue;
- (void).cxx_destruct;
- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(int)arg4;

@end

