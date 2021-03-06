//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUICore/_GKAlert.h>

#import <GameCenterUICore/NSTextFieldDelegate-Protocol.h>

@class NSButton, NSString, NSTextField, NSView;

@interface GKPasswordVerifyAlert : _GKAlert <NSTextFieldDelegate>
{
    long long _environment;
    NSView *_loginView;
    NSTextField *_accountLabel;
    NSTextField *_accountField;
    NSTextField *_passwordLabel;
    NSTextField *_passwordField;
    NSButton *_createAccountButton;
    NSButton *_forgotPasswordButton;
}

@property(retain) NSButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property(retain) NSButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) NSTextField *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(retain) NSTextField *accountField; // @synthesize accountField=_accountField;
@property(retain) NSTextField *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(retain) NSView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)invokeIForgot:(id)arg1;
- (void)createAppleID:(id)arg1;
- (void)dismiss;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)updateButtons;
- (void)setPassword:(id)arg1;
@property(readonly) NSString *password; // @dynamic password;
@property(copy) NSString *username; // @dynamic username;
- (id)initWithUsername:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

