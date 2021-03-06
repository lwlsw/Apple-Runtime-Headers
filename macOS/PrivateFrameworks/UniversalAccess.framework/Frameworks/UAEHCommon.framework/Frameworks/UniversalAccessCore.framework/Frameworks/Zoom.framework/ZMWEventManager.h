//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Zoom/AXEEventTapListener-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ZMWEventManager : NSObject <AXEEventTapListener>
{
    BOOL _arePoroKeysDown;
    unsigned int _cgsConnection;
    BOOL _eventHandlerInstalled;
    BOOL _registeredHotKeys;
    BOOL _registeredUAHotKeys;
    struct __CFMachPort *_eventTap;
    struct __CGEventTapProxy *_eventTapProxy;
    unsigned long long _eventTapReconnectCount;
    double _eventTapLastReconnect;
    struct __CFMachPort *_eventTapListenOnly;
    struct __CGEventTapProxy *_eventTapListenOnlyProxy;
    unsigned long long _eventTapListenOnlyReconnectCount;
    double _eventTapListenOnlyLastReconnect;
    BOOL _shouldHideCursor;
    BOOL _canHideCursor;
    double _lastUAFocusTime;
    NSDictionary *_lastUAFocusInformation;
    double _lastPotentialFocusTrigger;
    double _onlyControlIsDownTime;
    unsigned long long _lastSeenFlags;
    struct __CGEventSource *_eventSource;
    BOOL _isMouseDetached;
    BOOL __temporaryDetachKeysDown;
    BOOL __mouseEventTapRegistered;
    struct CGPoint _currentMouseLocation;
    struct CGPoint __mouseDetachStartMouseLocation;
    struct CGPoint __mouseDetachStartZoomOriginLocation;
}

+ (id)sharedManager;
@property(nonatomic) BOOL _mouseEventTapRegistered; // @synthesize _mouseEventTapRegistered=__mouseEventTapRegistered;
@property(nonatomic) struct CGPoint _mouseDetachStartZoomOriginLocation; // @synthesize _mouseDetachStartZoomOriginLocation=__mouseDetachStartZoomOriginLocation;
@property(nonatomic) struct CGPoint _mouseDetachStartMouseLocation; // @synthesize _mouseDetachStartMouseLocation=__mouseDetachStartMouseLocation;
@property(nonatomic, setter=_setTemporaryDetachKeysDown:) BOOL _temporaryDetachKeysDown; // @synthesize _temporaryDetachKeysDown=__temporaryDetachKeysDown;
@property(nonatomic) struct CGPoint currentMouseLocation; // @synthesize currentMouseLocation=_currentMouseLocation;
@property(nonatomic) BOOL isMouseDetached; // @synthesize isMouseDetached=_isMouseDetached;
- (void).cxx_destruct;
- (void)registerUAHotKeys;
- (void)registerHotKeys;
- (void)unregisterUAHotKeys;
- (void)unregisterHotKeys;
- (void)_enableHotKey:(unsigned int)arg1 enable:(BOOL)arg2;
- (void)_addHotKey:(unsigned long long)arg1 symbolicKey:(unsigned int)arg2;
- (void)_removeHotKey:(unsigned long long)arg1;
- (struct __CGEvent *)_handleCGTap:(struct __CFMachPort *)arg1 reconnectCount:(unsigned long long *)arg2 lastReconnect:(double *)arg3 event:(struct __CGEvent *)arg4 type:(unsigned int)arg5;
- (struct __CGEvent *)_handleCGTapEvent:(struct __CGEvent *)arg1 type:(unsigned int)arg2 withProxy:(struct __CGEventTapProxy *)arg3;
- (void)_handleCGTapListenOnlyEvent:(struct __CGEvent *)arg1 type:(unsigned int)arg2 withProxy:(struct __CGEventTapProxy *)arg3;
- (BOOL)_handleCGTapEventWithZoomKeys:(struct __CGEvent *)arg1;
- (struct __CGEvent *)eventTapManager:(id)arg1 activelyTappedMouseEvent:(id)arg2 cgEvent:(struct __CGEvent *)arg3 withProxy:(struct __CGEventTapProxy *)arg4;
- (void)removeEventTapListenOnly;
- (void)removeEventTap;
- (void)installEventTap;
- (void)installEventTapListenOnly;
- (void)enableEventTap:(BOOL)arg1;
- (void)_cgListenForEventMask:(unsigned int)arg1 enable:(BOOL)arg2;
- (BOOL)_cgRegisterForEvents;
- (void)_initializeModifierState;
- (BOOL)_handleCGEvent:(struct __CGEvent *)arg1;
- (void)_stopAllSpeakingJobs;
- (void)handlePossibleFocusTrigger;
- (void)_handlePossibleFocusTrigger;
- (BOOL)_handleCGFlagsChanged:(struct __CGEvent *)arg1;
- (void)_setDesiredZoomFactor:(double)arg1;
- (void)_setOnlyControlIsDownTime:(double)arg1;
- (BOOL)_handleCGZoomEvent:(struct __CGEvent *)arg1;
- (BOOL)_handleMouseMoved:(struct __CGEvent *)arg1;
- (void)_repeatZoomInHotKey:(id)arg1;
- (BOOL)_handleZoomInHotKey:(BOOL)arg1;
- (BOOL)_handleZoomLevelToggleHotKey;
- (void)_adjustZoomLevelByDelta:(double)arg1;
- (void)_adjustPoroZoomLevelByDelta:(double)arg1;
- (void)_setPoroKeysDown:(BOOL)arg1;
- (void)handleUAFocusChange:(id)arg1;
- (void)focusOnRect:(struct CGRect)arg1;
- (void)_moveZoomToFocusRect;
- (void)_respondToFocusChangeOrFocusTrigger;
- (BOOL)_isZoomedIn;
- (void)updateCursorVisibility;
@property(nonatomic) BOOL canHideCursor; // @dynamic canHideCursor;
@property(nonatomic) BOOL shouldHideCursor; // @dynamic shouldHideCursor;
- (void)listenForKeyboardEvents:(BOOL)arg1;
- (void)listenForMouseMovementEvents:(BOOL)arg1;
- (void)updateUserSettings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateEventTapRegistrationPrefsZoomFactor:(double)arg1 nonSystemZoomFactor:(double)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

