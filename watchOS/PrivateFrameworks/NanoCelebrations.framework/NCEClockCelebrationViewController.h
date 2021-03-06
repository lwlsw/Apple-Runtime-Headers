//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoCelebrations/CSLPIButtonHandlerProtocol-Protocol.h>
#import <NanoCelebrations/CSLSUIProvider-Protocol.h>
#import <NanoCelebrations/NCEBulletinsLiaisonTriggerDelegate-Protocol.h>

@class CSLSBacklightAssertion, NCEFireVector, NCENotificationManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol NCEClockCelebrationViewControllerDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface NCEClockCelebrationViewController : UIViewController <CSLSUIProvider, NCEBulletinsLiaisonTriggerDelegate, CSLPIButtonHandlerProtocol>
{
    _Bool _enableAnimations;
    _Bool _checkAfterAnimation;
    _Bool _pendingFire;
    id <NCEClockCelebrationViewControllerDelegate> _delegate;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NCEFireVector *_currentCelebration;
    NSMutableSet *_fireQueue;
    NSMutableArray *_timers;
    CDUnknownBlockType _terminationBlock;
    NSString *_lastSetupDate;
    NSString *_lastBirthdayString;
    CSLSBacklightAssertion *_backlightAssertion;
    NSObject<OS_dispatch_source> *_fireDelayTimer;
    NSObject<OS_dispatch_source> *_sendStatsTimer;
    NSMutableDictionary *_ncStats;
    NCENotificationManager *_notificationManager;
}

@property(retain, nonatomic) NCENotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) NSMutableDictionary *ncStats; // @synthesize ncStats=_ncStats;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sendStatsTimer; // @synthesize sendStatsTimer=_sendStatsTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fireDelayTimer; // @synthesize fireDelayTimer=_fireDelayTimer;
@property(retain, nonatomic) CSLSBacklightAssertion *backlightAssertion; // @synthesize backlightAssertion=_backlightAssertion;
@property(retain, nonatomic) NSString *lastBirthdayString; // @synthesize lastBirthdayString=_lastBirthdayString;
@property(retain, nonatomic) NSString *lastSetupDate; // @synthesize lastSetupDate=_lastSetupDate;
@property(copy, nonatomic) CDUnknownBlockType terminationBlock; // @synthesize terminationBlock=_terminationBlock;
@property(nonatomic) _Bool pendingFire; // @synthesize pendingFire=_pendingFire;
@property(retain, nonatomic) NSMutableArray *timers; // @synthesize timers=_timers;
@property(retain, nonatomic) NSMutableSet *fireQueue; // @synthesize fireQueue=_fireQueue;
@property(nonatomic) _Bool checkAfterAnimation; // @synthesize checkAfterAnimation=_checkAfterAnimation;
@property(retain, nonatomic) NCEFireVector *currentCelebration; // @synthesize currentCelebration=_currentCelebration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) __weak id <NCEClockCelebrationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableAnimations; // @synthesize enableAnimations=_enableAnimations;
- (void).cxx_destruct;
- (void)requestUITriggerWithRegistration:(id)arg1 UITriggerName:(id)arg2 withDictionary:(id)arg3 withReason:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)setupTriggers;
- (void)bulletinsLiaison:(id)arg1 didTriggerBulletinForCelebrationName:(id)arg2;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (_Bool)canBecomeFirstResponder;
- (void)_clockBecameVisible;
- (void)_backlightDidTurnOff;
- (void)_backlightDidTurnOn;
- (void)tapped:(id)arg1;
- (void)sendHistogramStats;
- (void)countFiring:(id)arg1 celebration:(id)arg2;
- (void)fireQueueEntry:(id)arg1;
- (void)fireQueueEntryAfter:(double)arg1;
- (void)enqueueFireCandidate:(id)arg1 onOrAfter:(id)arg2;
- (id)fetchFireCandidate:(double)arg1;
- (void)animateAlphaOut;
- (void)animateAlphaIn;
- (_Bool)stopAnimation:(id)arg1;
- (void)receivedChange;
- (void)viewDidLoad;
- (void)setupNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

