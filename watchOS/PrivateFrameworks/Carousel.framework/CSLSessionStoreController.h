//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSLSessionXPCServerDelegate, OS_dispatch_queue;

@interface CSLSessionStoreController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSLSessionXPCServerDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLSessionXPCServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_queue_processStoredSessions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeSession:(id)arg1;
- (void)updateSession:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;

@end

