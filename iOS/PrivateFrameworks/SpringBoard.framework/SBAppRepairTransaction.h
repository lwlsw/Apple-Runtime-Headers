//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

@class NSMutableSet, NSSet, STTelephonyStatusDomain;

@interface SBAppRepairTransaction : SBTransaction
{
    NSSet *_appInfos;
    NSMutableSet *_repairRequests;
    STTelephonyStatusDomain *_telephonyDomain;
}

@property(readonly, copy, nonatomic) NSSet *appInfos; // @synthesize appInfos=_appInfos;
- (void).cxx_destruct;
- (void)_startAppRepairs;
- (void)_completeRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_evaluateCompletion;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (id)initWithApplicationInfos:(id)arg1;

@end

