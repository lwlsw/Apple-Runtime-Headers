//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/EKNotificationEngine.h>

@interface EKEventCounterEngine : EKNotificationEngine
{
}

- (id)_eventsFrom:(id)arg1 to:(id)arg2;
- (void)_scheduleTimerForNextEventCounter;
- (void)_performAction;
- (id)initWithEventStore:(id)arg1 actionQueue:(id)arg2 timerQueue:(id)arg3 notificationDelegate:(id)arg4;

@end

