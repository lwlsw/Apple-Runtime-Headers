//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, OKPresentationViewAllGestureRecognizer;

@interface OKPresentationViewProxy : OFUIView <UIGestureRecognizerDelegate>
{
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
}

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleAllGesture:(id)arg1;
- (id)presentationViewController;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

