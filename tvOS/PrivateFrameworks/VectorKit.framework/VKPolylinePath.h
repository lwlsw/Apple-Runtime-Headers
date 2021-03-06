//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteSection, GEOSnappedRoutePath, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKPolylinePath : NSObject
{
    VKPolylineOverlay *_overlay;
    GEOComposedRouteSection *_section;
    GEOSnappedRoutePath *_snappedPath;
    vector_d9a07fc0 _points;
    struct optional<std::__1::vector<double, std::__1::allocator<double>>> _distances;
    _Bool _distanceSnapping;
    struct PolylineCoordinate _routeStart;
    struct PolylineCoordinate _routeEnd;
    double _startDistance;
    unsigned char _trafficSpeed;
    double _sectionLengthScaleFactor;
}

@property(nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property(nonatomic) unsigned char trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property(readonly, nonatomic) GEOComposedRouteSection *section; // @synthesize section=_section;
@property(readonly, nonatomic) GEOSnappedRoutePath *snappedPath; // @synthesize snappedPath=_snappedPath;
@property(nonatomic) struct PolylineCoordinate routeEnd; // @synthesize routeEnd=_routeEnd;
@property(nonatomic) struct PolylineCoordinate routeStart; // @synthesize routeStart=_routeStart;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(struct TrafficSegmentsAlongRoute *)arg2 shouldSnap:(_Bool)arg3;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;
- (void)updateDistances:(_Bool)arg1;
- (void)assignPoints:(Matrix_8746f91e *)arg1 count:(unsigned int)arg2;
- (id)description;
@property(readonly) _Bool isMapMatched;
@property(readonly) _Bool hasCompletedMapMatching;
@property(readonly, nonatomic) Matrix_8746f91e *points;
@property(readonly, nonatomic) unsigned int pointCount;
- (void)dealloc;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;

@end

