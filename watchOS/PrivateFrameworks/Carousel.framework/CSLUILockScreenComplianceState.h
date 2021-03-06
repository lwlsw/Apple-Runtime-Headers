//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLPasscodeComplianceViewControllerDelegate-Protocol.h>
#import <Carousel/CSLUILockScreenState-Protocol.h>

@class NSString, UIViewController;
@protocol CSLUILockScreenStateTransitionDelegate;

@interface CSLUILockScreenComplianceState : NSObject <CSLPasscodeComplianceViewControllerDelegate, CSLUILockScreenState>
{
    id <CSLUILockScreenStateTransitionDelegate> _delegate;
    UIViewController *_contentViewController;
}

+ (_Bool)isValid;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <CSLUILockScreenStateTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)complianceViewControllerDidFinish:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

