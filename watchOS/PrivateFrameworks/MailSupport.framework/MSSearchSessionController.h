//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol MSSearchSessionControllerDataSource, OS_dispatch_queue;

@interface MSSearchSessionController : NSObject
{
    unsigned int _numberOfMessagesLeftToIndex;
    unsigned int _percentOfMessagesIndexed;
    int _emailProvider;
    NSMutableArray *_mutableSessionEngagements;
    id <MSSearchSessionControllerDataSource> _dataSource;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <MSSearchSessionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSMutableArray *mutableSessionEngagements; // @synthesize mutableSessionEngagements=_mutableSessionEngagements;
@property(readonly, nonatomic) int emailProvider; // @synthesize emailProvider=_emailProvider;
@property(readonly, nonatomic) unsigned int percentOfMessagesIndexed; // @synthesize percentOfMessagesIndexed=_percentOfMessagesIndexed;
@property(readonly, nonatomic) unsigned int numberOfMessagesLeftToIndex; // @synthesize numberOfMessagesLeftToIndex=_numberOfMessagesLeftToIndex;
- (void).cxx_destruct;
- (void)_addToLatestEngagementWithUserEngagement:(id)arg1;
- (void)_recordEngagement:(int)arg1 forMessage:(id)arg2 isTopHit:(_Bool)arg3 messageListIndex:(int)arg4 spotlightListIndex:(int)arg5;
- (void)recordUserDidRightClickMessage:(id)arg1;
- (void)recordUserDidSwipeMessage:(id)arg1;
- (void)recordUserDidOrbMessage:(id)arg1;
- (void)recordUserDidSelectMessage:(id)arg1;
- (void)recordUserDidRightClickMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(int)arg3 spotlightListIndex:(int)arg4;
- (void)recordUserDidSwipeMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(int)arg3 spotlightListIndex:(int)arg4;
- (void)recordUserDidOrbMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(int)arg3 spotlightListIndex:(int)arg4;
- (void)recordUserDidSelectMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(int)arg3 spotlightListIndex:(int)arg4;
- (void)_recordUserDidNotSelectAnyMessage;
- (void)updateLastEngagementSearchResultCount:(unsigned int)arg1;
- (void)addNewEngagementWithAWDAtoms:(id)arg1 searchScope:(_Bool)arg2 suggestionsEngagements:(id)arg3;
- (void)addNewEngagementWithAtoms:(id)arg1 searchScope:(_Bool)arg2 suggestionsEngagement:(id)arg3;
- (void)endSession;
@property(readonly, copy, nonatomic) NSArray *sessionEngagements;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end

