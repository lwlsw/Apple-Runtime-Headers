//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/NSObject-Protocol.h>

@class IMAPFetchMailboxStatusOperation, NSArray, NSDictionary;

@protocol IMAPFetchMailboxStatusOperationDelegate <NSObject>
- (void)fetchMailboxStatusOperation:(IMAPFetchMailboxStatusOperation *)arg1 fetchedStatusesForMailboxNames:(NSDictionary *)arg2;

@optional
- (void)fetchMailboxStatusOperation:(IMAPFetchMailboxStatusOperation *)arg1 missedMailboxes:(NSArray *)arg2;
@end

