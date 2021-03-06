//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoQualityInfo : VCObject
{
    _Bool _videoIsExpected;
    _Bool _isVideoQualityDegraded;
    double _lastGoodVideoQualityTime;
    double _lastBadVideoQualityTime;
    double _lastVideoQualityDegradedSwitchTime;
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
}

@property(nonatomic) _Bool videoIsExpected; // @synthesize videoIsExpected=_videoIsExpected;
@property(readonly, nonatomic) _Bool isVideoQualityDegraded; // @synthesize isVideoQualityDegraded=_isVideoQualityDegraded;
- (_Bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 time:(double)arg3;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (void)dealloc;
- (id)init;

@end

