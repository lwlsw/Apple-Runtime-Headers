//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDCameraRecordingVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    int _resolution;
    NSNumber *_frameRate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) int resolution; // @synthesize resolution=_resolution;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3;
- (id)initWithResolution:(int)arg1 frameRate:(id)arg2;

@end

