//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject
{
    long long _version;
    NSURL *_messagesBundleURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *messagesBundleURL; // @synthesize messagesBundleURL=_messagesBundleURL;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

