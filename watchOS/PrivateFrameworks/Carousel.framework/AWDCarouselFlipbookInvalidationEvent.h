//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Carousel/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDCarouselFlipbookInvalidationEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_complications;
    NSString *_face;
    unsigned int _flipbookFrameRenderCount;
    unsigned int _invalidatedFramesUpTo2MinutesCount;
    unsigned int _invalidatedFramesUpTo3MinutesCount;
    unsigned int _invalidatedFramesUpTo4MinutesCount;
    unsigned int _invalidatedFramesUpTo5MinutesCount;
    unsigned int _invalidatedFramesUpTo6MinutesCount;
    unsigned int _invalidationCount;
    NSMutableArray *_reasons;
    struct {
        unsigned int timestamp:1;
        unsigned int flipbookFrameRenderCount:1;
        unsigned int invalidatedFramesUpTo2MinutesCount:1;
        unsigned int invalidatedFramesUpTo3MinutesCount:1;
        unsigned int invalidatedFramesUpTo4MinutesCount:1;
        unsigned int invalidatedFramesUpTo5MinutesCount:1;
        unsigned int invalidatedFramesUpTo6MinutesCount:1;
        unsigned int invalidationCount:1;
    } _has;
}

+ (Class)complicationsType;
+ (Class)reasonsType;
@property(nonatomic) unsigned int invalidatedFramesUpTo6MinutesCount; // @synthesize invalidatedFramesUpTo6MinutesCount=_invalidatedFramesUpTo6MinutesCount;
@property(nonatomic) unsigned int invalidatedFramesUpTo5MinutesCount; // @synthesize invalidatedFramesUpTo5MinutesCount=_invalidatedFramesUpTo5MinutesCount;
@property(nonatomic) unsigned int invalidatedFramesUpTo4MinutesCount; // @synthesize invalidatedFramesUpTo4MinutesCount=_invalidatedFramesUpTo4MinutesCount;
@property(nonatomic) unsigned int invalidatedFramesUpTo3MinutesCount; // @synthesize invalidatedFramesUpTo3MinutesCount=_invalidatedFramesUpTo3MinutesCount;
@property(nonatomic) unsigned int invalidatedFramesUpTo2MinutesCount; // @synthesize invalidatedFramesUpTo2MinutesCount=_invalidatedFramesUpTo2MinutesCount;
@property(nonatomic) unsigned int flipbookFrameRenderCount; // @synthesize flipbookFrameRenderCount=_flipbookFrameRenderCount;
@property(retain, nonatomic) NSMutableArray *complications; // @synthesize complications=_complications;
@property(retain, nonatomic) NSString *face; // @synthesize face=_face;
@property(retain, nonatomic) NSMutableArray *reasons; // @synthesize reasons=_reasons;
@property(nonatomic) unsigned int invalidationCount; // @synthesize invalidationCount=_invalidationCount;
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
@property(nonatomic) _Bool hasInvalidatedFramesUpTo6MinutesCount;
@property(nonatomic) _Bool hasInvalidatedFramesUpTo5MinutesCount;
@property(nonatomic) _Bool hasInvalidatedFramesUpTo4MinutesCount;
@property(nonatomic) _Bool hasInvalidatedFramesUpTo3MinutesCount;
@property(nonatomic) _Bool hasInvalidatedFramesUpTo2MinutesCount;
@property(nonatomic) _Bool hasFlipbookFrameRenderCount;
- (id)complicationsAtIndex:(unsigned int)arg1;
- (unsigned int)complicationsCount;
- (void)addComplications:(id)arg1;
- (void)clearComplications;
@property(readonly, nonatomic) _Bool hasFace;
- (id)reasonsAtIndex:(unsigned int)arg1;
- (unsigned int)reasonsCount;
- (void)addReasons:(id)arg1;
- (void)clearReasons;
@property(nonatomic) _Bool hasInvalidationCount;
@property(nonatomic) _Bool hasTimestamp;

@end

