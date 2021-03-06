//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SASHeaterDelegate;

@interface SASHeater : NSObject
{
    _Bool _predictedRecordRouteIsZLL;
    id <SASHeaterDelegate> _delegate;
    double _preparationStartTime;
    NSTimer *_defrostTimer;
    NSTimer *_preheatTimer;
}

@property(retain, nonatomic) NSTimer *preheatTimer; // @synthesize preheatTimer=_preheatTimer;
@property(retain, nonatomic) NSTimer *defrostTimer; // @synthesize defrostTimer=_defrostTimer;
@property(nonatomic) _Bool predictedRecordRouteIsZLL; // @synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL;
@property(nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime; // @synthesize preparationStartTime=_preparationStartTime;
@property(nonatomic) __weak id <SASHeaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updatePredictedRouteIsZLL;
- (void)_suggestPreheat;
- (void)_suggestDefrost;
- (void)_cancelPreparation;
- (void)cancelPreparation;
- (void)prepareForUseAfterTimeInterval:(double)arg1;

@end

