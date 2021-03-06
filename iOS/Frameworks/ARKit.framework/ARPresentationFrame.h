//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARFrame, ARRenderStats, NSArray;
@protocol MTLSharedEvent;

@interface ARPresentationFrame : NSObject
{
    double _timestamp;
    unsigned long long _frameNumber;
    unsigned long long _waitNumber;
    id <MTLSharedEvent> _applicationEvent;
    id <MTLSharedEvent> _compositorEvent;
    NSArray *_presentationTargets;
    unsigned long long _waitFrameNumber;
    ARFrame *_frame;
    ARRenderStats *_frameStatsRender;
    // Error parsing type: , name: _depthHints
    // Error parsing type: {?="columns"[4]}, name: _transform
}

// Error parsing type for property depthHints:
// Property attributes: T,N,V_depthHints

// Error parsing type for property transform:
// Property attributes: T{?=[4]},N,V_transform

@property(retain, nonatomic) ARRenderStats *frameStatsRender; // @synthesize frameStatsRender=_frameStatsRender;
@property(retain, nonatomic) ARFrame *frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long waitFrameNumber; // @synthesize waitFrameNumber=_waitFrameNumber;
@property(readonly, nonatomic) NSArray *presentationTargets; // @synthesize presentationTargets=_presentationTargets;
@property(readonly, nonatomic) id <MTLSharedEvent> compositorEvent; // @synthesize compositorEvent=_compositorEvent;
@property(readonly, nonatomic) id <MTLSharedEvent> applicationEvent; // @synthesize applicationEvent=_applicationEvent;
@property(nonatomic) unsigned long long waitNumber; // @synthesize waitNumber=_waitNumber;
@property(nonatomic) unsigned long long frameNumber; // @synthesize frameNumber=_frameNumber;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)signalAfterFinishingRender:(id)arg1;
- (void)waitBeforeStartingRender:(id)arg1;
- (id)presentationTargetForEyeLocation:(long long)arg1;
- (id)description;
- (id)initWithPresentationTargets:(id)arg1 compositorEvent:(id)arg2 applicationEvent:(id)arg3;

@end

