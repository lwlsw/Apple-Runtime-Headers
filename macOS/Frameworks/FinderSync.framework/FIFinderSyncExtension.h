//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderSync/FIFinderSyncController.h>

#import <FinderSync/FIFinderSyncExtensionProtocol-Protocol.h>

@class NSString;
@protocol FIFinderSyncExtensionHostProtocol;

__attribute__((visibility("hidden")))
@interface FIFinderSyncExtension : FIFinderSyncController <FIFinderSyncExtensionProtocol>
{
    id <FIFinderSyncExtensionHostProtocol> _host;
}

+ (id)singleton;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) id <FIFinderSyncExtensionHostProtocol> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)valuesForAttributes:(id)arg1 forItemWithURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchEndpointCreatingProxyForURL:(id)arg1;
- (void)supportedServiceNamesForItemWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestBadgeIdentifierForURL:(id)arg1;
- (void)stopWatchingDirectoryURL:(id)arg1;
- (void)startWatchingDirectoryURL:(id)arg1;
- (void)executeCommandWithMenuItemDictionary:(id)arg1 target:(id)arg2 items:(id)arg3;
- (void)executeCommand:(id)arg1 target:(id)arg2 items:(id)arg3;
- (void)requestMenuItemsForTarget:(id)arg1 selectedItems:(id)arg2 menu:(unsigned long long)arg3 result:(CDUnknownBlockType)arg4;
- (id)delegate;
- (void)cleanUp;
- (void)begin;
- (void)setUpSingletonAndHostPrincipal;
- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)initWithInputItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

