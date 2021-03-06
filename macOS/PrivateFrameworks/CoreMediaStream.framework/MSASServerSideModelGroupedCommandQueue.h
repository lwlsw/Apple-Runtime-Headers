//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/MSASGroupedQueue.h>

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue
{
    MSASEnqueuedCommand *_lastEnqueuedCommand;
}

+ (CDUnknownBlockType)calloutBlockForCommand:(id)arg1;
@property(retain, nonatomic) MSASEnqueuedCommand *lastEnqueuedCommand; // @synthesize lastEnqueuedCommand=_lastEnqueuedCommand;
- (void).cxx_destruct;
- (void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
- (void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
- (void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3;
- (void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3;
- (void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3;
- (void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3;
- (void)workQueueEnqueueCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (void)workQueueFlushQueue;
- (void)flushQueue;
- (BOOL)hasEnqueuedItems;

@end

