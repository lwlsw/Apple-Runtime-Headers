//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarouselUIServices/CUISAlertViewController.h>

#import <Carousel/CUISAlertAnimatedTransitioning-Protocol.h>
#import <Carousel/PUICActionSheetControllerDelegate-Protocol.h>

@class CSLUISound, CSLUserNotificationImageDescriptor, CUISAlertSheetController, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, NSTimer, UIColor;
@protocol CSLUserNotificationViewControllerDelegate, OS_dispatch_source;

@interface CSLUserNotificationViewController : CUISAlertViewController <CUISAlertAnimatedTransitioning, PUICActionSheetControllerDelegate>
{
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    unsigned long _requestFlags;
    int _token;
    int _timeout;
    unsigned int _replyFlags;
    _Bool _bypassDND;
    NSDictionary *_noteDictionary;
    CUISAlertSheetController *_alertSheet;
    NSTimer *_expirationTimer;
    CSLUISound *_sound;
    _Bool _soundPlayed;
    NSMutableArray *_textFields;
    NSMutableArray *_buttons;
    _Bool _defaultButtonNotSet;
    _Bool _alertDismissed;
    NSString *_processDescription;
    id <CSLUserNotificationViewControllerDelegate> _delegate;
    id _policyOverrideAssertion;
    unsigned long _systemSoundID;
    NSString *_soundPath;
    NSString *_alertHeader;
    UIColor *_alertTint;
    NSString *_alertMessage;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_iconPath;
    CSLUserNotificationImageDescriptor *_imageDescriptor;
    NSNumber *_dismissForReplyPortInvalidation;
}

@property(retain, nonatomic) NSNumber *dismissForReplyPortInvalidation; // @synthesize dismissForReplyPortInvalidation=_dismissForReplyPortInvalidation;
@property(retain, nonatomic) CSLUserNotificationImageDescriptor *imageDescriptor; // @synthesize imageDescriptor=_imageDescriptor;
@property(retain, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(retain, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) UIColor *alertTint; // @synthesize alertTint=_alertTint;
@property(retain, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(retain, nonatomic) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property(nonatomic) unsigned long systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(retain, nonatomic) id policyOverrideAssertion; // @synthesize policyOverrideAssertion=_policyOverrideAssertion;
@property(nonatomic) __weak id <CSLUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)wantsDismissalForDNDGesture;
- (void)animateAlertTransition:(id)arg1;
- (double)alertTransitionDuration:(id)arg1;
- (id)animationControllerForDismissal;
- (id)animationControllerForPresentation;
- (void)actionContentControllerCancel:(id)arg1;
- (void)actionSheetController:(id)arg1 didDismissWithActionAtIndexPath:(id)arg2;
- (_Bool)allowAutoDismissAfterBacklightOff;
- (void)cancel;
- (void)_dismissAlert;
- (void)_cleanup;
- (void)_sendResponse:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_handleExpiration:(id)arg1;
- (void)_resetExpirationTimer;
- (void)deactivate;
- (void)replyPortDied;
- (void)activate;
- (id)sound;
- (int)token;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;
- (id)actions;
- (void)_reloadData;
- (void)_loadImage;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(CDStruct_6ad76789)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

