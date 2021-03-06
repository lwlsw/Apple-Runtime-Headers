//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLPowerTesterDelegate-Protocol.h>
#import <Carousel/CSLSPowerTester-Protocol.h>
#import <Carousel/NSXPCListenerDelegate-Protocol.h>

@class CSLClientConnections, NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSLPowerTestServer : NSObject <NSXPCListenerDelegate, CSLSPowerTester, CSLPowerTesterDelegate>
{
    CSLClientConnections *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_testQueue;
    NSMutableArray *_testers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *testers; // @synthesize testers=_testers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *testQueue; // @synthesize testQueue=_testQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) CSLClientConnections *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)tester:(id)arg1 cancelled:(id)arg2;
- (void)tester:(id)arg1 completed:(id)arg2;
- (void)startTest:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

