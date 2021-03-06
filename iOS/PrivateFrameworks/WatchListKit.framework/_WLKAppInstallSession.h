//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString, SSLookupItemOffer;
@protocol OS_dispatch_queue, WLKInstallable;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressHandler;
    id <WLKInstallable> _installable;
    SSLookupItemOffer *_offer;
}

+ (id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2;
@property(readonly, nonatomic) SSLookupItemOffer *offer; // @synthesize offer=_offer;
@property(readonly, nonatomic) id <WLKInstallable> installable; // @synthesize installable=_installable;
- (void).cxx_destruct;
- (_Bool)_canOpenAppWithBundleID:(id)arg1;
- (void)_sendCompletionWithError:(id)arg1;
- (void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2;
- (void)beginInstallationWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)dealloc;
- (id)initWithInstallable:(id)arg1 offer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

