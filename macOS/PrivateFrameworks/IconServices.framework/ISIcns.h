//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>
#import <IconServices/NSCopying-Protocol.h>
#import <IconServices/NSMutableCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface ISIcns : NSObject <ISScalableCompositorResource, NSCopying, NSMutableCopying>
{
    unsigned int _type;
    NSData *_data;
    id _elements;
    BOOL _dirty;
    NSURL *_url;
}

+ (BOOL)createEmptyIconsetFolderWithURL:(id)arg1 error:(id *)arg2;
+ (id)icnsWithIconFamilyHandle:(struct IconFamilyResource **)arg1;
+ (id)icnsWithContentsOfURL:(id)arg1;
+ (id)icnsWithResourceFile:(id)arg1;
+ (id)icnsWithIcon:(id)arg1 imageDescriptors:(id)arg2;
+ (id)icnsWithType:(unsigned int)arg1 images:(id)arg2;
+ (id)genericAppIconResource;
+ (id)genericFolderIconResource;
+ (id)genericDocumentIconResource;
+ (id)placeholderIconResource;
+ (id)notLoadedIconResource;
+ (id)systemIconNamed:(id)arg1;
@property(retain) NSURL *url; // @synthesize url=_url;
@property BOOL dirty; // @synthesize dirty=_dirty;
@property(readonly) NSMutableDictionary *elements; // @synthesize elements=_elements;
@property unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setVariant:(id)arg1 named:(id)arg2;
@property(retain) NSDictionary *userInfo; // @dynamic userInfo;
@property(retain) ISIcns *templateVariant; // @dynamic templateVariant;
@property(retain) ISIcns *selectedVariant; // @dynamic selectedVariant;
- (void)removeValueAtIndex:(int)arg1;
- (void)setData:(id)arg1 atIndex:(int)arg2;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *variants; // @dynamic variants;
- (BOOL)isVariantElementType:(unsigned int)arg1;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)elementTypeAtIndex:(int)arg1;
- (BOOL)isMaskAtIndex:(int)arg1;
- (unsigned int)colorDepthAtIndex:(int)arg1;
- (unsigned int)scaleAtIndex:(int)arg1;
- (struct CGSize)sizeAtIndex:(int)arg1;
- (id)dataAtIndex:(int)arg1;
- (id)variantNamed:(id)arg1;
@property(readonly) BOOL containsTemplateVariant;
- (unsigned int)typeForVariantName:(id)arg1;
@property(retain) NSString *name; // @dynamic name;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)load;
- (id)initWithIcns:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (id)init;
- (BOOL)writeAsIconsetToURL:(id)arg1;
- (BOOL)writeIconsetImagesToURL:(id)arg1 variantName:(id)arg2 selected:(BOOL)arg3;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (short)copyTypeData:(unsigned int)arg1 toHandle:(char **)arg2;
- (id)assetCatalogResource;
- (id)assetCatalogIconName;
- (id)assetCatalogFilePath;
- (struct CGImage *)copyCGImageForSize:(struct CGSize)arg1 scale:(unsigned int)arg2;
- (int)iconIndexForSize:(struct CGSize)arg1 scale:(unsigned int)arg2;
- (struct CGImage *)copyCGImageWithIndex:(int)arg1;
- (struct CGImage *)CGImageWithData:(id)arg1 iconIndexInfo:(const CDStruct_2eae0794 *)arg2;
- (int)findMaskIndex:(int)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

