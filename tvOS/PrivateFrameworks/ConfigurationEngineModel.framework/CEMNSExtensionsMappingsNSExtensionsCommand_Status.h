//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_Status : CEMPayloadBase
{
    NSArray *_statusExtensions;
}

+ (id)buildRequiredOnlyWithExtensions:(id)arg1;
+ (id)buildWithExtensions:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusExtensions; // @synthesize statusExtensions=_statusExtensions;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

