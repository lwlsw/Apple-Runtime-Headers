//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/_SBScreenshotProvider-Protocol.h>

@class NSString, SBScreenFlash, UIScreen;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider>
{
    UIScreen *_screen;
    SBScreenFlash *_flasher;
}

@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) SBScreenFlash *flasher; // @synthesize flasher=_flasher;
- (void).cxx_destruct;
- (id)captureScreenshot;
- (id)initWithScreen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

