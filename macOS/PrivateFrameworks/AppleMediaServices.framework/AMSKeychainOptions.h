//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying>
{
    BOOL _regenerateKeys;
    NSString *_clientCertLabel;
    NSString *_intermediateCertLabel;
    NSString *_label;
    unsigned long long _purpose;
    unsigned long long _style;
    NSString *_prompt;
}

+ (unsigned long long)preferredAttestationStyle;
@property(copy) NSString *prompt; // @synthesize prompt=_prompt;
@property unsigned long long style; // @synthesize style=_style;
@property BOOL regenerateKeys; // @synthesize regenerateKeys=_regenerateKeys;
@property unsigned long long purpose; // @synthesize purpose=_purpose;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *intermediateCertLabel; // @synthesize intermediateCertLabel=_intermediateCertLabel;
@property(copy) NSString *clientCertLabel; // @synthesize clientCertLabel=_clientCertLabel;
- (void).cxx_destruct;
- (BOOL)_compareString:(id)arg1 withString:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)arg1;
- (id)init;

@end

