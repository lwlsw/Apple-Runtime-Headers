//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _AUStaticParameterInfo : NSObject <NSSecureCoding>
{
    float _minValue;
    float _maxValue;
    unsigned long _unit;
    NSString *_unitName;
    unsigned long _flags;
    NSArray *_valueStrings;
    unsigned long _clumpID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long clumpID; // @synthesize clumpID=_clumpID;
@property(retain, nonatomic) NSArray *valueStrings; // @synthesize valueStrings=_valueStrings;
@property(nonatomic) unsigned long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *unitName; // @synthesize unitName=_unitName;
@property(nonatomic) unsigned long unit; // @synthesize unit=_unit;
@property(nonatomic) float maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

