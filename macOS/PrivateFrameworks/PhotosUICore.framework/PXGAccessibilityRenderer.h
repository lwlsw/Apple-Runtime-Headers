//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAccessibilityContentInfoDelegate-Protocol.h>
#import <PhotosUICore/PXGRenderer-Protocol.h>

@class NSIndexSet, NSMutableArray, NSMutableDictionary, NSString, PXGAccessibilityContentInfoManager, PXScrollViewController;
@protocol PXGAccessibilityRendererDelegate, PXGRendererDelegate, PXGTextureConverter;

@interface PXGAccessibilityRenderer : NSObject <PXGAccessibilityContentInfoDelegate, PXGRenderer>
{
    PXGAccessibilityContentInfoManager *_contentInfoManager;
    NSMutableArray *_reusableContentInfoQueue;
    NSMutableDictionary *_contentInfosBySpriteIndex;
    NSMutableDictionary *_viewContentInfosByParentSpriteIndex;
    NSIndexSet *_previousExtendedIndexes;
    id <PXGRendererDelegate> _delegate;
    id <PXGTextureConverter> _textureConverter;
    PXScrollViewController *_scrollViewController;
    id <PXGAccessibilityRendererDelegate> _accessibilityDelegate;
    struct CGRect _visibleRect;
    CDStruct_efb11229 _interactionState;
}

@property(nonatomic) __weak id <PXGAccessibilityRendererDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(retain, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) CDStruct_efb11229 interactionState; // @synthesize interactionState=_interactionState;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter; // @synthesize textureConverter=_textureConverter;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (void)_selectAsset:(id)arg1;
- (id)accessibilityContentsWithMode:(int)arg1;
- (void)scrollToAccessibilityElement:(id)arg1;
- (id)siblingForElement:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)handleAccessibilitySelectedCells:(id)arg1;
- (void)handleAccessibilitySelectedChildren:(id)arg1;
- (struct CGPoint)_locationForElement:(id)arg1 inView:(id)arg2;
- (BOOL)accessibilityPerformShowDefaultUIWithElement:(id)arg1;
- (BOOL)accessibilityPerformShowAlternateUIWithElement:(id)arg1;
- (BOOL)accessibilityPerformShowMenuWithElement:(id)arg1;
- (BOOL)accessibilityPerformPressWithElement:(id)arg1;
- (void)setNeedsRender;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (void)updateWithChangeDetails:(id)arg1;
@property(readonly, nonatomic) int presentationType;
- (id)_dequeueElement;
- (void)_makeElementReusable:(id)arg1;
- (id)initWithContentInfoManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler;

@end

