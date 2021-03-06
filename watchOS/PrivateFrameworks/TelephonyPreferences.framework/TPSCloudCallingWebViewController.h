//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TelephonyPreferences/UIWebViewDelegate-Protocol.h>

@class NSData, NSString, NSURL, UIActivityIndicatorView, UIWebView;

@interface TPSCloudCallingWebViewController : UIViewController <UIWebViewDelegate>
{
    int _type;
    UIWebView *_webView;
    CDUnknownBlockType _completionBlock;
    UIActivityIndicatorView *_activityIndicator;
    NSURL *_url;
    NSData *_body;
}

@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setupControllerInWebFrame:(id)arg1;
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)doWebViewTimedOut;
- (void)doProvisioningFailed;
- (void)doProvisioningCanceled;
- (void)doProvisioningDone;
- (void)_cancelButtonClicked:(id)arg1;
- (void)cancelWebView;
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadWebViewWithSpinner:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPresentingURL) _Bool presentingURL;
- (void)loadView;
- (id)initWithType:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

