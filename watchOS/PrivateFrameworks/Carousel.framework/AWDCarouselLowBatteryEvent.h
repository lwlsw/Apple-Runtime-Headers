//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Carousel/NSCopying-Protocol.h>

@class NSString;

@interface AWDCarouselLowBatteryEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    float _batteryLevel;
    NSString *_bootUUID;
    int _eventType;
    struct {
        unsigned int timestamp:1;
        unsigned int batteryLevel:1;
        unsigned int eventType:1;
    } _has;
}

@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) NSString *bootUUID; // @synthesize bootUUID=_bootUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) _Bool hasBatteryLevel;
@property(readonly, nonatomic) _Bool hasBootUUID;
@property(nonatomic) _Bool hasTimestamp;

@end

