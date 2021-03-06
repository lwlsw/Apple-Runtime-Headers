//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/NSObject-Protocol.h>

@class EKDayViewController, EKEvent, NSDate, NSDateComponents, UIViewController;

@protocol EKDayViewControllerDelegate <NSObject>
- (void)dayViewController:(EKDayViewController *)arg1 didChangeDisplayDate:(NSDateComponents *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 didSelectEvent:(EKEvent *)arg2 animated:(_Bool)arg3;

@optional
- (void)dayViewController:(EKDayViewController *)arg1 requestsSaveFirstVisibleSecondPreference:(int)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 requestsSaveHourScalePreference:(double)arg2;
- (double)dayViewControllerPersistedHourScalePreference:(EKDayViewController *)arg1;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 didChangeDisplayedOccurrencesDueToTrigger:(int)arg2;
- (void)dayViewControllerDidReloadData:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 didReloadDataDueToTrigger:(int)arg2;
- (void)dayViewControllerDidEndDecelerating:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 didStartDeceleratingTargettingDate:(NSDateComponents *)arg2;
- (void)dayViewControllerDidEndScrolling:(EKDayViewController *)arg1;
- (void)dayViewControllerDidUpdateScrollPosition:(EKDayViewController *)arg1;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;
- (void)dayViewControllerCurrentDayDidCompleteAsyncLoadAndLayout:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 requestsShowEvent:(EKEvent *)arg2 showDetails:(_Bool)arg3;
- (void)dayViewController:(EKDayViewController *)arg1 requestsPresentationOfViewControllerForGestures:(UIViewController *)arg2;
- (void)updateSelectedOccurrenceView;
- (void)dayViewControllerDidFinishPinchingDayView:(EKDayViewController *)arg1;
- (void)dayViewControllerIsPinchingDayView:(EKDayViewController *)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(EKDayViewController *)arg1;
- (_Bool)dayViewControllerShouldEndGestureEditingOnTap:(EKDayViewController *)arg1;
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(EKDayViewController *)arg1;
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 handleGestureCommittingOccurrence:(EKEvent *)arg2;
- (_Bool)delegateWantsToHandleDayViewController:(EKDayViewController *)arg1 gestureCommittingOccurrence:(EKEvent *)arg2;
- (void)dayViewControllerDidTapEmptySpace:(EKDayViewController *)arg1;
- (_Bool)dayViewControllerShouldAllowLongPress:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 awaitsDeletingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 awaitsRefreshingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 beginEditingOccurrence:(EKEvent *)arg2;
- (EKEvent *)dayViewController:(EKDayViewController *)arg1 createEventAtDate:(NSDate *)arg2 allDay:(_Bool)arg3;
@end

