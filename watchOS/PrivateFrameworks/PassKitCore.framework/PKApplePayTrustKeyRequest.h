//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding>
{
    NSString *_keyIdentifier;
    NSData *_subjectIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *subjectIdentifier; // @synthesize subjectIdentifier=_subjectIdentifier;
@property(readonly, nonatomic) NSString *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 subjectIdentifier:(id)arg2;

@end

