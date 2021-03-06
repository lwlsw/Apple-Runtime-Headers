//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPListRange, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying>
{
    CKDPListRange *_range;
    NSMutableArray *_values;
}

+ (Class)valueType;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;
@property(readonly, nonatomic) _Bool hasRange;

@end

