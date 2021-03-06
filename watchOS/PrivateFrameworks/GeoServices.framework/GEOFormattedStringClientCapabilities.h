//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _concatenatingFormatStringsSupported;
    _Bool _styleSupported;
    _Bool _timestampFormatPatternSupported;
    struct {
        unsigned int has_concatenatingFormatStringsSupported:1;
        unsigned int has_styleSupported:1;
        unsigned int has_timestampFormatPatternSupported:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasStyleSupported;
@property(nonatomic) _Bool styleSupported;
@property(nonatomic) _Bool hasTimestampFormatPatternSupported;
@property(nonatomic) _Bool timestampFormatPatternSupported;
@property(nonatomic) _Bool hasConcatenatingFormatStringsSupported;
@property(nonatomic) _Bool concatenatingFormatStringsSupported;

@end

