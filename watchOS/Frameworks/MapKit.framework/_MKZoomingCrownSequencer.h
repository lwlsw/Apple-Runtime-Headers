//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICCrownInputSequencer.h>

#import <MapKit/PUICCrownInputSequencerDelegate-Protocol.h>
#import <MapKit/PUICCrownInputSequencerDelegatePrivate-Protocol.h>

@class NSString;
@protocol MKZoomingCrownSequencerDelegate, MKZoomingGestureControlConfiguration;

@interface _MKZoomingCrownSequencer : PUICCrownInputSequencer <PUICCrownInputSequencerDelegatePrivate, PUICCrownInputSequencerDelegate>
{
    int _state;
    double _scale;
    double _velocity;
    double _previousVelocity;
    _Bool _didStartUpdate;
    double _lastUpdateTimestamp;
    id <MKZoomingGestureControlConfiguration> _configuration;
    id <MKZoomingCrownSequencerDelegate> _zoomingDelegate;
}

@property(nonatomic) __weak id <MKZoomingCrownSequencerDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(copy, nonatomic) id <MKZoomingGestureControlConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_crownInputSequencer:(id)arg1 offsetDidChangeByDelta:(double)arg2;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
@property(readonly, nonatomic) float velocity;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) int state;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

