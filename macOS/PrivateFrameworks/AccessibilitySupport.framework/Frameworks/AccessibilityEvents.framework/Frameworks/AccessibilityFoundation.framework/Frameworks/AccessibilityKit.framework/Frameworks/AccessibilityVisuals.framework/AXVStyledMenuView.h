//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityVisuals/AXVView.h>

@class AXVStyledMenuTargetView, NSArray;

@interface AXVStyledMenuView : AXVView
{
    NSArray *_menuItems;
    long long _displayStyle;
    AXVStyledMenuTargetView *__targetView;
    struct CGSize _menuItemSize;
    struct CGPoint _menuTargetOrigin;
}

@property(retain, nonatomic) AXVStyledMenuTargetView *_targetView; // @synthesize _targetView=__targetView;
@property(nonatomic) struct CGPoint menuTargetOrigin; // @synthesize menuTargetOrigin=_menuTargetOrigin;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) struct CGSize menuItemSize; // @synthesize menuItemSize=_menuItemSize;
- (void).cxx_destruct;
- (void)_updateMenuItem:(id)arg1 withOrigin:(struct CGPoint)arg2;
- (void)_updateListLayout;
- (void)_updateCircularLayout;
- (void)_updateLayout;
- (void)_setupTargetViewIfNeeded;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;

@end

