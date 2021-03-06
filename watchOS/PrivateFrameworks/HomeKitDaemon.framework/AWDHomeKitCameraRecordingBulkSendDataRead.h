//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitCameraRecordingBulkSendDataRead : PBCodable <NSCopying>
{
    unsigned long long _bitRate;
    unsigned long long _bytesRead;
    unsigned long long _chunkSequenceNumber;
    unsigned long long _duration;
    unsigned long long _iFrameInterval;
    unsigned long long _imageHeight;
    unsigned long long _imageWidth;
    unsigned long long _sequenceNumber;
    unsigned long long _timestamp;
    NSString *_cameraUUID;
    NSString *_sessionUUID;
    unsigned int _status;
    struct {
        unsigned int bitRate:1;
        unsigned int bytesRead:1;
        unsigned int chunkSequenceNumber:1;
        unsigned int duration:1;
        unsigned int iFrameInterval:1;
        unsigned int imageHeight:1;
        unsigned int imageWidth:1;
        unsigned int sequenceNumber:1;
        unsigned int timestamp:1;
        unsigned int status:1;
    } _has;
}

@property(nonatomic) unsigned long long iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(nonatomic) unsigned long long chunkSequenceNumber; // @synthesize chunkSequenceNumber=_chunkSequenceNumber;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSString *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
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
@property(nonatomic) _Bool hasIFrameInterval;
@property(nonatomic) _Bool hasImageWidth;
@property(nonatomic) _Bool hasImageHeight;
@property(nonatomic) _Bool hasBitRate;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasBytesRead;
@property(nonatomic) _Bool hasChunkSequenceNumber;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(readonly, nonatomic) _Bool hasCameraUUID;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

