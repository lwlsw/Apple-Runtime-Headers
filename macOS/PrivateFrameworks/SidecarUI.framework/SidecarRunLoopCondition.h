//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SidecarUI/SidecarRunLoopSource.h>

__attribute__((visibility("hidden")))
@interface SidecarRunLoopCondition : SidecarRunLoopSource
{
    // Error parsing type: AB, name: _flag
    // Error parsing type: AB, name: _modal
    CDUnknownBlockType _handler;
}

@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (long long)runModalForWindow:(id)arg1;
- (void)waitInMode:(id)arg1 withTimeout:(double)arg2;
- (void)waitInMode:(id)arg1;
- (void)signal;
- (void)perform;
- (id)_description;

@end

