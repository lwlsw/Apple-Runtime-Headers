//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>
#import <NewsUI/SVVideoViewControllerConfiguration-Protocol.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration>
{
    _Bool _preferredMuteState;
    _Bool _pagingAllowed;
    _Bool _sharingEnabled;
    NUVideoViewControllerAdConfiguration *_adConfiguration;
}

@property(readonly, copy, nonatomic) NUVideoViewControllerAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(readonly, nonatomic, getter=isSharingEnabled) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic, getter=isPagingAllowed) _Bool pagingAllowed; // @synthesize pagingAllowed=_pagingAllowed;
@property(readonly, nonatomic) _Bool preferredMuteState; // @synthesize preferredMuteState=_preferredMuteState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSharingEnabled:(_Bool)arg1 preferredMuteState:(_Bool)arg2 pagingAllowed:(_Bool)arg3 adConfiguration:(id)arg4;
- (id)init;

@end

