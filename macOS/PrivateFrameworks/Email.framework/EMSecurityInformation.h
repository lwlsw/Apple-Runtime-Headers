//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSArray, NSError;

@interface EMSecurityInformation : NSObject <NSSecureCoding>
{
    BOOL _isEncrypted;
    BOOL _hasEncryptedDescendantPart;
    NSArray *_signers;
    NSError *_smimeError;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(readonly, nonatomic) BOOL hasEncryptedDescendantPart; // @synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart;
@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(readonly, nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reevaluateTrustWithNetworkAccessAllowed;
@property(readonly, nonatomic) BOOL isSigned;
- (id)initWithSigners:(id)arg1 isEncrypted:(BOOL)arg2 hasEncryptedDescendantPart:(BOOL)arg3 smimeError:(id)arg4;

@end

