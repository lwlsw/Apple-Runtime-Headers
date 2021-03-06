//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/SidecarSessionDelegate-Protocol.h>

@protocol SidecarServiceProviderDelegate;

__attribute__((visibility("hidden")))
@interface SidecarProviderProxy : NSObject <SidecarSessionDelegate>
{
    id <SidecarServiceProviderDelegate> _delegate;
}

+ (id)defaultProxy;
@property(nonatomic) __weak id <SidecarServiceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sidecarServiceTerminate;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarSessionStarted:(id)arg1;
- (void)sidecarSession:(id)arg1 closedWithError:(id)arg2;
- (id)init;

@end

