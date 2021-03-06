//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSData, NSMutableArray;

@interface CLPAppCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_appLocations;
    CLPMeta *_meta;
    NSData *_signature;
}

+ (Class)appLocationType;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *appLocations; // @synthesize appLocations=_appLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSignature;
- (id)appLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)appLocationsCount;
- (void)addAppLocation:(id)arg1;
- (void)clearAppLocations;

@end

