//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable <NSCopying>
{
    long long _errorCode;
    unsigned long long _operationStartTime;
    unsigned long long _retryCount;
    unsigned long long _runTime;
    unsigned long long _timestamp;
    unsigned long long _totalClipDuration;
    NSString *_clipModelUUID;
    NSString *_errorDomain;
    int _operationType;
    _Bool _didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
    struct {
        unsigned int errorCode:1;
        unsigned int operationStartTime:1;
        unsigned int retryCount:1;
        unsigned int runTime:1;
        unsigned int timestamp:1;
        unsigned int totalClipDuration:1;
        unsigned int operationType:1;
        unsigned int didCausePreviousClipToFinalizeBecauseMaxDurationExceeded:1;
    } _has;
}

@property(nonatomic) unsigned long long operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long runTime; // @synthesize runTime=_runTime;
@property(nonatomic) unsigned long long totalClipDuration; // @synthesize totalClipDuration=_totalClipDuration;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool didCausePreviousClipToFinalizeBecauseMaxDurationExceeded; // @synthesize didCausePreviousClipToFinalizeBecauseMaxDurationExceeded=_didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property(retain, nonatomic) NSString *clipModelUUID; // @synthesize clipModelUUID=_clipModelUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasOperationStartTime;
@property(readonly, nonatomic) _Bool hasErrorDomain;
- (int)StringAsOperationType:(id)arg1;
- (id)operationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) _Bool hasRetryCount;
@property(nonatomic) _Bool hasRunTime;
@property(nonatomic) _Bool hasTotalClipDuration;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property(readonly, nonatomic) _Bool hasClipModelUUID;
@property(nonatomic) _Bool hasTimestamp;

@end

