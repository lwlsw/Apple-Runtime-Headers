//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PLURIWithHash : NSObject
{
    NSObject<OS_xpc_object> *_uri;
    unsigned long long _uriHash;
}

@property(nonatomic) unsigned long long uriHash; // @synthesize uriHash=_uriHash;
@property(retain, nonatomic) NSObject<OS_xpc_object> *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)initWithXPCURI:(id)arg1;
- (id)init;

@end

