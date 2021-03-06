//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

@interface PKBillPaymentSuggestedAmount : NSObject
{
    NSString *_title;
    NSString *_message;
    unsigned long long _category;
    NSDecimalNumber *_amount;
    long long _priority;
    long long _merchantCategory;
}

@property(nonatomic) long long merchantCategory; // @synthesize merchantCategory=_merchantCategory;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAmount:(id)arg1 category:(unsigned long long)arg2;

@end

