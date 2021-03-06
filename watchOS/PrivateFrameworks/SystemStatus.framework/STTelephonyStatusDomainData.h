//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/NSSecureCoding-Protocol.h>
#import <SystemStatus/STStatusDomainData-Protocol.h>
#import <SystemStatus/STStatusDomainDataDifferencing-Protocol.h>

@class NSString, STTelephonyStatusDomainSIMInfo;

@interface STTelephonyStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>
{
    STTelephonyStatusDomainSIMInfo *_SIMOneInfo;
    STTelephonyStatusDomainSIMInfo *_SIMTwoInfo;
    _Bool _cellularRadioCapabilityEnabled;
    _Bool _dualSIMEnabled;
    _Bool _radioModuleDead;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRadioModuleDead) _Bool radioModuleDead; // @synthesize radioModuleDead=_radioModuleDead;
@property(readonly, nonatomic, getter=isDualSIMEnabled) _Bool dualSIMEnabled; // @synthesize dualSIMEnabled=_dualSIMEnabled;
@property(readonly, nonatomic, getter=isCellularRadioCapabilityEnabled) _Bool cellularRadioCapabilityEnabled; // @synthesize cellularRadioCapabilityEnabled=_cellularRadioCapabilityEnabled;
@property(readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo; // @synthesize SIMTwoInfo=_SIMTwoInfo;
@property(readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo; // @synthesize SIMOneInfo=_SIMOneInfo;
- (void).cxx_destruct;
- (id)_anySIMInfoWithSIMPresent;
- (id)_dataPreferredSIMInfoIfSIMPresent;
- (id)_otherSIMInfoIfSIMPresent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property(readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
- (id)initWithSIMOneInfo:(id)arg1 SIMTwoInfo:(id)arg2 cellularRadioCapabilityEnabled:(_Bool)arg3 dualSIMEnabled:(_Bool)arg4 radioModuleDead:(_Bool)arg5;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

