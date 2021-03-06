//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixThreeThreeSixSubBatchLayout : NFLSubBatchLayout
{
    NFLSingleComponentLayout *_largeComponent;
    NFLPairSubBatchLayout *_leftTopPairComponent;
    NFLPairSubBatchLayout *_leftBottomPairComponent;
    NFLPairSubBatchLayout *_rightTopPairComponent;
    NFLPairSubBatchLayout *_rightBottomPairComponent;
}

@property(retain, nonatomic) NFLPairSubBatchLayout *rightBottomPairComponent; // @synthesize rightBottomPairComponent=_rightBottomPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *rightTopPairComponent; // @synthesize rightTopPairComponent=_rightTopPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *leftBottomPairComponent; // @synthesize leftBottomPairComponent=_leftBottomPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *leftTopPairComponent; // @synthesize leftTopPairComponent=_leftTopPairComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *largeComponent; // @synthesize largeComponent=_largeComponent;
- (void).cxx_destruct;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)columnSpan;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (BOOL)isValid;

@end

