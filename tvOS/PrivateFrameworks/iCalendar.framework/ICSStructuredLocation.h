//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSData, NSString;

@interface ICSStructuredLocation : ICSProperty
{
}

- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
@property(retain, nonatomic) NSString *routing;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSData *mapKitHandle;
@property(retain, nonatomic) NSString *abURLString;
@property(nonatomic) double radius;
@property(retain, nonatomic) NSString *loctype;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *fmtype;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

