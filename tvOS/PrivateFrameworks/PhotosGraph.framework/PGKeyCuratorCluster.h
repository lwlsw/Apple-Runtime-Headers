//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol CLSInvestigationItem;

@interface PGKeyCuratorCluster : NSObject
{
    NSArray *_subclusters;
    id <CLSInvestigationItem> _keyItem;
    double _score;
}

@property(readonly) double score; // @synthesize score=_score;
@property(readonly) id <CLSInvestigationItem> keyItem; // @synthesize keyItem=_keyItem;
@property(readonly) NSArray *subclusters; // @synthesize subclusters=_subclusters;
- (void).cxx_destruct;
- (id)initWithSubclusters:(id)arg1 keyItem:(id)arg2 score:(double)arg3;

@end

