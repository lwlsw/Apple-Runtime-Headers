//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_domainGroupName;
    NSString *_domainName;
    NSString *_settingsClassName;
    NSString *_settingsBundlePath;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *settingsBundlePath; // @synthesize settingsBundlePath=_settingsBundlePath;
@property(readonly, nonatomic) NSString *settingsClassName; // @synthesize settingsClassName=_settingsClassName;
@property(readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) NSString *domainGroupName; // @synthesize domainGroupName=_domainGroupName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithDomain:(id)arg1;

@end

