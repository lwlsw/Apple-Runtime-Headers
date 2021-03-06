//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFDataAnalyticsModule;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemManager : HFItemManager
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFDataAnalyticsModule *_dataAnalyticsModule;
}

@property(readonly, nonatomic) HFDataAnalyticsModule *dataAnalyticsModule; // @synthesize dataAnalyticsModule=_dataAnalyticsModule;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;

@end

