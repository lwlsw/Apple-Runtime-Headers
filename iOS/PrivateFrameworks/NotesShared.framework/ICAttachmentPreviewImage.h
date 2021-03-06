//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICAttachmentPreviewImageUI-Protocol.h>

@class ICAccount, ICAttachment, NSData, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject <ICAttachmentPreviewImageUI>
{
    ICAccount *placeholderAccount;
    NSObject<OS_dispatch_queue> *_fileQueue;
    unsigned long long _imageID;
}

+ (id)previewImageURLsForIdentifier:(id)arg1 account:(id)arg2;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 appearanceType:(unsigned long long)arg5;
+ (void)waitUntilAllFileWritesAreFinished;
+ (id)fileQueueGroup;
+ (id)fileGlobalQueue;
+ (id)concurrentFileLoadLimitSemaphore;
+ (long long)updateFileWriteCounterBy:(long long)arg1 identifier:(id)arg2;
+ (void)purgePreviewImageFilesForIdentifiers:(id)arg1 account:(id)arg2;
+ (void)purgeAllPreviewImageFiles;
+ (void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)allAttachmentPreviewImagesInContext:(id)arg1;
+ (id)visibleAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImageIdentifiersForAccount:(id)arg1;
+ (id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (void)purgeAllAttachmentPreviewImagesInContext:(id)arg1;
+ (id)newAttachmentPreviewImageWithIdentifier:(id)arg1 attachment:(id)arg2;
@property(nonatomic) unsigned long long imageID; // @synthesize imageID=_imageID;
@property(nonatomic) __weak ICAccount *placeholderAccount; // @synthesize placeholderAccount;
- (void).cxx_destruct;
- (void)saveAndClearDecryptedData;
- (id)_decryptedImageData;
- (id)decryptedImageData;
- (_Bool)writeEncryptedImageFromData:(id)arg1;
- (id)parentEncryptableObject;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (_Bool)needsInitialFetchFromCloud;
- (_Bool)needsToBeFetchedFromCloud;
- (_Bool)needsToBeDeletedFromCloud;
- (_Bool)needsToBePushedToCloud;
- (void)updateFlagToExcludeFromCloudBackup;
- (long long)minimumSupportedNotesVersion;
- (id)ic_loggingValues;
- (_Bool)shouldSyncToCloud;
@property(retain, nonatomic) NSData *metadata; // @dynamic metadata;
- (void)createOrientedPreviewIfNeeded;
- (id)orientedPreviewImageURL;
- (_Bool)hasAnyPNGPreviewImageFiles;
- (id)orientedPreviewImageURLWithoutCreating;
- (id)encryptedPreviewImageURL;
- (id)previewImageURL;
- (id)previewImagePathExtension;
- (id)containerAccount;
- (_Bool)makeSurePreviewImageDirectoryExists:(id *)arg1;
- (_Bool)setScaledImageFromImageSrc:(struct CGImageSource *)arg1 typeUTI:(struct __CFString *)arg2;
- (_Bool)setImageData:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4;
- (_Bool)imageIsWriting;
- (_Bool)imageIsValid;
- (struct CGAffineTransform)orientedImageTransform;
- (void)invalidateCache;
- (void)invalidateImage;
- (void)invalidateOrientedImage;
- (void)removeItemAtURL:(id)arg1;
- (void)accountWillChangeToAccount:(id)arg1;
- (void)willTurnIntoFault;
- (void)prepareForDeletion;
@property(readonly) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
- (struct CGSize)size;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic) short appearanceType; // @dynamic appearanceType;
@property(retain, nonatomic) ICAttachment *attachment; // @dynamic attachment;
@property(retain, nonatomic) NSData *cryptoMetadataInitializationVector; // @dynamic cryptoMetadataInitializationVector;
@property(retain, nonatomic) NSData *cryptoMetadataTag; // @dynamic cryptoMetadataTag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *encryptedMetadata; // @dynamic encryptedMetadata;
@property(readonly) unsigned long long hash;
@property(nonatomic) double height; // @dynamic height;
@property(retain, nonatomic) NSDate *modifiedDate; // @dynamic modifiedDate;
@property(nonatomic) double scale; // @dynamic scale;
@property(nonatomic) _Bool scaleWhenDrawing; // @dynamic scaleWhenDrawing;
@property(readonly) Class superclass;
@property(nonatomic) short version; // @dynamic version;
@property(nonatomic) _Bool versionOutOfDate; // @dynamic versionOutOfDate;
@property(nonatomic) double width; // @dynamic width;

@end

