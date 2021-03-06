//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFDialog.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SFBasicDialog : _SFDialog
{
    _Bool _canceledOnProvisionalNavigation;
    _Bool _canceledOnCommittedNavigation;
    _Bool _canceledOnApplicationBackground;
    _Bool _completionHandlerBlocksWebProcess;
    _Bool _alertControllerPresentsAsActionSheet;
    _Bool _shouldHideWebContent;
    NSArray *_additionalCancellationExemptions;
    int _presentationStyle;
    NSString *_title;
    NSString *_message;
    NSString *_defaultText;
    NSString *_textPlaceholder;
    NSString *_defaultPassword;
    NSString *_passwordPlaceholder;
    NSArray *_actions;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool shouldHideWebContent; // @synthesize shouldHideWebContent=_shouldHideWebContent;
@property(nonatomic) _Bool alertControllerPresentsAsActionSheet; // @synthesize alertControllerPresentsAsActionSheet=_alertControllerPresentsAsActionSheet;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *passwordPlaceholder; // @synthesize passwordPlaceholder=_passwordPlaceholder;
@property(copy, nonatomic) NSString *defaultPassword; // @synthesize defaultPassword=_defaultPassword;
@property(copy, nonatomic) NSString *textPlaceholder; // @synthesize textPlaceholder=_textPlaceholder;
@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) _Bool completionHandlerBlocksWebProcess; // @synthesize completionHandlerBlocksWebProcess=_completionHandlerBlocksWebProcess;
@property(copy, nonatomic) NSArray *additionalCancellationExemptions; // @synthesize additionalCancellationExemptions=_additionalCancellationExemptions;
@property(nonatomic) _Bool canceledOnApplicationBackground; // @synthesize canceledOnApplicationBackground=_canceledOnApplicationBackground;
@property(nonatomic) _Bool canceledOnCommittedNavigation; // @synthesize canceledOnCommittedNavigation=_canceledOnCommittedNavigation;
@property(nonatomic) _Bool canceledOnProvisionalNavigation; // @synthesize canceledOnProvisionalNavigation=_canceledOnProvisionalNavigation;
- (void).cxx_destruct;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)newDialogViewRepresentation;
- (id)init;

@end

