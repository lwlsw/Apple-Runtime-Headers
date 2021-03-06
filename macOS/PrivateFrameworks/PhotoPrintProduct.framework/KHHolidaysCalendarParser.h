//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface KHHolidaysCalendarParser : NSObject
{
    unsigned long long _type;
    NSDictionary *_typeListForCountry;
    NSMutableDictionary *_resultDictionary;
}

+ (id)parseCalendarString:(id)arg1 type:(unsigned long long)arg2 typeListForCountry:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *resultDictionary; // @synthesize resultDictionary=_resultDictionary;
@property(copy, nonatomic) NSDictionary *typeListForCountry; // @synthesize typeListForCountry=_typeListForCountry;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_addEventWithName:(id)arg1 key:(id)arg2;
- (id)_parseCalendarString:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 typeListForCountry:(id)arg2;

@end

