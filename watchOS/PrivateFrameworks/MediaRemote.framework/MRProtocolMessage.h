//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRProtocolClientConnection, MSVMultiCallback, NSData, NSError, NSString, PBCodable;

@interface MRProtocolMessage : NSObject
{
    NSData *_protobufData;
    _Bool _replied;
    MSVMultiCallback *_messageSentCallbacks;
    MSVMultiCallback *_messagePurgedCallbacks;
    _Bool _isReply;
    PBCodable *_underlyingCodableMessage;
    NSError *_error;
    NSString *_identifier;
    MRProtocolClientConnection *_clientConnection;
    unsigned long long _timestamp;
}

+ (id)protocolMessageWithProtobufData:(id)arg1;
+ (unsigned int)currentProtocolVersion;
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(nonatomic) __weak MRProtocolClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PBCodable *underlyingCodableMessage; // @synthesize underlyingCodableMessage=_underlyingCodableMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *protobufData;
- (_Bool)replyWithMessage:(id)arg1;
- (_Bool)reply;
@property(readonly, nonatomic) _Bool shouldLog;
@property(readonly, nonatomic) unsigned int priority;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) unsigned int encryptionType;
@property(readonly, nonatomic) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) MSVMultiCallback *messagePurgedCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *messageSentCallbacks;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;

@end

