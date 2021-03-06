//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLNotification : NSObject
{
    long long _notificationType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    BOOL _mainAssetIsMine;
    BOOL _mainAssetIsVideo;
    BOOL _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    long long _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    long long _commentCount;
    BOOL _commentIsCaption;
    BOOL _suppressAlert;
    NSMutableSet *_senderNames;
    BOOL _forMultipleAsset;
    BOOL _allMultipleAssetIsMine;
    BOOL _isMixedType;
    BOOL _offerToReportAsJunk;
    NSString *_interestingMemoryUUID;
    NSString *_notificationTitle;
    NSString *_notificationSubtitle;
    NSString *_suggestedCMMUUID;
    NSString *_keyMomentShareUUID;
    NSArray *_momentShareUUIDs;
    NSString *_albumUUID;
    NSString *_albumCloudGUID;
    NSDate *_date;
    NSDate *_originalDate;
    NSDate *_expirationDate;
    NSDate *_notificationDeliveryDate;
    NSData *_thumbnailImageData;
}

+ (id)_UNCategoryFromNotificationType:(long long)arg1;
+ (id)requestIdentifierByNotificationType:(long long)arg1 keyObjectUUID:(id)arg2 photosBatchID:(id)arg3;
@property(readonly) NSString *commentText; // @synthesize commentText=_commentText;
@property(readonly) NSString *photosBatchID; // @synthesize photosBatchID=_photosBatchID;
@property(readonly) BOOL offerToReportAsJunk; // @synthesize offerToReportAsJunk=_offerToReportAsJunk;
@property(retain) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(readonly) NSString *interestingMemoryUUID; // @synthesize interestingMemoryUUID=_interestingMemoryUUID;
@property(copy) NSDate *notificationDeliveryDate; // @synthesize notificationDeliveryDate=_notificationDeliveryDate;
@property BOOL suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(readonly, copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property(readonly, copy) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly, copy) NSString *mainAssetUUID; // @synthesize mainAssetUUID=_mainAssetUUID;
@property(readonly, copy) NSString *albumCloudGUID; // @synthesize albumCloudGUID=_albumCloudGUID;
@property(readonly, copy) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property(readonly) long long notificationType; // @synthesize notificationType=_notificationType;
- (void).cxx_destruct;
- (id)_localizedCountFormatter;
- (BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
@property(readonly) NSString *requestIdentifier;
@property(readonly) NSString *keyObjectUUID;
- (BOOL)isCommentPiggyBackedOnPhotosAddedNotification;
- (id)description;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSArray *suppressionContexts;
@property(readonly) BOOL hasThumbnail;
@property(readonly) NSString *destinationURLString;
@property(readonly) NSString *message;
@property(readonly) NSString *title;
@property(readonly) double completionPercentage;
@property(readonly) BOOL thumbnailAssetIsPlaceholder;
@property(readonly) BOOL allAssetsAreFullResolution;
- (id)notificationByMergingWithNotificationDictionary:(id)arg1;
- (id)notificationByMergingWithNotification:(id)arg1;
@property(readonly) BOOL canMergeWithPersistedNotifications;
- (id)initWithExpiringMomentShareUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)initWithExpiringMomentShares:(id)arg1;
- (id)initCMMInvitationReadyToViewWithMomentShare:(id)arg1;
- (id)initCMMInvitationWithMomentShare:(id)arg1;
- (id)initWithSuggestedCMMUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(BOOL)arg15 allMultipleAssetIsMine:(BOOL)arg16 isMixedType:(BOOL)arg17;
- (id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13;
- (id)initWithLikeAdded:(id)arg1;
- (id)initWithCommentAdded:(id)arg1;
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotificationDictionary:(id)arg2;
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotification:(id)arg2;
- (id)initWithAssetsAdded:(id)arg1 toAlbum:(id)arg2;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)_initWithType:(long long)arg1;
- (id)init;

@end

