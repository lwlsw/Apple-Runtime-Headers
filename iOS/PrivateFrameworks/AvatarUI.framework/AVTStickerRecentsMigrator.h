//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTUILogger;
@protocol AVTAvatarStoreInternal;

@interface AVTStickerRecentsMigrator : NSObject
{
    _Bool _migrationHasBeenPerformed;
    id <AVTAvatarStoreInternal> _store;
    AVTUILogger *_logger;
}

@property(nonatomic) _Bool migrationHasBeenPerformed; // @synthesize migrationHasBeenPerformed=_migrationHasBeenPerformed;
@property(nonatomic) AVTUILogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <AVTAvatarStoreInternal> store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)setNeedsMigrationOnNextLaunch;
- (void)performMigrationIfNeeded;
- (id)initWithStore:(id)arg1 environment:(id)arg2;

@end

