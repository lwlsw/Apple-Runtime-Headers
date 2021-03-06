//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding>
{
    _Bool _secureTextEntry;
    NSString *_identifier;
    int _keyboardType;
    NSString *_prompt;
    int _returnKeyType;
    struct NSDictionary *_rtiPayload;
    NSString *_text;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(copy, nonatomic) NSDictionary *rtiPayload; // @synthesize rtiPayload=_rtiPayload;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithRTIPayload:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

