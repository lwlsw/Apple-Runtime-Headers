//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSStreamDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue, REHTTPConnectionDelegate;

@interface REHTTPConnection : NSObject <NSStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingResponse;
    NSMapTable *_pendingRequests;
    id <REHTTPConnectionDelegate> _delegate;
    struct _CFHTTPServerConnection *_connection;
}

@property(readonly, nonatomic) struct _CFHTTPServerConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <REHTTPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didCompleteResponse:(struct _CFHTTPServerResponse *)arg1 error:(id)arg2;
- (void)didRecieveRequest:(struct _CFHTTPServerRequest *)arg1;
- (void)didRecieveError:(id)arg1;
- (void)invalidated;
- (void)_sendResponse:(id)arg1;
- (void)_handleCompleteRequest:(id)arg1 stream:(id)arg2 error:(id)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (_Bool)open;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

