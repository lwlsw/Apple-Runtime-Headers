//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustKey : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSData *_signedEnrollmentData;
    NSData *_publicKeyHash;
    NSData *_certificate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly, copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(readonly, copy, nonatomic) NSData *signedEnrollmentData; // @synthesize signedEnrollmentData=_signedEnrollmentData;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

