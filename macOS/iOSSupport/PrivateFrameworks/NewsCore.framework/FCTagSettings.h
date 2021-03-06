//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSMutableDictionary;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject
{
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id <FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
@property(nonatomic) __weak id <FCTagSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSMutableDictionary *tagSettingsEntriesByTagID; // @synthesize tagSettingsEntriesByTagID=_tagSettingsEntriesByTagID;
- (void).cxx_destruct;
- (id)allTagSettingsRecords;
- (id)allTagSettingsRecordNames;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1;
- (void)handleSyncWithTagSettingsRecord:(id)arg1;
- (id)webAccessOptedInTagIDs;
- (void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(BOOL)arg2;
- (id)authenticatedAccessTokensByTagID;
- (id)accessTokenForTagID:(id)arg1;
- (void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(BOOL)arg3;
- (id)contentScaleForTagID:(id)arg1;
- (void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2;
- (id)fontSizeForTagID:(id)arg1;
- (void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2;
- (void)syncForTagID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2;

@end

