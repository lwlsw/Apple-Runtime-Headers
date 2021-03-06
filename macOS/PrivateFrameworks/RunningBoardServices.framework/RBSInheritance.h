//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSDescriptionProviding-Protocol.h>
#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>
#import <RunningBoardServices/NSCopying-Protocol.h>

@class NSString, RBSAssertionIdentifier;
@protocol OS_xpc_object;

@interface RBSInheritance : NSObject <BSXPCSecureCoding, BSDescriptionProviding, NSCopying>
{
    struct NSString *_endowmentNamespace;
    NSString *_environment;
    NSObject<OS_xpc_object> *_encodedEndowment;
    RBSAssertionIdentifier *_originatingIdentifier;
    unsigned long long _originatingAttributePath;
    unsigned long long _hash;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property(readonly, nonatomic) unsigned long long originatingAttributePath; // @synthesize originatingAttributePath=_originatingAttributePath;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *originatingIdentifier; // @synthesize originatingIdentifier=_originatingIdentifier;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct NSObject *)endowment;
- (id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

