//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface BLHLSKey : NSObject
{
    long long _method;
    NSURL *_url;
    NSString *_keyFormat;
    NSString *_keyFormatVersions;
    NSString *_iv;
}

@property(readonly, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, nonatomic) NSString *keyFormatVersions; // @synthesize keyFormatVersions=_keyFormatVersions;
@property(readonly, nonatomic) NSString *keyFormat; // @synthesize keyFormat=_keyFormat;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long method; // @synthesize method=_method;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToHLSKey:(id)arg1;
- (id)description;
- (_Bool)isFormatSupported;
- (void)setPropertiesFromAttributeList:(id)arg1;

@end

