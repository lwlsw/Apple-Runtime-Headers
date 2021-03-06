//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class CLLocation, EKEventMapCell, MKMapItemView, UIView;

@interface EKEventMapDetailItem : EKEventDetailItem
{
    EKEventMapCell *_cell;
    MKMapItemView *_mapView;
    UIView *_loadingView;
    CLLocation *_location;
    EKEventMapCell *_oldCell;
    _Bool _animationHasRan;
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;
}

@property(nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (void).cxx_destruct;
- (void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2;
- (double)_mapHeight;
- (void)_loadMapItem:(id)arg1 withCoordinateSpan:(CDStruct_c3b9c2ee)arg2;
- (void)setupMapView;
- (CDStruct_c3b9c2ee)_makeSpanWithCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 minRadius:(double)arg3;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;
- (void)updateViewColors;

@end

