//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MTMediaTimeTracker : NSObject
{
    float _playbackRate;
    NSDate *_date;
    long long _position;
}

@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)estimatedTimeAtPosition:(unsigned long long)arg1;
- (void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2;
- (id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2;

@end

