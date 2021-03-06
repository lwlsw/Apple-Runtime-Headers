//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface USBudget : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSSet *_categoryIdentifiers;
    NSSet *_bundleIdentifiers;
    NSSet *_webDomains;
    NSString *_calendarIdentifier;
    NSDictionary *_schedule;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSDictionary *schedule; // @synthesize schedule=_schedule;
@property(readonly, copy) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy) NSSet *webDomains; // @synthesize webDomains=_webDomains;
@property(readonly, copy) NSSet *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(readonly, copy) NSSet *categoryIdentifiers; // @synthesize categoryIdentifiers=_categoryIdentifiers;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *items;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5;
- (id)initWithCategories:(id)arg1 applications:(id)arg2 webDomains:(id)arg3 schedule:(id)arg4 calendarIdentifier:(id)arg5 identifier:(id)arg6;

@end

