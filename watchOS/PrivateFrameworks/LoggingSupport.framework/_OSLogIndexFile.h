//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoggingSupport/_OSLogIndexTimeRangable-Protocol.h>

@class NSString, _OSLogChunkFileReference, _OSLogChunkStore;

__attribute__((visibility("hidden")))
@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable>
{
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu[16];
    _Bool _timespanDetermined;
    unsigned long long _cot_header;
    unsigned long long _cot;
    unsigned long long _cet;
    char *_path;
    unsigned long long _et;
    unsigned long long _ot;
}

@property(readonly, nonatomic) char *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
- (void).cxx_destruct;
@property(readonly, nonatomic) const char *bootUUID;
- (id)copyMappedChunkStore:(id *)arg1;
- (_Bool)_determineTimespan;
- (_Bool)_loadCatalogMetadataForTimespan;
- (_Bool)_loadHeaderMetadata:(id)arg1;
- (void)dealloc;
- (id)initWithChunkStore:(id)arg1 error:(id *)arg2;
- (id)initWithTraceFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

