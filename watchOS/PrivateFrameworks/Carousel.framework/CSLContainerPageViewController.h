//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Carousel/CSLSwitcherViewController-Protocol.h>

@class CSLAppSwitcherItem, NSString;

@interface CSLContainerPageViewController : UIViewController <CSLSwitcherViewController>
{
    CDUnknownBlockType _unzoomActionBlock;
    CSLAppSwitcherItem *_switcherItem;
    UIViewController *_containeeViewController;
}

@property(retain, nonatomic) UIViewController *containeeViewController; // @synthesize containeeViewController=_containeeViewController;
@property(retain, nonatomic) CSLAppSwitcherItem *switcherItem; // @synthesize switcherItem=_switcherItem;
- (void).cxx_destruct;
- (void)claimContainee;
- (void)performUnzoomedActionAnimated:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
@property(readonly, copy) NSString *description;
- (id)initWithSwitcherItem:(id)arg1 unzoomActionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

