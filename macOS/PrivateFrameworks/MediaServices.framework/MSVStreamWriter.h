//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface MSVStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_pendingWriteDataList;
    BOOL _stopped;
    BOOL _closeOnStop;
    struct z_stream_s *_zstreamp;
    BOOL _compressed;
    unsigned long long _maximumBufferSize;
    double _timestamp;
    unsigned long long _bytesWritten;
    CDUnknownBlockType _canWriteDataBlock;
    CDUnknownBlockType _didFinishWritingBlock;
    CDUnknownBlockType _didEncounterErrorBlock;
    NSOutputStream *_outputStream;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishWritingBlock; // @synthesize didFinishWritingBlock=_didFinishWritingBlock;
@property(copy, nonatomic) CDUnknownBlockType canWriteDataBlock; // @synthesize canWriteDataBlock=_canWriteDataBlock;
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property(nonatomic) unsigned long long maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
- (void).cxx_destruct;
- (void)_onQueue_stop;
- (void)_writeAvailablePendingData;
- (id)_decompressData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeStreamError:(CDStruct_87dc826d)arg1;
- (BOOL)writeAllData:(id)arg1 error:(id *)arg2;
- (void)writeData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

