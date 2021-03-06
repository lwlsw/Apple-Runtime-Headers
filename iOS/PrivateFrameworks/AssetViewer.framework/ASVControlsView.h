//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssetViewer/UIAccessibilityHUDGestureDelegate-Protocol.h>

@class NSString, UIAccessibilityHUDGestureManager, UIStackView;

@interface ASVControlsView : UIView <UIAccessibilityHUDGestureDelegate>
{
    UIStackView *_stackView;
    UIAccessibilityHUDGestureManager *_largeTextHUDGestureManager;
}

@property(retain, nonatomic) UIAccessibilityHUDGestureManager *largeTextHUDGestureManager; // @synthesize largeTextHUDGestureManager=_largeTextHUDGestureManager;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (id)_buttonAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithArrangedSubviews:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

