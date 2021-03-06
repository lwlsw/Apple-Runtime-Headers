//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject
{
    _Bool _requiresHistoricalBuffer;
    _Bool _useCustomizedRecordSettings;
    _Bool _lpcmIsFloat;
    _Bool _isSiri;
    CSAudioRecordContext *_recordContext;
    unsigned long _lpcmBitDepth;
    unsigned long _numberOfChannels;
    unsigned long _encoderBitRate;
    long long _audioFormat;
    double _sampleRate;
}

+ (id)requestForSpeexRecordSettingsWithContext:(id)arg1;
+ (id)requestForOpusRecordSettingsWithContext:(id)arg1;
+ (id)requestForLpcmRecordSettingsWithContext:(id)arg1;
+ (id)defaultRequestWithContext:(id)arg1;
@property(nonatomic) _Bool isSiri; // @synthesize isSiri=_isSiri;
@property(nonatomic) unsigned long encoderBitRate; // @synthesize encoderBitRate=_encoderBitRate;
@property(nonatomic) unsigned long numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(nonatomic) _Bool lpcmIsFloat; // @synthesize lpcmIsFloat=_lpcmIsFloat;
@property(nonatomic) unsigned long lpcmBitDepth; // @synthesize lpcmBitDepth=_lpcmBitDepth;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) _Bool useCustomizedRecordSettings; // @synthesize useCustomizedRecordSettings=_useCustomizedRecordSettings;
@property(nonatomic) _Bool requiresHistoricalBuffer; // @synthesize requiresHistoricalBuffer=_requiresHistoricalBuffer;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (id)initWithXPCObject:(id)arg1;

@end

