//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol DOCKeyboardFocusable;

@interface DOCKeyboardFocusManager : NSObject
{
    id <DOCKeyboardFocusable> _currentlyFocused;
    NSPointerArray *_allKeyboardFocusable;
}

+ (id)sharedManager;
@property(retain) NSPointerArray *allKeyboardFocusable; // @synthesize allKeyboardFocusable=_allKeyboardFocusable;
- (void).cxx_destruct;
- (BOOL)_isRegistered:(id)arg1;
- (void)_printAllRegisteredFocusable;
- (id)adjacentFocusableToFocusable:(id)arg1 direction:(long long)arg2;
- (BOOL)restoreCurrentlyFocused;
- (BOOL)requestCurrentFocus:(id)arg1;
- (id)currentlyFocused;
- (void)unregisterKeyboardFocusable:(id)arg1;
- (void)registerKeyboardFocusable:(id)arg1;
- (id)init;

@end

