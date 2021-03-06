//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/MMCSOperationStateTimeRange-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>
{
    unsigned long long _operationState;
    NSDate *_startDate;
    double _duration;
}

@property(readonly) double duration; // @synthesize duration=_duration;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) unsigned long long operationState; // @synthesize operationState=_operationState;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
@property(readonly) double relativeStart;
@property(readonly) double absoluteStop;
- (long long)compareStopTime:(id)arg1;
- (long long)compareStartTime:(id)arg1;
@property(readonly) double executing;
@property(readonly) double queueing;
@property(readonly) double absoluteStart;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

