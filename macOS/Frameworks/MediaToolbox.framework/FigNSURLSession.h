//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

@interface FigNSURLSession : NSObject
{
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    id <NSURLSessionDataDelegate> _dataDelegate;
    NSOperationQueue *_opQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_clientBundleIdentifier;
    struct OpaqueFigCFWeakReferenceHolder *_weakAssertion;
    long long _doomTime;
    BOOL _doomCheckScheduled;
}

@property(nonatomic) BOOL doomCheckScheduled; // @synthesize doomCheckScheduled=_doomCheckScheduled;
@property(nonatomic) long long doomTime; // @synthesize doomTime=_doomTime;
@property(readonly, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSOperationQueue *opQueue; // @synthesize opQueue=_opQueue;
@property(readonly, nonatomic) id <NSURLSessionDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2;
- (void)debug;
@property(readonly, nonatomic) struct FigOpaqueAssertion *assertion;

@end

