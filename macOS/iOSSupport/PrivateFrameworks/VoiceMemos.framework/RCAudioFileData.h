//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface RCAudioFileData : NSData
{
    struct OpaqueAudioFileID *_audioFile;
    unsigned long long _audioFileSize;
}

+ (id)audioFileDataWithURL:(id)arg1 error:(id *)arg2;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithURL:(id)arg1 error:(id *)arg2;

@end

