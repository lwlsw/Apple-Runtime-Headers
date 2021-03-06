//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFStartSearchFeedback : SFFeedback
{
    NSString *_input;
    NSString *_uuid;
    unsigned int _triggerEvent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned int)arg2 queryId:(unsigned long long)arg3;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned int)arg2;

@end

