//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoPlaybackPolicy;

@protocol SVVideoPlaybackPolicyObserving <NSObject>
@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> policy;
@property(copy, nonatomic, setter=onAllowedStateChange:) CDUnknownBlockType allowedStateChangeBlock;
@property(copy, nonatomic, setter=onRequestStateChange:) CDUnknownBlockType requestStateChangeBlock;
@end

