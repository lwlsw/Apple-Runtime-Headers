//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class HKObjectType;

@interface WFHealthKitAuthorizationUnit : NSObject <NSSecureCoding>
{
    HKObjectType *_objectType;
    long long _accessType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long accessType; // @synthesize accessType=_accessType;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithObjectType:(id)arg1 accessType:(long long)arg2;

@end

