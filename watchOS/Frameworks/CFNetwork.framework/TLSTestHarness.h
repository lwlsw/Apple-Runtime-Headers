//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionDataDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLCredential, NSURLSession, NSURLSessionConfiguration;

@interface TLSTestHarness : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSessionConfiguration *_sessionConfig;
    NSMutableDictionary *_socketStreamProperties;
    NSURLSession *_session;
    NSMutableDictionary *_tasks;
    shared_ptr_a7890e8d _server;
    _Bool _enableTLSTrustChecks;
    _Bool _enableTLSClientCert;
    _Bool _enableTLSPSK;
    shared_ptr_3ed6bb45 _receivedServerTrust;
    _Bool _clientCertificateRequested;
    NSURLCredential *_clientCertificateSent;
}

@property(retain) NSURLCredential *clientCertificateSent; // @synthesize clientCertificateSent=_clientCertificateSent;
@property _Bool clientCertificateRequested; // @synthesize clientCertificateRequested=_clientCertificateRequested;
@property shared_ptr_3ed6bb45 receivedServerTrust; // @synthesize receivedServerTrust=_receivedServerTrust;
@property _Bool enableTLSClientCert; // @synthesize enableTLSClientCert=_enableTLSClientCert;
@property _Bool enableTLSTrustChecks; // @synthesize enableTLSTrustChecks=_enableTLSTrustChecks;
@property shared_ptr_a7890e8d server; // @synthesize server=_server;
@property(retain) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSMutableDictionary *socketStreamProperties; // @synthesize socketStreamProperties=_socketStreamProperties;
@property(retain) NSURLSessionConfiguration *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createSession;
- (id)fetchRequest:(id)arg1;
@property _Bool enableTLSPSK; // @synthesize enableTLSPSK=_enableTLSPSK;
- (void)dealloc;
- (id)initWithServer:(shared_ptr_a7890e8d)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

