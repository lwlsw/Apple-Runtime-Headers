//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol TVPMediaItem;

@interface _TVPMusicNowPlayingIdleViewControllerContext : NSObject
{
    _Bool _finished;
    id <TVPMediaItem> _mediaItem;
    UIViewController *_idleViewController;
}

@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) UIViewController *idleViewController; // @synthesize idleViewController=_idleViewController;
@property(readonly, nonatomic) id <TVPMediaItem> mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)finishWithIdleViewController:(id)arg1;
- (id)initWithMediaItem:(id)arg1;

@end

