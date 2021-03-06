//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDWHAAccessControlEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _isP2PEnabled;
    BOOL _isPasswordSet;
    int _privilegeLevel;
}

+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)arg1;
+ (id)eventWithP2PEnabled:(BOOL)arg1 privilegeLevel:(long long)arg2 passwordSet:(BOOL)arg3;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic) BOOL isPasswordSet; // @synthesize isPasswordSet=_isPasswordSet;
@property(nonatomic) int privilegeLevel; // @synthesize privilegeLevel=_privilegeLevel;
@property(nonatomic) BOOL isP2PEnabled; // @synthesize isP2PEnabled=_isP2PEnabled;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

