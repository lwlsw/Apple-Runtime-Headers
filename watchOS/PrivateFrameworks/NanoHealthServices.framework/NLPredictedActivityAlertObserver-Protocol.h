//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoHealthServices/NSObject-Protocol.h>

@class NLPredictedActivity;

@protocol NLPredictedActivityAlertObserver <NSObject>
- (void)hideAlertForPredictedActivityEnd:(NLPredictedActivity *)arg1;
- (void)showAlertForPredictedEndWorkoutActivity:(NLPredictedActivity *)arg1;
- (void)hideAlertForPredictedActivityStart:(NLPredictedActivity *)arg1;
- (void)showStartAlertForPredictedActivity:(NLPredictedActivity *)arg1;
@end

