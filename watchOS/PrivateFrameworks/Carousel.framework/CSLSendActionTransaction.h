//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSTransaction.h>

#import <Carousel/FBSceneObserver-Protocol.h>

@class FBScene, FBSceneUpdateContext, NSSet, NSString;

@interface CSLSendActionTransaction : BSTransaction <FBSceneObserver>
{
    FBSceneUpdateContext *_context;
    FBScene *_scene;
    NSSet *_actions;
}

@property(readonly, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)_begin;
- (id)initWithScene:(id)arg1 actions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

