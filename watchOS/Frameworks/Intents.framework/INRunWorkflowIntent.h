//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INRunWorkflowIntentExport-Protocol.h>

@class INArchivedObject, INSpeakableString, NSString;

@interface INRunWorkflowIntent : INIntent <INRunWorkflowIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
@property(copy, nonatomic) INArchivedObject *stepIntentResponse;
- (void)setWorkflow:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *workflow;
- (id)initWithWorkflow:(id)arg1;
- (id)_categoryVerb;
- (int)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

