//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMapTable, NSMutableArray;
@protocol UIWebTouchEventsGestureRecognizerDelegate;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer
{
    id _touchTarget;
    SEL _touchAction;
    id <UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
    BOOL _passedHitTest;
    BOOL _defaultPrevented;
    BOOL _dispatchingTouchEvents;
    BOOL _isPotentialTap;
    BOOL _wasExplicitlyCancelled;
    double _originalGestureDistance;
    double _originalGestureAngle;
    struct _UIWebTouchEvent _lastTouchEvent;
    NSMapTable *_activeTouchesByIdentifier;
}

+ (BOOL)_shouldDefaultToTouches;
+ (void)initialize;
@property(readonly, nonatomic) NSMapTable *activeTouchesByIdentifier; // @synthesize activeTouchesByIdentifier=_activeTouchesByIdentifier;
@property(readonly, nonatomic, getter=isDispatchingTouchEvents) BOOL dispatchingTouchEvents; // @synthesize dispatchingTouchEvents=_dispatchingTouchEvents;
@property(nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented; // @synthesize defaultPrevented=_defaultPrevented;
- (void).cxx_destruct;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) BOOL inJavaScriptGesture;
@property(readonly, nonatomic) NSMutableArray *touchPhases;
@property(readonly, nonatomic) NSMutableArray *touchIdentifiers;
@property(readonly, nonatomic) NSMutableArray *touchLocations;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) const struct _UIWebTouchEvent *lastTouchEvent;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (void)performAction;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2;
- (void)_updateTapStateWithTouches:(id)arg1;
- (void)cancel;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;

@end

