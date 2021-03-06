//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DCCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;
@protocol DCProgressViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DCProgressViewController : UIViewController
{
    BOOL _showsCancel;
    NSProgress *_observedProgress;
    id <DCProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    DCCircularProgressView *_circularProgressView;
}

@property(retain, nonatomic) DCCircularProgressView *circularProgressView; // @synthesize circularProgressView=_circularProgressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <DCProgressViewControllerDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) BOOL showsCancel; // @synthesize showsCancel=_showsCancel;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

