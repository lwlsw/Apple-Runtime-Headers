//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthenticationServices/_ASExtensionViewController.h>

@class ASPasswordCredentialIdentity;
@protocol _ASPasswordCredentialAuthenticationViewControllerDelegate;

@interface _ASPasswordCredentialAuthenticationViewController : _ASExtensionViewController
{
    ASPasswordCredentialIdentity *_credentialIdentity;
    id <_ASPasswordCredentialAuthenticationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_ASPasswordCredentialAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishWithCredential:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_nonUIRequestDidRequireUserInteraction;
- (id)initWithExtension:(id)arg1 credentialIdentity:(id)arg2;

@end

