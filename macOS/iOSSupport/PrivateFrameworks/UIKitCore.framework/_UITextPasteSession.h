//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDropPasteSession-Protocol.h>

@class NSArray, NSAttributedString, NSString, UITextPasteController, UITextPasteCoordinator, UITextRange;
@protocol UITextPasteSessionDelegate, _UITextPasteProgressSupport;

__attribute__((visibility("hidden")))
@interface _UITextPasteSession : NSObject <UITextDropPasteSession>
{
    BOOL _animating;
    id <UITextPasteSessionDelegate> _delegate;
    UITextPasteController *_controller;
    UITextPasteCoordinator *_coordinator;
    UITextRange *_range;
    id <_UITextPasteProgressSupport> _progressSupport;
    NSAttributedString *_pasteResult;
    NSArray *_originalItems;
    UITextRange *_hiddenRange;
}

@property(readonly, nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UITextRange *hiddenRange; // @synthesize hiddenRange=_hiddenRange;
@property(copy, nonatomic) NSArray *originalItems; // @synthesize originalItems=_originalItems;
@property(retain, nonatomic) NSAttributedString *pasteResult; // @synthesize pasteResult=_pasteResult;
@property(retain, nonatomic) id <_UITextPasteProgressSupport> progressSupport; // @synthesize progressSupport=_progressSupport;
@property(retain, nonatomic) UITextRange *range; // @synthesize range=_range;
@property(retain, nonatomic) UITextPasteCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak UITextPasteController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <UITextPasteSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationCompleted;
- (void)animationStarted;
- (id)positionedPasteResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

