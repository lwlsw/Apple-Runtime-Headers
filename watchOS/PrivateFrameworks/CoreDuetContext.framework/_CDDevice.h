//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _companion;
    NSString *_deviceID;
    unsigned int _identifier;
    NSString *_name;
    int _deviceClass;
    NSString *_model;
}

+ (_Bool)supportsSecureCoding;
+ (id)localDevice;
+ (unsigned int)identifierForDeviceID:(id)arg1;
@property(readonly, nonatomic, getter=isCompanion) _Bool companion; // @synthesize companion=_companion;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)matchesDeviceTypes:(unsigned int)arg1;
- (id)initWithName:(id)arg1 deviceID:(id)arg2 model:(id)arg3 companion:(_Bool)arg4;
- (id)initWithName:(id)arg1 identifier:(unsigned int)arg2 deviceClass:(int)arg3;
- (id)initWithName:(id)arg1 deviceID:(id)arg2 deviceClass:(int)arg3 model:(id)arg4 companion:(_Bool)arg5;

@end

