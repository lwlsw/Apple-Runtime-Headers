//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVPlayback/TVPSecureKeyLoader.h>

@class TVLJavaScriptContext;

@interface TVLSecureKeyJavascriptLoader : TVPSecureKeyLoader
{
    TVLJavaScriptContext *_javaScriptContext;
}

@property(retain, nonatomic) TVLJavaScriptContext *javaScriptContext; // @synthesize javaScriptContext=_javaScriptContext;
- (void).cxx_destruct;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingCertificateDataForRequest:(id)arg1;
- (void)_callFunctionWithName:(id)arg1 withData:(id)arg2 request:(id)arg3 successHandler:(CDUnknownBlockType)arg4;
- (long long)_errorCodeForFailureOfFunctionWithName:(id)arg1;
- (unsigned long long)_numberOfArgumentsForSuccessCallbackForFunctionWithName:(id)arg1;
- (id)initWithJavaScriptContext:(id)arg1;

@end

