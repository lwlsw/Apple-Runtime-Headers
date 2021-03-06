//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, NSArray, NSDictionary, NSError, NSMapTable;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation
{
    _Bool _streamFeedItems;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCDateRange *_dateRange;
    CDUnknownBlockType _feedItemsChangedHandler;
    NSArray *_feedItems;
    NSMapTable *_nonEditorialScoreProfiles;
    NSDictionary *_feedContextByFeedID;
    NSError *_error;
    long long _binOverride;
    CDUnknownBlockType _feedItemCompletionBlock;
    unsigned long long _maxNumberOfFeedsToQuery;
    unsigned long long _perFeedLimit;
}

@property(nonatomic) unsigned long long perFeedLimit; // @synthesize perFeedLimit=_perFeedLimit;
@property(nonatomic) unsigned long long maxNumberOfFeedsToQuery; // @synthesize maxNumberOfFeedsToQuery=_maxNumberOfFeedsToQuery;
@property(copy, nonatomic) CDUnknownBlockType feedItemCompletionBlock; // @synthesize feedItemCompletionBlock=_feedItemCompletionBlock;
@property(nonatomic) long long binOverride; // @synthesize binOverride=_binOverride;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(retain) NSMapTable *nonEditorialScoreProfiles; // @synthesize nonEditorialScoreProfiles=_nonEditorialScoreProfiles;
@property(copy) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) CDUnknownBlockType feedItemsChangedHandler; // @synthesize feedItemsChangedHandler=_feedItemsChangedHandler;
@property(nonatomic) _Bool streamFeedItems; // @synthesize streamFeedItems=_streamFeedItems;
@property(copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_appendFeedItems:(id)arg1;
- (void)_fetchTagsForQueryingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
@property(readonly, copy) NSArray *nonEditorialFeedItems;
- (id)init;

@end

