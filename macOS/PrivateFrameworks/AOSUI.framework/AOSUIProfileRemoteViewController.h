//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <AOSUI/AOSUIProfileViewHostDelegate-Protocol.h>

@protocol AOSUIProfileRemoteViewControllerDelegate;

@interface AOSUIProfileRemoteViewController : NSRemoteViewController <AOSUIProfileViewHostDelegate>
{
    id <AOSUIProfileRemoteViewControllerDelegate> _delegate;
}

+ (void)requestViewControllerWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <AOSUIProfileRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewHost_updateOverlayPrefPane:(BOOL)arg1 prefPanesToHide:(id)arg2;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end

