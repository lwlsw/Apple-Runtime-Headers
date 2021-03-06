//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation
{
    NSString *_cellularProviderName;
    NSString *_mobileSubscriberCountryCode;
    NSString *_mobileSubscriberNetworkCode;
    NSString *_phoneNumber;
    NSString *_IMEI;
    _Bool _deepLink;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic, getter=isDeepLink) _Bool deepLink; // @synthesize deepLink=_deepLink;
@property(readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void).cxx_destruct;
- (void)_sendSilentSMSRequestWithMessage:(id)arg1 number:(id)arg2 preflightResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_sendPreflightRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendEnrichmentRequestWithURL:(id)arg1 preflightResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)arg1 error:(id)arg2;
- (id)_newDefaultRequestBodyDictionary;
- (void)_finishEnrichmentWithBodyDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)execute;
- (id)initWithRequestContext:(id)arg1;

@end

