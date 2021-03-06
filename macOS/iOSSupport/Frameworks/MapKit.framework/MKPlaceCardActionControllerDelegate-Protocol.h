//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceActionManager, MKPlaceCardActionsViewController, UIView;

@protocol MKPlaceCardActionControllerDelegate <NSObject>
- (void)placeCardActionControllerDidSelectReportAProblem:(MKPlaceCardActionsViewController *)arg1 fromView:(UIView *)arg2;
- (void)placeActionManager:(MKPlaceActionManager *)arg1 didSelectShareFromView:(UIView *)arg2;

@optional
- (void)placeCardActionControllerDidSelectionOpenBrandCard:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveMarker:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(MKPlaceCardActionsViewController *)arg1 fromView:(UIView *)arg2;
- (void)placeCardActionControllerDidSelectAddToCollection:(MKPlaceCardActionsViewController *)arg1 completion:(void (^)(void))arg2;
- (void)placeCardActionControllerDidSelectChangeAddress:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRefineLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromMapsHome:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToMapsHome:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddPhoto:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(MKPlaceCardActionsViewController *)arg1 fromView:(UIView *)arg2;
@end

