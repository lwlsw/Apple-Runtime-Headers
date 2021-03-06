//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMediaUI/NSObject-Protocol.h>

@class MPAVItem, NMCMediaPlayerModelPlaybackController, NSError;

@protocol NMCMediaPlayerErrorHandler <NSObject>
- (void)playbackControllerDidPauseForLeaseEnd:(NMCMediaPlayerModelPlaybackController *)arg1;
- (void)playbackController:(NMCMediaPlayerModelPlaybackController *)arg1 didFailToPlayItem:(MPAVItem *)arg2 error:(NSError *)arg3 errorType:(int)arg4;
- (void)playbackController:(NMCMediaPlayerModelPlaybackController *)arg1 didFailToActivateWithError:(NSError *)arg2 resolution:(void (^)(_Bool))arg3;
@end

