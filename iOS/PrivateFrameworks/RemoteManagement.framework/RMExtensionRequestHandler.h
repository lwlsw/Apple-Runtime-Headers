//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSExtensionRequestHandling-Protocol.h>
#import <RemoteManagement/RMExtensionConfigurationSubscriberRequestHandling-Protocol.h>
#import <RemoteManagement/RMExtensionStatusPublisherRequestHandling-Protocol.h>

@class NSString, RMExtensionConfigurationSubscriber;

@interface RMExtensionRequestHandler : NSObject <NSExtensionRequestHandling, RMExtensionConfigurationSubscriberRequestHandling, RMExtensionStatusPublisherRequestHandling>
{
    RMExtensionConfigurationSubscriber *_configurationSubscriber;
}

@property(readonly, nonatomic) RMExtensionConfigurationSubscriber *configurationSubscriber; // @synthesize configurationSubscriber=_configurationSubscriber;
- (void).cxx_destruct;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)initWithConfigurationSubscriber:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

