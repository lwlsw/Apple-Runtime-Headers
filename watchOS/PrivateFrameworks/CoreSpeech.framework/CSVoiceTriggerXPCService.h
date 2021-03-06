//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVoiceTriggerXPCClientDelegate-Protocol.h>

@class CSVoiceTriggerXPCClient, NSMutableSet, NSString;
@protocol CSVoiceTriggerXPCServiceDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate>
{
    _Bool _isPhraseSpotterBypassed;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVoiceTriggerXPCServiceDelegate> _delegate;
    NSMutableSet *_activationAssertions;
    CSVoiceTriggerXPCClient *_xpcClient;
}

+ (id)sharedServiceForCoreSpeechDaemon;
+ (id)sharedService;
@property(retain, nonatomic) CSVoiceTriggerXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(nonatomic) _Bool isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(nonatomic) __weak id <CSVoiceTriggerXPCServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_teardownXPCClientIfNeeded;
- (void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(_Bool)arg2;
- (id)_createXPCClientConnectionIfNeeded;
- (void)notifyServiceConnectionLostForCoreSpeechDaemon;
- (void)notifyVoiceTriggeredSiriSessionCancelledForCoreSpeechDaemon;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)setPhraseSpotterBypassingForCoreSpeechDaemon:(_Bool)arg1 timeout:(double)arg2;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)enableVoiceTriggerForCoreSpeechDaemon:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

