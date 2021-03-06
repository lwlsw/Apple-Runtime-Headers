//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable
{
    BOOL _playIsSticky;
    BOOL _isPerformingInputChanges;
    BOOL _playbackDisabled;
    double _hintProgress;
    long long _state;
    NSMutableSet *__playbackDisabledReasons;
}

@property(readonly, nonatomic) NSMutableSet *_playbackDisabledReasons; // @synthesize _playbackDisabledReasons=__playbackDisabledReasons;
@property(nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) BOOL playbackDisabled; // @synthesize playbackDisabled=_playbackDisabled;
@property(nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // @synthesize isPerformingInputChanges=_isPerformingInputChanges;
@property(nonatomic) BOOL playIsSticky; // @synthesize playIsSticky=_playIsSticky;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double hintProgress; // @synthesize hintProgress=_hintProgress;
- (void).cxx_destruct;
- (void)reset;
- (id)mutableChangeObject;
- (void)_setState:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setHintProgress:(double)arg1;
- (void)setPlaybackDisabled:(BOOL)arg1 forReason:(id)arg2;
- (id)init;

@end

