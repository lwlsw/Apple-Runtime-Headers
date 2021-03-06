//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding>
{
    NSString *_itemIdentifier;
    int _selectionType;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) int selectionType; // @synthesize selectionType=_selectionType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

