//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLSBackgroundServiceDelegate-Protocol.h>
#import <CarouselServices/CSLSBackgroundTaskRequestServiceProtocol-Protocol.h>

@class CSLSPrivilegedBackgroundServiceConnection, NSString, Protocol;
@protocol CSLSBackgroundServiceAutoConnecting, OS_os_log;

@interface CSLSBackgroundTaskRequestService : NSObject <CSLSBackgroundServiceDelegate, CSLSBackgroundTaskRequestServiceProtocol>
{
    CSLSPrivilegedBackgroundServiceConnection *_connection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLSPrivilegedBackgroundServiceConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)registerPrivilegedBackgroundClient:(id)arg1 withPriority:(unsigned int)arg2 leeway:(double)arg3 usesBudget:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelBackgroundTaskRequestForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelBackgroundTaskRequestForBundleID:(id)arg1;
- (void)submitBackgroundTaskRequest:(id)arg1 forBundleID:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;
- (void)submitBackgroundTaskRequest:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitBackgroundTaskRequest:(id)arg1 forBundleID:(id)arg2;
- (id)init;
- (id)_init;
@property(readonly, nonatomic) Protocol<CSLSBackgroundServiceAutoConnecting> *remoteInterface;
@property(readonly, nonatomic) NSObject<OS_os_log> *log;
@property(readonly, nonatomic) NSString *serviceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

