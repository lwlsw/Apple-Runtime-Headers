//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredAnimation : NSObject
{
    _Bool _finalized;
    _Bool _autoreverses;
    NSString *_key;
    id _initialValue;
    float _repeatCount;
    double _duration;
}

@property(nonatomic) _Bool autoreverses; // @synthesize autoreverses=_autoreverses;
@property(nonatomic) float repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) id initialValue; // @synthesize initialValue=_initialValue;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (void)calculateFrameValues:(id)arg1 frameTimes:(id)arg2 withFrameInterval:(double)arg3 valueTransformer:(CDUnknownBlockType)arg4;
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;
- (void)_finalize;
- (void)animateFrameAtIndex:(int)arg1 animations:(CDUnknownBlockType)arg2;
- (void)addAnimationFrameForValue:(id)arg1;
@property(readonly, nonatomic) NSArray *animationFrames;
- (id)_animationFrames;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

@end

