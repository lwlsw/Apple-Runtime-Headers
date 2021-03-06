//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ISImageBag : NSObject <ISScalableCompositorResource>
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_imagesByScale;
}

+ (id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2;
@property struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain) NSMutableDictionary *imagesByScale; // @synthesize imagesByScale=_imagesByScale;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSArray *images; // @dynamic images;
- (void)insertImage:(id)arg1;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)imagesForScale:(double)arg1;
- (id)initWithImages:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

