//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyNotification/NSObject-Protocol.h>

@class FAFamilyNotification, NSString;

@protocol FAFamilyNotifierAgentProtocol <NSObject>
- (void)setDelegateMachServiceName:(NSString *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)pendingNotificationsWithIdentifier:(NSString *)arg1 replyBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(NSString *)arg1;
- (void)deliverNotificaton:(FAFamilyNotification *)arg1;
@end

