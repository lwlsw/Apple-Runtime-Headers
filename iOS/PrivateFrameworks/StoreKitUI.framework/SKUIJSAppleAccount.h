//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIJSAppleAccount-Protocol.h>

@class ACAccount, NSString;

__attribute__((visibility("hidden")))
@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount>
{
    ACAccount *_account;
    ACAccount *_nativeAccount;
}

@property(readonly) ACAccount *nativeAccount; // @synthesize nativeAccount=_nativeAccount;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *DSID;
@property(readonly, nonatomic) NSString *accountDescription;
- (id)initWithACAccount:(id)arg1;

@end

