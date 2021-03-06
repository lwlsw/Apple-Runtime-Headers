//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCStreaming-Protocol.h>

@class FCCloudContext, NSMutableOrderedSet, NSString, SFMoreResults, SFRankingFeedback;

@interface FCArticleSearchStream : NSObject <FCStreaming>
{
    BOOL _fetching;
    BOOL _finished;
    NSString *_keyboardInputMode;
    double _scale;
    NSString *_query;
    SFMoreResults *_moreResults;
    SFRankingFeedback *_rankingFeedback;
    FCCloudContext *_cloudContext;
    unsigned long long _parsecQueryID;
    NSMutableOrderedSet *_articleSearchResults;
}

@property(retain, nonatomic) NSMutableOrderedSet *articleSearchResults; // @synthesize articleSearchResults=_articleSearchResults;
@property(nonatomic) unsigned long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(retain, nonatomic) SFMoreResults *moreResults; // @synthesize moreResults=_moreResults;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL fetching; // @synthesize fetching=_fetching;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithParsecQueryID:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

