//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSArray, REMObjectID, REMRecurrenceEnd;

@interface REMRecurrenceRule : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>
{
    REMRecurrenceEnd *_recurrenceEnd;
    long long _frequency;
    long long _interval;
    long long _firstDayOfTheWeek;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_reminderID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (int)_convertREMRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1;
+ (id)nextRecurrentDueDateAfter:(id)arg1 dueDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 recurrenceRules:(id)arg5;
+ (id)iCalendarValueFromWeekday:(long long)arg1;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromRecurrenceType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) REMObjectID *reminderID; // @synthesize reminderID=_reminderID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSArray *setPositions; // @synthesize setPositions=_setPositions;
@property(readonly, nonatomic) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear=_monthsOfTheYear;
@property(readonly, nonatomic) NSArray *weeksOfTheYear; // @synthesize weeksOfTheYear=_weeksOfTheYear;
@property(readonly, nonatomic) NSArray *daysOfTheYear; // @synthesize daysOfTheYear=_daysOfTheYear;
@property(readonly, nonatomic) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth=_daysOfTheMonth;
@property(readonly, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(readonly, nonatomic) long long firstDayOfTheWeek; // @synthesize firstDayOfTheWeek=_firstDayOfTheWeek;
@property(readonly, nonatomic) long long interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, copy, nonatomic) REMRecurrenceEnd *recurrenceEnd; // @synthesize recurrenceEnd=_recurrenceEnd;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (id)iCalendarDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToRecurrenceRule:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 end:(id)arg3;
- (id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4;
- (id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 firstDayOfTheWeek:(long long)arg6 daysOfTheWeek:(id)arg7 daysOfTheMonth:(id)arg8 monthsOfTheYear:(id)arg9 weeksOfTheYear:(id)arg10 daysOfTheYear:(id)arg11 setPositions:(id)arg12 end:(id)arg13;
- (id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 end:(id)arg6;

@end

