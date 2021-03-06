//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent
{
    PLXPCListenerOperatorComposition *_notification;
    PLXPCListenerOperatorComposition *_cMFileListener;
    PLXPCListenerOperatorComposition *_cMHlsListener;
    PLXPCListenerOperatorComposition *_cMCrabsListener;
    PLXPCListenerOperatorComposition *_vTSessionListener;
}

+ (id)stateEnumForStateString:(id)arg1;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
@property(retain) PLXPCListenerOperatorComposition *vTSessionListener; // @synthesize vTSessionListener=_vTSessionListener;
@property(retain) PLXPCListenerOperatorComposition *cMCrabsListener; // @synthesize cMCrabsListener=_cMCrabsListener;
@property(retain) PLXPCListenerOperatorComposition *cMHlsListener; // @synthesize cMHlsListener=_cMHlsListener;
@property(retain) PLXPCListenerOperatorComposition *cMFileListener; // @synthesize cMFileListener=_cMFileListener;
@property(retain) PLXPCListenerOperatorComposition *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)logEventBackwardVTSessionWithEntry:(id)arg1;
- (void)logEventBackwardCMCrabsWithEntry:(id)arg1;
- (void)logEventBackwardCMHlsWithEntry:(id)arg1;
- (void)logEventBackwardCMFileWithEntry:(id)arg1;
- (void)logEventForwardVideoWithEntry:(id)arg1;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end

