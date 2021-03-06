//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/CSLSBacklightObserver-Protocol.h>

@class CALayer, NSCalendar, NSString, NSTimer;

@interface NTKClockAnalogIconView : UIView <CSLSBacklightObserver>
{
    CALayer *_hours;
    CALayer *_minutes;
    CALayer *_seconds;
    CALayer *_dot;
    NSTimer *_timer;
    unsigned int _frameCount;
    NSCalendar *_calendar;
    _Bool _inWindow;
    _Bool _paused;
}

@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)_updateWithCalendarUnits:(unsigned int)arg1;
- (void)_timerFired:(id)arg1;
- (void)_handleTimeChange:(id)arg1;
- (void)_update;
- (void)_startOrStopUpdatesIfNecessary;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

