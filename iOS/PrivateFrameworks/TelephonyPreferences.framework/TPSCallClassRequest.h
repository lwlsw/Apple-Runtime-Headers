//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSRequest.h>

@interface TPSCallClassRequest : TPSRequest
{
    int _callClass;
}

+ (id)unarchivedObjectClasses;
@property(nonatomic) int callClass; // @synthesize callClass=_callClass;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (id)initWithSubscriptionContext:(id)arg1;

@end

