//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUIActivation/NSObject-Protocol.h>

@class AFUISiriSetupViewController, NSURL;

@protocol AFUISiriSetupViewControllerDelegate <NSObject>
- (void)siriSetupViewControllerDidChangeVisibility:(AFUISiriSetupViewController *)arg1;
- (void)openSiriRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)disableSiriActivationRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (_Bool)siriSetupViewController:(AFUISiriSetupViewController *)arg1 openURL:(NSURL *)arg2;
- (void)dismissSiriSetupViewController:(AFUISiriSetupViewController *)arg1;
@end

