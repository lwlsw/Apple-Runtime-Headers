//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFApplicationStateObserver-Protocol.h>

@interface WFWaitToReturnAction : WFAction <WFApplicationStateObserver>
{
}

- (void)applicationContext:(id)arg1 applicationStateDidChange:(int)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

