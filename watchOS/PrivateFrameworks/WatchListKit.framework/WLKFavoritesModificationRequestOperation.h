//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation
{
    unsigned int _action;
    NSString *_entityID;
}

@property(readonly, copy, nonatomic) NSString *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) unsigned int action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithAction:(unsigned int)arg1 entityId:(id)arg2 caller:(id)arg3;

@end

