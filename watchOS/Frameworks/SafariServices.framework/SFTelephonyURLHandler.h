//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLHandler : NSObject
{
    NSMutableSet *_pendingRequests;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void).cxx_destruct;
- (void)removeObserverForRequest:(id)arg1;
- (void)addObserverForRequest:(id)arg1;
- (_Bool)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

