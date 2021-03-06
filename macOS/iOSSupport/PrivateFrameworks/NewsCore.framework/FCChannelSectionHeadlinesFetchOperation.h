//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSString;
@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation
{
    CDUnknownBlockType _fetchCompletionHandler;
    FCCloudContext *_cloudContext;
    NSString *_channelID;
    unsigned long long _maxHeadlinesCount;
    unsigned long long _maxHeadlinesPerFeed;
    double _fetchWindow;
    double _sectionsCacheTimeToLive;
    id <FCChannelProviding> _channel;
    NSArray *_sectionHeadlinesGroups;
}

@property(copy, nonatomic) NSArray *sectionHeadlinesGroups; // @synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups;
@property(readonly, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) double sectionsCacheTimeToLive; // @synthesize sectionsCacheTimeToLive=_sectionsCacheTimeToLive;
@property(readonly, nonatomic) double fetchWindow; // @synthesize fetchWindow=_fetchWindow;
@property(readonly, nonatomic) unsigned long long maxHeadlinesPerFeed; // @synthesize maxHeadlinesPerFeed=_maxHeadlinesPerFeed;
@property(readonly, nonatomic) unsigned long long maxHeadlinesCount; // @synthesize maxHeadlinesCount=_maxHeadlinesCount;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (void).cxx_destruct;
- (id)_feedItemsTransformationWithConfiguration:(id)arg1;
- (id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3;
- (id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2;
- (id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3;
- (id)_feedItemsPromiseWithChannel:(id)arg1 configuration:(id)arg2;
- (id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2;
- (id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2;
- (id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1;
- (id)_configurationPromise;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(double)arg5 sectionsCacheTimeToLive:(double)arg6;
- (id)init;

@end

