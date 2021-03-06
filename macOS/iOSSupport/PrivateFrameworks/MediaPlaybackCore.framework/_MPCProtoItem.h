//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying>
{
    _MPCProtoItemIdentifierSet *_identifierSet;
    int _mediaType;
    BOOL _excludeFromShuffle;
    struct {
        unsigned int mediaType:1;
        unsigned int excludeFromShuffle:1;
    } _has;
}

@property(nonatomic) BOOL excludeFromShuffle; // @synthesize excludeFromShuffle=_excludeFromShuffle;
@property(retain, nonatomic) _MPCProtoItemIdentifierSet *identifierSet; // @synthesize identifierSet=_identifierSet;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExcludeFromShuffle;
@property(readonly, nonatomic) BOOL hasIdentifierSet;
@property(nonatomic) BOOL hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

