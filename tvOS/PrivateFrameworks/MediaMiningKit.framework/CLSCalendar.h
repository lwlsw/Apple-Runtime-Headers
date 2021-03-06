//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSCalendar : NSObject
{
}

+ (id)localStartSeasonDateForLocalDate:(id)arg1;
+ (_Bool)supportsSeasonsWithLocale:(id)arg1;
+ (_Bool)currentLocaleSupportsSeasons;
+ (_Bool)isLastMonthOfSeasonForLocalDate:(id)arg1;
+ (_Bool)isMiddleMonthOfSeasonForLocalDate:(id)arg1;
+ (_Bool)isFirstTenDaysOfSeasonForLocalDate:(id)arg1;
+ (_Bool)isFirstMonthOfSeasonForLocalDate:(id)arg1;
+ (_Bool)isSecondHalfOfSeasonForLocalDate:(id)arg1;
+ (id)seasonNameForLocalDate:(id)arg1 locale:(id)arg2;
+ (id)seasonNameForDateComponents:(id)arg1 locale:(id)arg2;
+ (_Bool)isCountryCodePartOfSouthernHemisphere:(id)arg1;
+ (_Bool)isCountryCodePartOfNorthernHemisphere:(id)arg1;
+ (id)s_seasonCountryCodesDictionary;
+ (id)southernMeteorologicalSeasonNameForDateComponents:(id)arg1;
+ (id)northernMeteorologicalSeasonNameForDateComponents:(id)arg1;
+ (id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4;
+ (_Bool)isFirstTwoWeeksOfMonthForLocalDate:(id)arg1;
+ (_Bool)isLastTwoWeeksOfMonthForLocalDate:(id)arg1;
+ (_Bool)isLastWeekOfMonthForLocalDate:(id)arg1;
+ (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
+ (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
+ (id)dateFromComponents:(unsigned long long)arg1 ofDate:(id)arg2;
+ (id)dateByAddingWeeksOfYear:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (long long)hourFromDate:(id)arg1;
+ (long long)dayOfWeekFromDate:(id)arg1;
+ (long long)dayFromDate:(id)arg1;
+ (long long)weekOfMonthFromDate:(id)arg1;
+ (long long)weekOfYearFromDate:(id)arg1;
+ (long long)monthFromDate:(id)arg1;
+ (long long)yearForWeekOfYearFromDate:(id)arg1;
+ (long long)yearFromDate:(id)arg1;
+ (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
+ (id)endOfWeekForDate:(id)arg1;
+ (id)startOfWeekForDate:(id)arg1;
+ (id)endOfDayForDate:(id)arg1;
+ (id)startOfDayForDate:(id)arg1;
+ (id)dateBySettingYear:(long long)arg1 ofDate:(id)arg2;
+ (id)localDateFromUniversalDate:(id)arg1 atLocation:(id)arg2;
+ (id)universalDateFromLocalDate:(id)arg1 atLocation:(id)arg2;
+ (id)localDateFromUniversalDate:(id)arg1;
+ (id)localDateFromUniversalDate:(id)arg1 inTimeZone:(id)arg2;
+ (id)universalDateFromLocalDate:(id)arg1;
+ (id)universalDateFromLocalDate:(id)arg1 inTimeZone:(id)arg2;
+ (id)componentsFromDate:(id)arg1 inTimeZone:(id)arg2;
+ (id)dateFromComponents:(id)arg1 inTimeZone:(id)arg2;
+ (id)dateComponentsWithLocalDate:(id)arg1;
+ (id)dateComponentsWithUTCDate:(id)arg1 localDate:(id)arg2;
+ (id)currentLocalDate;
+ (void)initialize;

@end

