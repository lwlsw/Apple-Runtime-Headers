//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSError, NSString, NSUUID;

@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSDate *_lastUpdated;
    NSError *_error;
    long long _state;
    NSUUID *_commandIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 lastUpdated:(id)arg2 error:(id)arg3 state:(long long)arg4;

@end

