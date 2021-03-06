//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSDictionary, UILabel, UIView;

@interface TVInspector : UIWindow
{
    _Bool _inspecting;
    UIWindow *_previousKeyWindow;
    UIView *_targetView;
    UIView *_capturedView;
    UILabel *_debugLabel;
    NSDictionary *_moveKeyToPoint;
    long long _gestureMode;
    struct CGRect _targetRect;
}

+ (id)toggleKeyCommandWithAction:(SEL)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long gestureMode; // @synthesize gestureMode=_gestureMode;
@property(retain, nonatomic) NSDictionary *moveKeyToPoint; // @synthesize moveKeyToPoint=_moveKeyToPoint;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) UIView *capturedView; // @synthesize capturedView=_capturedView;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
@property(nonatomic, getter=isInspecting) _Bool inspecting; // @synthesize inspecting=_inspecting;
- (void).cxx_destruct;
- (long long)_gestureTypeForDigitizerLocation:(struct CGPoint)arg1;
- (id)_debugTextForTargetView;
- (void)_centerTarget;
- (void)_moveToSubview;
- (void)_moveToSuperview;
- (void)_movePreviousSibling;
- (void)_moveNextSibling;
- (id)_captureTargetedView;
- (void)_examineCapturedView;
- (void)_moveForEvent:(id)arg1;
- (void)_toggleCapture;
- (void)_stopInspector;
- (void)_startInspector;
- (void)_adjustSizeWithDelta:(struct CGPoint)arg1;
- (void)_adjustPositionWithDelta:(struct CGPoint)arg1;
- (void)_singleTap:(id)arg1;
- (void)_prevMode:(id)arg1;
- (void)_nextMode:(id)arg1;
- (void)_centerTargetGesture:(id)arg1;
- (void)_examineGesture:(id)arg1;
- (void)_selectGesture:(id)arg1;
- (void)_pan:(id)arg1;
- (void)_toggleWithGesture:(id)arg1;
- (id)newToggleGesture;
- (void)toggleInspector;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

