//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange, NSURL;

@interface EMMessageTransferAction : EMMessageChangeAction
{
    _Bool _copyMessages;
    NSURL *_destinationMailboxURL;
    int _specialDestinationMailboxType;
    ECMessageFlagChange *_flagChange;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool copyMessages; // @synthesize copyMessages=_copyMessages;
@property(readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(readonly, nonatomic) int specialDestinationMailboxType; // @synthesize specialDestinationMailboxType=_specialDestinationMailboxType;
@property(readonly, nonatomic) NSURL *destinationMailboxURL; // @synthesize destinationMailboxURL=_destinationMailboxURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)signpostType;
- (id)initWithMessageListItems:(id)arg1 specialDestinationMailboxType:(int)arg2 flagChange:(id)arg3 copyMessages:(_Bool)arg4;
- (id)initWithMessageListItems:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(_Bool)arg3;

@end

