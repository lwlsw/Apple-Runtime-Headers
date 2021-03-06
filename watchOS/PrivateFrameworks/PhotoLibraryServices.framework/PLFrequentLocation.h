//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLFrequentLocationProtocol-Protocol.h>

@class NSDateInterval, NSSet, NSString;
@protocol PLMomentProtocol;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol>
{
    NSDateInterval *_dateInterval;
    id <PLMomentProtocol> _centroid;
    NSSet *_items;
    struct CLLocationCoordinate2D _coordinate;
}

@property(readonly) NSSet *items; // @synthesize items=_items;
@property(readonly) id <PLMomentProtocol> centroid; // @synthesize centroid=_centroid;
@property(readonly) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (_Bool)isWithinDistance:(double)arg1 toCoordinate:(struct CLLocationCoordinate2D)arg2;
- (_Bool)isSimilarToFrequentLocation:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDateInterval:(id)arg1 centroid:(id)arg2 items:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

