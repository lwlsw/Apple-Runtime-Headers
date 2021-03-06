//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, _TVStackedMediaDocumentVersion, _TVStackedMediaVideoLoopConfiguration;

__attribute__((visibility("hidden")))
@interface _TVStackedMediaDocumentEntry : NSObject
{
    _Bool _gimbalEnabled;
    _Bool _opaque;
    NSString *_name;
    NSString *_remoteAssetFileName;
    NSURL *_localAssetURL;
    _TVStackedMediaVideoLoopConfiguration *_loopConfiguration;
    long long _mediaType;
    long long _blendMode;
    struct CGImage *_imageRef;
    _TVStackedMediaDocumentVersion *_documentVersion;
    struct CGRect _frame;
}

+ (long long)_mediaTypeForMediaTypeString:(id)arg1;
+ (long long)_blendModeForBlendModeString:(id)arg1;
@property(retain, nonatomic) _TVStackedMediaDocumentVersion *documentVersion; // @synthesize documentVersion=_documentVersion;
@property(nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) _Bool gimbalEnabled; // @synthesize gimbalEnabled=_gimbalEnabled;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) _TVStackedMediaVideoLoopConfiguration *loopConfiguration; // @synthesize loopConfiguration=_loopConfiguration;
@property(retain, nonatomic) NSURL *localAssetURL; // @synthesize localAssetURL=_localAssetURL;
@property(retain, nonatomic) NSString *remoteAssetFileName; // @synthesize remoteAssetFileName=_remoteAssetFileName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 documentVersion:(id)arg2 directory:(id)arg3 fileNamePrefix:(id)arg4;

@end

