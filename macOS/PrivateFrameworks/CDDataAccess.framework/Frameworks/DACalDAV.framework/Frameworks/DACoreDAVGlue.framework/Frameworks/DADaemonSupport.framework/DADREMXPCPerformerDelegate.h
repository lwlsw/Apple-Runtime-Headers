//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DADREMXPCPerformerDelegate : NSObject
{
    BOOL _finished;
    NSString *_accountID;
    NSString *_delegateID;
    CDUnknownBlockType _remXPCCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType remXPCCompletion; // @synthesize remXPCCompletion=_remXPCCompletion;
@property(retain, nonatomic) NSString *delegateID; // @synthesize delegateID=_delegateID;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (id)initWithAccountID:(id)arg1;

@end

