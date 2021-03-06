//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface AXEVirtualKeyboard : NSObject
{
    struct __CGEventSource *__eventSource;
    unsigned int __eventTapLocation;
    unsigned long long __cgEventFlags;
    NSMutableSet *__downKeys;
}

+ (unsigned long long)_cgEventFlagsFromDownKeys:(id)arg1;
+ (unsigned long long)_cgEventFlagsForModifier:(unsigned long long)arg1;
+ (id)shared;
@property(retain, nonatomic) NSMutableSet *_downKeys; // @synthesize _downKeys=__downKeys;
@property(nonatomic) unsigned long long _cgEventFlags; // @synthesize _cgEventFlags=__cgEventFlags;
@property(nonatomic) unsigned int _eventTapLocation; // @synthesize _eventTapLocation=__eventTapLocation;
- (void).cxx_destruct;
- (struct __CGEventSource *)_eventSource;
- (BOOL)isKeySynthesizedDown:(unsigned long long)arg1;
- (void)synthesizeKeyUp:(unsigned long long)arg1;
- (void)synthesizeKeyDown:(unsigned long long)arg1;
- (void)dealloc;
- (id)_initWithEventTapLocation:(unsigned int)arg1;

@end

