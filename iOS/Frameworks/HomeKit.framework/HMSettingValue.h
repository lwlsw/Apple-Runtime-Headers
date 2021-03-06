//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSNumber *_numberValue;
    NSString *_stringValue;
    NSData *_dataValue;
    NSUUID *_selectionIdentifier;
    NSString *_selectionValue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *selectionValue; // @synthesize selectionValue=_selectionValue;
@property(readonly, copy, nonatomic) NSUUID *selectionIdentifier; // @synthesize selectionIdentifier=_selectionIdentifier;
@property(readonly, copy, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initDataSettingWithValue:(id)arg1;
- (id)initNumberSettingWithValue:(id)arg1;
- (id)initStringSettingWithValue:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6;

@end

