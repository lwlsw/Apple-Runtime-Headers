//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileAsset/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MADownloadOptions : NSObject <NSSecureCoding>
{
    BOOL _allowsCellularAccess;
    BOOL _canUseLocalCacheServer;
    BOOL _discretionary;
    BOOL _allowsExpensiveAccess;
    BOOL _requiresPowerPluggedIn;
    BOOL _prefersInfraWiFi;
    long long _timeoutIntervalForResource;
    NSMutableDictionary *_additionalServerParams;
    NSString *_sessionId;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL prefersInfraWiFi; // @synthesize prefersInfraWiFi=_prefersInfraWiFi;
@property(nonatomic) BOOL requiresPowerPluggedIn; // @synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn;
@property(nonatomic) BOOL allowsExpensiveAccess; // @synthesize allowsExpensiveAccess=_allowsExpensiveAccess;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) BOOL discretionary; // @synthesize discretionary=_discretionary;
@property(retain, nonatomic) NSMutableDictionary *additionalServerParams; // @synthesize additionalServerParams=_additionalServerParams;
@property(nonatomic) BOOL canUseLocalCacheServer; // @synthesize canUseLocalCacheServer=_canUseLocalCacheServer;
@property(nonatomic) long long timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
- (void)logOptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

