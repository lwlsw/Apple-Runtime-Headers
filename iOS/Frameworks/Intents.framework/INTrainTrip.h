//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSString;

@interface INTrainTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_provider;
    NSString *_trainName;
    NSString *_trainNumber;
    INDateComponentsRange *_tripDuration;
    CLPlacemark *_departureStationLocation;
    NSString *_departurePlatform;
    CLPlacemark *_arrivalStationLocation;
    NSString *_arrivalPlatform;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *arrivalPlatform; // @synthesize arrivalPlatform=_arrivalPlatform;
@property(readonly, copy, nonatomic) CLPlacemark *arrivalStationLocation; // @synthesize arrivalStationLocation=_arrivalStationLocation;
@property(readonly, copy, nonatomic) NSString *departurePlatform; // @synthesize departurePlatform=_departurePlatform;
@property(readonly, copy, nonatomic) CLPlacemark *departureStationLocation; // @synthesize departureStationLocation=_departureStationLocation;
@property(readonly, copy, nonatomic) INDateComponentsRange *tripDuration; // @synthesize tripDuration=_tripDuration;
@property(readonly, copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber=_trainNumber;
@property(readonly, copy, nonatomic) NSString *trainName; // @synthesize trainName=_trainName;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithProvider:(id)arg1 trainName:(id)arg2 trainNumber:(id)arg3 tripDuration:(id)arg4 departureStationLocation:(id)arg5 departurePlatform:(id)arg6 arrivalStationLocation:(id)arg7 arrivalPlatform:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

