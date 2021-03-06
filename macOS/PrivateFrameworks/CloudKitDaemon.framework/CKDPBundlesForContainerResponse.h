//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>
{
    NSMutableArray *_bundleIDs;
}

+ (Class)bundleIDType;
@property(retain, nonatomic) NSMutableArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bundleIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIDsCount;
- (void)addBundleID:(id)arg1;
- (void)clearBundleIDs;

@end

