//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLSMobileKeyBagObserver-Protocol.h>
#import <CarouselServices/CSLSUserAuthenticationModelDelegate-Protocol.h>

@class CSLSSecureBackupHelper, CSLSSoftwareUpdateStashHelper, CSLSUserAuthenticationModel, NSString;

@interface CSLSUserAuthenticationClient : NSObject <CSLSUserAuthenticationModelDelegate, CSLSMobileKeyBagObserver>
{
    CSLSUserAuthenticationModel *_model;
    CSLSSecureBackupHelper *_secureBackupHelper;
    CSLSSoftwareUpdateStashHelper *_suStashHelper;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLSSoftwareUpdateStashHelper *suStashHelper; // @synthesize suStashHelper=_suStashHelper;
@property(retain, nonatomic) CSLSSecureBackupHelper *secureBackupHelper; // @synthesize secureBackupHelper=_secureBackupHelper;
@property(retain, nonatomic) CSLSUserAuthenticationModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (void)deviceLockStateMayHaveChangedForModel:(id)arg1;
- (void)deviceLockModelRequestsDeviceWipe:(id)arg1;
- (_Bool)isBlocked;
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
- (void)requestClearBlockedState;
- (void)notePasscodeUnlockDidFailWithError:(id)arg1;
- (void)notePasscodeUnlockDidSucceedWithPasscode:(id)arg1;
- (void)notePasscodeEntryForUnlockDidCancel;
- (void)notePasscodeEntryForUnlockDidBegin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

