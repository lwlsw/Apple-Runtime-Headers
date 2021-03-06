//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CSLSessionXPCServerDelegate;

@interface CSLBackgroundSessionTracker : NSObject
{
    NSMutableDictionary *_activeBackgroundSessions;
    NSMutableDictionary *_inactiveBackgroundSessions;
    struct os_unfair_recursive_lock_s _lock;
    id <CSLSessionXPCServerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <CSLSessionXPCServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopBackgroundSession:(id)arg1 remove:(_Bool)arg2;
- (void)_backgroundSession:(id)arg1 endedWithError:(id)arg2;
- (void)startBackgroundSession:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithSessionDelegate:(id)arg1;

@end

