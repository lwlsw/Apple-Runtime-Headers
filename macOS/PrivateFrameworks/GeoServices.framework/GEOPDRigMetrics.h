//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPDRigMetrics : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _occlusionScores;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setOcclusionScores:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)occlusionScoreAtIndex:(unsigned long long)arg1;
- (void)addOcclusionScore:(unsigned int)arg1;
- (void)clearOcclusionScores;
@property(readonly, nonatomic) unsigned int *occlusionScores;
@property(readonly, nonatomic) unsigned long long occlusionScoresCount;
- (void)dealloc;

@end

