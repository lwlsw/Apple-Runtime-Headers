//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable <NSCopying>
{
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_artistName;
    CDStruct_c223d907 _has;
}

@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(nonatomic) long long representativeItemCloudID; // @synthesize representativeItemCloudID=_representativeItemCloudID;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasStoreAdamID;
@property(nonatomic) BOOL hasRepresentativeItemCloudID;
@property(readonly, nonatomic) BOOL hasArtistName;

@end

