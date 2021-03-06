//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <PlatterKit/MTMaterialGrouping-Protocol.h>
#import <PlatterKit/MTVisualStylingRequiring-Protocol.h>

@class MTMaterialView, MTVisualStylingProvider, NSArray, NSString, UIImage, UIImageView;

@interface PLGlyphControl : UIControl <MTMaterialGrouping, MTVisualStylingRequiring>
{
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _blurEnabled;
    long long _materialRecipe;
    long long _visualStyle;
    UIImageView *_glyphView;
    MTMaterialView *_backgroundMaterialView;
}

+ (id)dismissControlWithMaterialRecipe:(long long)arg1;
@property(retain, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(retain, nonatomic, getter=_glyphView) UIImageView *glyphView; // @synthesize glyphView=_glyphView;
@property(nonatomic, getter=isBlurEnabled) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(nonatomic) long long visualStyle; // @synthesize visualStyle=_visualStyle;
@property(readonly, nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
- (void).cxx_destruct;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureMaterialView:(id *)arg1 ifNecessaryWithConfiguration:(long long)arg2 positioningAtIndex:(unsigned long long)arg3;
- (void)_configureGlyphViewIfNecessaryWithImage:(id)arg1;
- (void)_updateGlyphViewVisualStyling;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
@property(copy, nonatomic) NSString *materialGroupNameBase;
- (void)layoutSubviews;
- (double)_cornerRadius;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(copy, nonatomic) UIImage *glyph;
- (id)initWithMaterialRecipe:(long long)arg1;
- (void)_removeVisualStylingOfView:(id)arg1;
- (void)_updateVisualStylingOfView:(id)arg1;
- (void)_handleTouchUpInsideWithEvent:(id)arg1;
- (void)_removeAllVisualStyling;
- (void)_updateAllVisualStyling;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

