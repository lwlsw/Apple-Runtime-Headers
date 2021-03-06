//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HIDUserDevice;
@protocol OS_dispatch_queue;

@interface AXEPhysicalMouse : NSObject
{
    BOOL __activated;
    HIDUserDevice *__hidUserDevice;
    NSObject<OS_dispatch_queue> *__hidUserDeviceQueue;
    NSObject<OS_dispatch_queue> *__reportingQueue;
}

+ (id)_mouseHIDReportDescriptorData;
+ (id)_reportWithLeftButtonDown:(BOOL)arg1 rightButtonDown:(BOOL)arg2 xMovement:(double)arg3 yMovement:(double)arg4;
+ (id)_mouseHIDDeviceProperties;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_reportingQueue; // @synthesize _reportingQueue=__reportingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_hidUserDeviceQueue; // @synthesize _hidUserDeviceQueue=__hidUserDeviceQueue;
@property(retain, nonatomic) HIDUserDevice *_hidUserDevice; // @synthesize _hidUserDevice=__hidUserDevice;
@property(nonatomic) BOOL _activated; // @synthesize _activated=__activated;
- (void).cxx_destruct;
- (void)_deactivateOnReportingQueue;
- (void)_moveOnReportingQueue:(double)arg1:(double)arg2;
- (void)_activateOnReportingQueue;
- (void)move:(double)arg1:(double)arg2;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

