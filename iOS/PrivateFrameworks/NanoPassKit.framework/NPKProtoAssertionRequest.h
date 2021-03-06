//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying>
{
    int _assertionType;
    NSString *_requestUUIDString;
    _Bool _pending;
    struct {
        unsigned int assertionType:1;
        unsigned int pending:1;
    } _has;
}

@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSString *requestUUIDString; // @synthesize requestUUIDString=_requestUUIDString;
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
@property(nonatomic) _Bool hasPending;
- (int)StringAsAssertionType:(id)arg1;
- (id)assertionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAssertionType;
@property(nonatomic) int assertionType; // @synthesize assertionType=_assertionType;

@end

