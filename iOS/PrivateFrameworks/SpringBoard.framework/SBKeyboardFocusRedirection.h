//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/BSSimpleAssertion.h>

@class BKSHIDEventDeferringToken;

@interface SBKeyboardFocusRedirection : BSSimpleAssertion
{
    int _fromProcessIdentifier;
    int _toProcessIdentifier;
    BKSHIDEventDeferringToken *_fromToken;
    BKSHIDEventDeferringToken *_toToken;
}

@property(copy, nonatomic) BKSHIDEventDeferringToken *toToken; // @synthesize toToken=_toToken;
@property(nonatomic) int toProcessIdentifier; // @synthesize toProcessIdentifier=_toProcessIdentifier;
@property(copy, nonatomic) BKSHIDEventDeferringToken *fromToken; // @synthesize fromToken=_fromToken;
@property(nonatomic) int fromProcessIdentifier; // @synthesize fromProcessIdentifier=_fromProcessIdentifier;
- (void).cxx_destruct;
- (id)description;

@end

