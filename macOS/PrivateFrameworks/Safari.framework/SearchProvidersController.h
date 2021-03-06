//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SearchProvider;

__attribute__((visibility("hidden")))
@interface SearchProvidersController : NSObject
{
    SearchProvider *_defaultProvider;
    NSArray *_providers;
}

+ (struct URLRequest)redirectToSafeSearchIfNeeded:(const struct URLRequest *)arg1;
+ (id)_internetServicesRegion;
+ (void)_getAllProviders:(id *)arg1 userVisibleProviders:(id *)arg2 newDefaultProvider:(id *)arg3;
+ (void)_getSortedSearchProviderList:(id *)arg1 andDefaultProvider:(id *)arg2 fromProviderList:(id)arg3;
+ (void)_sortSearchProviders:(id)arg1;
+ (id)sharedController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *providerList;
- (id)providerFromIdentifier:(id)arg1;
- (void)_setDefaultProvider:(id)arg1;
@property(retain, nonatomic) SearchProvider *defaultProvider;
- (BOOL)urlIsValidSearch:(id)arg1;
- (void)_setSystemDefaultProvider:(id)arg1;
- (void)_sendAllProvidersToWebKit;
- (void)_loadAllProviders;
- (id)initAndSendProvidersToWebKit:(BOOL)arg1;
- (id)init;

@end

