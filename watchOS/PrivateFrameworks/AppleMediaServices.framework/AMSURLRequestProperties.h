//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSMutableCopying-Protocol.h>

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, AMSPurchaseContext, NSDictionary, NSMutableDictionary, NSString;
@protocol AMSBagProtocol, AMSResponseDecoding;

__attribute__((visibility("hidden")))
@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _disableLoadURLMetrics;
    _Bool _knownToBeTrusted;
    _Bool _disableResponseDecoding;
    _Bool _shouldSetCookiesFromResponse;
    _Bool _shouldSetStorefrontFromResponse;
    ACAccount *_account;
    NSDictionary *_additionalMetrics;
    int _anisetteType;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    int _dialogOptions;
    AMSKeychainOptions *_keychainOptions;
    NSString *_logUUID;
    int _maxRetryCount;
    int _mescalType;
    AMSPurchaseContext *_purchaseContext;
    id <AMSResponseDecoding> _responseDecoder;
    int _reversePushType;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool shouldSetStorefrontFromResponse; // @synthesize shouldSetStorefrontFromResponse=_shouldSetStorefrontFromResponse;
@property(nonatomic) _Bool shouldSetCookiesFromResponse; // @synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse;
@property(nonatomic) int reversePushType; // @synthesize reversePushType=_reversePushType;
@property(nonatomic) _Bool disableResponseDecoding; // @synthesize disableResponseDecoding=_disableResponseDecoding;
@property(retain, nonatomic) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property(retain, nonatomic) AMSPurchaseContext *purchaseContext; // @synthesize purchaseContext=_purchaseContext;
@property(nonatomic) int mescalType; // @synthesize mescalType=_mescalType;
@property(nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) _Bool knownToBeTrusted; // @synthesize knownToBeTrusted=_knownToBeTrusted;
@property(retain, nonatomic) AMSKeychainOptions *keychainOptions; // @synthesize keychainOptions=_keychainOptions;
@property(nonatomic) _Bool disableLoadURLMetrics; // @synthesize disableLoadURLMetrics=_disableLoadURLMetrics;
@property(nonatomic) int dialogOptions; // @synthesize dialogOptions=_dialogOptions;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(nonatomic) int anisetteType; // @synthesize anisetteType=_anisetteType;
@property(retain, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

