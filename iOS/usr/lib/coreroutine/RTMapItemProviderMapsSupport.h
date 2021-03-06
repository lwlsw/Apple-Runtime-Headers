//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTMapItemProviderBase.h>

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTMapItemProviderMapsSupportParameters, RTMapsSupportManager;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider>
{
    RTMapsSupportManager *_mapsSupportManager;
    RTMapItemProviderMapsSupportParameters *_parameters;
}

@property(readonly, copy, nonatomic) RTMapItemProviderMapsSupportParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) RTMapsSupportManager *mapsSupportManager; // @synthesize mapsSupportManager=_mapsSupportManager;
- (void).cxx_destruct;
- (double)confidenceFromMapItemSource:(unsigned long long)arg1;
- (id)mapItemsWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3 parameters:(id)arg4;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

