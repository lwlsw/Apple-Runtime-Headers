//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResourceChangeToken-Protocol.h>

@class NSNotificationCenter, NSString;

@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken>
{
    NSString *_recordID;
    CDUnknownBlockType _changeHandler;
    NSNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)handleNotification:(id)arg1;
- (id)initWithEnvironment:(id)arg1 recordIdentifier:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

