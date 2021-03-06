//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLClockFaceStatusViewControllerClient-Protocol.h>
#import <Carousel/CSLClockFaceStatusViewControllerServer-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CSLClockFaceStatusViewClientDelegate;

@interface CSLClockFaceStatusViewClient : NSObject <CSLClockFaceStatusViewControllerServer, CSLClockFaceStatusViewControllerClient>
{
    NSXPCConnection *_connection;
    id <CSLClockFaceStatusViewClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLClockFaceStatusViewClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)launchSessionAppForSessionType:(int)arg1;
- (void)showFinalStateAnimated:(_Bool)arg1;
- (void)prepareToAnimate;
- (void)didUpdateActiveStateNames:(id)arg1;
- (void)registerClientWithCompletion:(CDUnknownBlockType)arg1;
- (void)_connectionInvalidated;
- (id)client;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

