//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBSUIRemoteAlertItemContentServiceInterface-Protocol.h>

@class NSString;

@interface SBSUIRemoteAlertItemContentViewController : UIViewController <SBSUIRemoteAlertItemContentServiceInterface>
{
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void)getPreferredContentSizeWithReplyBlock:(CDUnknownBlockType)arg1;
- (void)viewDidLayoutSubviews;
- (void)invalidatePreferredContentSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

