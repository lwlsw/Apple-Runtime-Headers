//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ConnectionProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface APConnectionNotifier : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_underlyingRemoteConnection;
}

+ (id)sharedNotifier;
@property(retain, nonatomic) NSXPCConnection *underlyingRemoteConnection; // @synthesize underlyingRemoteConnection=_underlyingRemoteConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (id)_remoteConnection;
@property(readonly, nonatomic) id <ConnectionProtocol> remoteObjectProxy;
- (id)init;

@end

