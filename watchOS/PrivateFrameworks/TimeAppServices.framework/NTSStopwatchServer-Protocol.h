//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeAppServices/NSObject-Protocol.h>

@class NSArray;

@protocol NTSStopwatchServer <NSObject>
- (void)getModelWithHandler:(void (^)(int, double, double, double, double, NSArray *))arg1;
- (void)saveState:(int)arg1 startTotalTime:(double)arg2 elapsedTotalTime:(double)arg3 startLapTime:(double)arg4 elapsedLapTime:(double)arg5 laps:(NSArray *)arg6;
@end

