//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKUICellRowSeparatorView, UIColor, UIVisualEffect, UIVisualEffectView;

@interface EKUICellContentView : UIView
{
    UIVisualEffectView *_rowSeparatorParentView;
    EKUICellRowSeparatorView *_separatorViewForNonOpaqueContainers;
    _Bool _drawsOwnRowSeparators;
    _Bool _usesInsetMargin;
    UIColor *_rowSeparatorColor;
    UIVisualEffect *_rowSeparatorVisualEffect;
    struct UIEdgeInsets _separatorInset;
}

+ (_Bool)vibrant;
+ (float)rowSeparatorThickness;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) _Bool usesInsetMargin; // @synthesize usesInsetMargin=_usesInsetMargin;
@property(retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect; // @synthesize rowSeparatorVisualEffect=_rowSeparatorVisualEffect;
@property(retain, nonatomic) UIColor *rowSeparatorColor; // @synthesize rowSeparatorColor=_rowSeparatorColor;
@property(nonatomic) _Bool drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
- (void).cxx_destruct;
- (void)_setMarginWidth:(float)arg1;
- (void)_setMarginExtendsToFullWidth:(_Bool)arg1;
- (void)_layoutSeparator;
- (void)layoutSubviews;

@end

