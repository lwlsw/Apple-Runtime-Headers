//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class AVB17221AEMSamplingRate, AVB17221AEMVideoSize;

@interface AVBIIDCStreamConfiguration : NSObject <NSCopying>
{
    unsigned short _colorSpace;
    AVB17221AEMSamplingRate *_maximumFrameRate;
    AVB17221AEMSamplingRate *_minimumFrameRate;
    AVB17221AEMVideoSize *_frameSize;
}

@property(nonatomic) unsigned short colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) AVB17221AEMVideoSize *frameSize; // @synthesize frameSize=_frameSize;
@property(copy, nonatomic) AVB17221AEMSamplingRate *minimumFrameRate; // @synthesize minimumFrameRate=_minimumFrameRate;
@property(copy, nonatomic) AVB17221AEMSamplingRate *maximumFrameRate; // @synthesize maximumFrameRate=_maximumFrameRate;
- (void)dealloc;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

