//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject
{
    REMXPCDaemonController *_daemonController;
}

@property(retain, nonatomic) REMXPCDaemonController *daemonController; // @synthesize daemonController=_daemonController;
- (void).cxx_destruct;
- (void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncCloudKitWithReason:(id)arg1 discretionary:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDaemonController:(id)arg1;
- (id)init;

@end

