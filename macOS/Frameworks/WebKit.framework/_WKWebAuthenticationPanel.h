//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;
@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject <WKObject>
{
    struct ObjectStorage<API::WebAuthenticationPanel> _panel;
    struct WeakPtr<WebKit::WebAuthenticationPanelClient> _client;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
- (void)cancel;
@property(nonatomic) __weak id <_WKWebAuthenticationPanelDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *relyingPartyID;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

