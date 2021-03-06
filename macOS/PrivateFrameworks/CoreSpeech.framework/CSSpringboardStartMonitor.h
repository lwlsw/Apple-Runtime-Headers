//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpringboardStartMonitor : CSEventMonitor
{
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

+ (id)sharedInstance;
- (BOOL)_checkSpringBoardStarted;
- (BOOL)isSpringboardStarted;
- (void)_notifyObserver:(id)arg1 withStarted:(BOOL)arg2;
- (void)_didReceiveSpringboardStarted:(BOOL)arg1;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

