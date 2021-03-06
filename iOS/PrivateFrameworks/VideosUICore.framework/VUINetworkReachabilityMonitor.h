//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUINetworkReachabilityMonitor : NSObject
{
    _Bool _networkReachable;
    id _networkTypeChangedNotificationToken;
    id _networkReachabilityChangedNotificationToken;
}

+ (_Bool)_isNetworkReachable;
+ (id)sharedInstance;
@property(retain, nonatomic) id networkReachabilityChangedNotificationToken; // @synthesize networkReachabilityChangedNotificationToken=_networkReachabilityChangedNotificationToken;
@property(retain, nonatomic) id networkTypeChangedNotificationToken; // @synthesize networkTypeChangedNotificationToken=_networkTypeChangedNotificationToken;
- (void).cxx_destruct;
@property(getter=isNetworkReachable) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
- (void)_updateNetworkReachability;
- (id)_init;
- (id)init;

@end

