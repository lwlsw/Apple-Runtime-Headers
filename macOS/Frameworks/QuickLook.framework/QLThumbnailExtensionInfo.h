//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLThumbnailGeneratorInfo-Protocol.h>

@class NSString, QLExtension;

@interface QLThumbnailExtensionInfo : NSObject <QLThumbnailGeneratorInfo>
{
    QLExtension *_extension;
    unsigned long long _minimumThumbnailSize;
}

@property(retain) QLExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long minimumThumbnailSize;
@property(readonly) BOOL isThumbnailGeneratorDisabled;
- (void)score:(long long)arg1;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

