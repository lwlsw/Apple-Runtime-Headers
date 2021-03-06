//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimerUI/MTUIDateLabel.h>

@class NSCalendar, NSDate;

@interface MTUIDigitalClockLabel : MTUIDateLabel
{
    NSCalendar *_calendar;
    NSDate *_baseDate;
    long long _hour;
    long long _minute;
}

- (void).cxx_destruct;
- (void)setTimeLabelText:(id)arg1;
- (void)forceSetHour:(long long)arg1 minute:(long long)arg2;
- (_Bool)setHour:(long long)arg1 minute:(long long)arg2;
- (void)refreshUI;
- (void)resetFontSizes;
- (void)significantTimeChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

