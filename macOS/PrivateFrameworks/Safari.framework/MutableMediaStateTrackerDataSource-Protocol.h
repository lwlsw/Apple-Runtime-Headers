//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class MutableMediaStateTracker, NSArray;
@protocol MutableMediaSource;

@protocol MutableMediaStateTrackerDataSource <NSObject>
- (id <MutableMediaSource>)targetMediaSourceToToggleScreenCaptureByMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
- (id <MutableMediaSource>)targetMediaSourceToToggleMuteByMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
- (NSArray *)mutableMediaStateTracker:(MutableMediaStateTracker *)arg1 mediaSourcesWithMutableMediaState:(unsigned long long)arg2;
- (NSArray *)constituentMediaSourcesForMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
@end

