//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MaterialKit/MTCoreMaterialVisualStylingProviderObserving-Protocol.h>

@class MTCoreMaterialVisualStylingProvider, NSMapTable, NSMutableDictionary, NSPointerArray, NSString;

@interface MTVisualStylingProvider : NSObject <MTCoreMaterialVisualStylingProviderObserving>
{
    MTCoreMaterialVisualStylingProvider *_coreMaterialVisualStylingProvider;
    NSMutableDictionary *_styleNamesToVisualStylings;
    NSMapTable *_viewsAndLayersToCoreMaterialVisualStyles;
    NSMapTable *_viewsAndLayersToObserverBlocks;
    NSPointerArray *_privateObservers;
}

+ (id)_visualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_visualStylingProviderForRecipeNamed:(id)arg1 andCategory:(long long)arg2;
+ (id)_visualStylingProviderForRecipe:(long long)arg1 andCategory:(long long)arg2;
+ (id)_visualStylingProviderForRecipe:(long long)arg1 category:(long long)arg2 andUserInterfaceStyle:(long long)arg3;
+ (Class)_visualStylingClass;
@property(retain, nonatomic, getter=_privateObservers) NSPointerArray *privateObservers; // @synthesize privateObservers=_privateObservers;
@property(retain, nonatomic, getter=_viewsAndLayersToObserverBlocks) NSMapTable *viewsAndLayersToObserverBlocks; // @synthesize viewsAndLayersToObserverBlocks=_viewsAndLayersToObserverBlocks;
@property(retain, nonatomic, getter=_viewsAndLayersToCoreMaterialVisualStyles) NSMapTable *viewsAndLayersToCoreMaterialVisualStyles; // @synthesize viewsAndLayersToCoreMaterialVisualStyles=_viewsAndLayersToCoreMaterialVisualStyles;
@property(retain, nonatomic, getter=_styleNamesToVisualStylings) NSMutableDictionary *styleNamesToVisualStylings; // @synthesize styleNamesToVisualStylings=_styleNamesToVisualStylings;
@property(retain, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider; // @synthesize coreMaterialVisualStylingProvider=_coreMaterialVisualStylingProvider;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_updateVisualStyleOfViewOrLayer:(id)arg1;
- (void)_stopAutomaticallyUpdatingViewOrLayer:(id)arg1;
- (void)_automaticallyUpdateViewOrLayer:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)stopAutomaticallyUpdatingLayer:(id)arg1;
- (void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2;
- (void)stopAutomaticallyUpdatingView:(id)arg1;
- (void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_automaticallyUpdateView:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (id)_visualStylingForContinuallyUpdatedView:(id)arg1;
- (id)_visualStylingForStyleNamed:(id)arg1;
- (id)_visualStylingForStyle:(long long)arg1;
- (id)initWithCoreMaterialVisualStylingProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

