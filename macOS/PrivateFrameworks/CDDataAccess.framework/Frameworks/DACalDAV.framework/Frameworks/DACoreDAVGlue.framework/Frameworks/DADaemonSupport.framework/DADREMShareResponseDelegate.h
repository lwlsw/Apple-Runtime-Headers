//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADaemonSupport/DADREMXPCPerformerDelegate.h>

#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer-Protocol.h>

@class NSString;

@interface DADREMShareResponseDelegate : DADREMXPCPerformerDelegate <DAEventsCalendarSharingResponseConsumer>
{
    NSString *_calendarID;
    NSString *_shareID;
}

@property(retain, nonatomic) NSString *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)shareResponseFinishedWithError:(id)arg1;
- (void)_doResponseWithBlock:(CDUnknownBlockType)arg1;
- (void)reportAsJunk;
- (void)respondToShareRequestWithResponse:(long long)arg1;
- (id)initWithAccountID:(id)arg1 calendarID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

