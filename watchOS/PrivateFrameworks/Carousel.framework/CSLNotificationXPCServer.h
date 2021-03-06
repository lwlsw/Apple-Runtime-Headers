//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLSNotificationServiceServerExportedInterface-Protocol.h>
#import <Carousel/NSXPCListenerDelegate-Protocol.h>

@class CSLSafeMutableSet, NSString, NSXPCListener;
@protocol CSLNotificationXPCServerDelegate;

@interface CSLNotificationXPCServer : NSObject <NSXPCListenerDelegate, CSLSNotificationServiceServerExportedInterface>
{
    id <CSLNotificationXPCServerDelegate> _delegate;
    CSLSafeMutableSet *_clientConnections;
    NSXPCListener *_listener;
}

@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) CSLSafeMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(nonatomic) __weak id <CSLNotificationXPCServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNotificationsLevel:(int)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getNotificationSettings:(CDUnknownBlockType)arg1;
- (void)removeSectionWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearNotificationWithSectionID:(id)arg1 publisherMatchID:(id)arg2 feed:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeNotificationWithSectionID:(id)arg1 publisherMatchID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getLockedNotificationsInPipelineStepActorWithClassName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNotificationWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 delayLocal:(unsigned int)arg4 delayMirrored:(unsigned int)arg5 clearable:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_removeClientConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

