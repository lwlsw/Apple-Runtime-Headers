//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachment.h>

#import <NotesUI/DCScanDataDelegate-Protocol.h>

@class ICDocCamImageQuad, ICNotePasteboardData, NSString, UIImage;

@interface ICAttachment (PDFGalleryVersion) <DCScanDataDelegate>
+ (struct NSCache *)imageCache;
+ (id)imageLoadingOperationQueue;
+ (id)thumbnailOperationQueue;
@property(readonly, nonatomic) long long docCamPDFVersion;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (void)notifyDocCamFrameworkAttachmentWasDeleted;
- (_Bool)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7 fallbackBlock:(CDUnknownBlockType)arg8 aboutToLoadHandler:(CDUnknownBlockType)arg9;
- (_Bool)thumbnailImage:(struct UIImage **)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_1b6d18a9 *)arg9;
- (_Bool)thumbnailImage:(struct UIImage **)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(_Bool *)arg5 isMovie:(_Bool *)arg6 movieDuration:(CDStruct_1b6d18a9 *)arg7;
- (id)updateAttachmentPreviewImageWithImage:(struct UIImage *)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6;
- (id)updateAttachmentPreviewImageWithImage:(struct UIImage *)arg1 scale:(double)arg2 scaleWhenDrawing:(_Bool)arg3 metadata:(id)arg4 sendNotification:(_Bool)arg5;
- (id)deviceInfosWithoutPreviewImagesFromDeviceInfos:(id)arg1;
@property(readonly, nonatomic) NSString *movieDurationForSpeaking;
@property(readonly, nonatomic) NSString *modificationDateForSpeaking;
- (id)activityItems;
@property(readonly, nonatomic) ICNotePasteboardData *pasteboardData;
- (id)attributedString;
- (struct UIImage *)cachedImage;
- (void)setCachedImage:(struct UIImage *)arg1;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2 forceFullSizeImage:(_Bool)arg3;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) ICDocCamImageQuad *croppingQuad;
@property(readonly, nonatomic) UIImage *unprocessedDocumentImage;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool isUnsupportedOnCurrentPlatform;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

