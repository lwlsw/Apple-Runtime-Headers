//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TrustedPeers/NSObject-Protocol.h>

@class NSData;
@protocol TPPublicKey;

@protocol TPKeyPair <NSObject>
- (NSData *)signatureForData:(NSData *)arg1 withError:(id *)arg2;
- (id <TPPublicKey>)publicKey;
@end

