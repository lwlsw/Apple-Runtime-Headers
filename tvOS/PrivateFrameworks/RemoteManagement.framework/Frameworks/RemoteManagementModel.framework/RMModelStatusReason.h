//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelStatusReason : RMModelPayloadBase
{
    NSString *_statusCode;
    NSString *_statusDescription;
    RMModelAnyPayload *_statusDetails;
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) RMModelAnyPayload *statusDetails; // @synthesize statusDetails=_statusDetails;
@property(copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

