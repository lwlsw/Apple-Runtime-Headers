//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSIOSVersion : NSObject
{
    long long _versionMajor;
    long long _versionMinor;
    long long _versionPatch;
    NSString *_versionString;
    NSString *_buildNumber;
}

@property(retain) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(retain) NSString *versionString; // @synthesize versionString=_versionString;
@property long long versionPatch; // @synthesize versionPatch=_versionPatch;
@property long long versionMinor; // @synthesize versionMinor=_versionMinor;
@property long long versionMajor; // @synthesize versionMajor=_versionMajor;
- (void).cxx_destruct;

@end

