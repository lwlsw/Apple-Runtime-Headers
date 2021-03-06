//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AVTUILogger;

@interface AVTUIStickerGeneratorPool : NSObject
{
    long long _maxCount;
    NSMutableDictionary *_availableStickerGenerators;
    NSMutableDictionary *_inUseStickerGenerators;
    id <AVTUILogger> _logger;
}

@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableDictionary *inUseStickerGenerators; // @synthesize inUseStickerGenerators=_inUseStickerGenerators;
@property(readonly, nonatomic) NSMutableDictionary *availableStickerGenerators; // @synthesize availableStickerGenerators=_availableStickerGenerators;
@property(readonly, nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
- (void)flush;
- (void)flushGeneratorForRecord:(id)arg1;
- (void)didStopUsingStickerGeneratorForRecord:(id)arg1;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)arg1 needAvatar:(_Bool)arg2;
- (id)stealGeneratorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 needAvatar:(_Bool)arg3;
- (id)generatorForAvatarRecord:(id)arg1 inGenerators:(id)arg2;
- (id)avatarForRecord:(id)arg1;
- (id)initWithMaxStickerGeneratorCount:(long long)arg1 logger:(id)arg2;

@end

