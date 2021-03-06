//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface Client : NSObject
{
    long long _activeMessageCount;
    long long _barrierMessageCount;
    long long _droppedMessageCount;
    BOOL _shouldSendMessages;
    BOOL _forceUpdateOnWake;
    NSXPCConnection *_connection;
    NSMutableSet *_subscribedNOIs;
}

@property(retain, nonatomic) NSMutableSet *subscribedNOIs; // @synthesize subscribedNOIs=_subscribedNOIs;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_decrementMessageCounter:(long long)arg1;
- (void)_incrementMessageCounter:(long long)arg1;
- (void)_sendBarrierIfNecessaryWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldSendMessages;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)description;
- (id)initWithConn:(id)arg1;

@end

