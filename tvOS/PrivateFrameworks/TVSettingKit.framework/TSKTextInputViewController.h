//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVSettingKit/SFPasswordSharingServiceDelegate-Protocol.h>
#import <TVSettingKit/TSKSettingItemEditingController-Protocol.h>
#import <TVSettingKit/TVSUITextEntryControllerDelegate-Protocol.h>

@class NSString, SFPasswordSharingService, TSKSettingItem, TVSUITextEntryController, TVSUITextEntryHeaderView;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TSKTextInputViewController : UIViewController <TVSUITextEntryControllerDelegate, SFPasswordSharingServiceDelegate, TSKSettingItemEditingController>
{
    TVSUITextEntryHeaderView *_headerView;
    SFPasswordSharingService *_passwordSharingService;
    TVSUITextEntryController *_textEntryController;
    _Bool _secureTextEntry;
    _Bool _allowsEmptyInput;
    _Bool _supportsPasswordSharing;
    TSKSettingItem *_editingItem;
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;
    NSString *_headerText;
    NSString *_messageText;
    NSString *_initialText;
    NSString *_recentsCategory;
    long long _capitalizationType;
    long long _keyboardType;
    NSString *_networkName;
}

@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(nonatomic) _Bool supportsPasswordSharing; // @synthesize supportsPasswordSharing=_supportsPasswordSharing;
@property(nonatomic) _Bool allowsEmptyInput; // @synthesize allowsEmptyInput=_allowsEmptyInput;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long capitalizationType; // @synthesize capitalizationType=_capitalizationType;
@property(copy, nonatomic) NSString *recentsCategory; // @synthesize recentsCategory=_recentsCategory;
@property(copy, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void).cxx_destruct;
- (_Bool)service:(id)arg1 shouldPromptForNetwork:(id)arg2;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (void)_passwordSharingEnsureStopped;
- (void)_passwordSharingEnsureStarted;
- (id)_messageStringAttributes;
- (id)_titleStringAttributes;
- (void)textEntryControllerDidFinish:(id)arg1;
- (void)_configureTextField;
- (void)_configureTitleView;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_menuPressed;
- (void)_donePressed:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (id)preferredFocusEnvironments;
- (void)_configureSubmitButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

