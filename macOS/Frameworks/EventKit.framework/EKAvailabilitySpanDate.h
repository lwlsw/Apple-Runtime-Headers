//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface EKAvailabilitySpanDate : NSObject
{
    NSDate *_spanDate;
    long long _dateType;
    long long _spanType;
}

+ (unsigned int)valueForSpanType:(long long)arg1;
@property long long spanType; // @synthesize spanType=_spanType;
@property long long dateType; // @synthesize dateType=_dateType;
@property(retain, nonatomic) NSDate *spanDate; // @synthesize spanDate=_spanDate;
- (void).cxx_destruct;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3;

@end

