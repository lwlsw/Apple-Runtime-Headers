//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemExtensions/NSXPCListenerDelegate-Protocol.h>
#import <SystemExtensions/_OSSystemExtensionPointInterface-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OSSystemExtensionPointListenerDelegate;

@interface OSSystemExtensionPointListener : NSObject <NSXPCListenerDelegate, _OSSystemExtensionPointInterface>
{
    struct os_unfair_lock_s lock;
    id <OSSystemExtensionPointListenerDelegate> _delegate;
    NSXPCListener *_listener;
    NSXPCConnection *_currentConnection;
}

@property(retain, nonatomic) NSXPCConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property id <OSSystemExtensionPointListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)terminateExtension:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)startExtension:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)willReplaceExtension:(id)arg1 withExtension:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)willUninstallExtension:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)willTerminateExtension:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)willStartExtension:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)validateExtension:(id)arg1 atTemporaryBundleURL:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_connectionDead:(id)arg1;
- (void)_connectionInvalidated:(id)arg1;
- (void)_connectionInterrupted:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)initForTestingWithListener:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

