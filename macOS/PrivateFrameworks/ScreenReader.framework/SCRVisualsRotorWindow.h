//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXVRotorWindow, NSString;

__attribute__((visibility("hidden")))
@interface SCRVisualsRotorWindow : NSObject
{
    BOOL _enabled;
    AXVRotorWindow *__rotorWindow;
    NSString *__rotorTitle;
    long long __rotorKnobCount;
}

@property(nonatomic, setter=_setRotorKnobCount:) long long _rotorKnobCount; // @synthesize _rotorKnobCount=__rotorKnobCount;
@property(copy, nonatomic, setter=_setRotorTitle:) NSString *_rotorTitle; // @synthesize _rotorTitle=__rotorTitle;
@property(retain, nonatomic, setter=_setRotorWindow:) AXVRotorWindow *_rotorWindow; // @synthesize _rotorWindow=__rotorWindow;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)selectRotorKnobAtIndex:(long long)arg1;
- (void)updateRotorWindowWithRotorTitle:(id)arg1 rotorKnobCount:(long long)arg2;
- (void)setBaseFontSize:(double)arg1;
@property(readonly, nonatomic) long long rotorKnobCount;
@property(readonly, copy, nonatomic) NSString *rotorTitle;
- (void)hideRotorWindow;
- (void)showRotorWindow;
- (id)init;

@end

