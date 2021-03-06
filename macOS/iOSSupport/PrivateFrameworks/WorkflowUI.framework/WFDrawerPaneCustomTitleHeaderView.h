//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFDrawerPaneHeaderView-Protocol.h>

@class NSString, WFDrawerPaneCloseButton;
@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView>
{
    id <WFDrawerPaneHeaderViewDelegate> _delegate;
    UIView *_titleView;
    WFDrawerPaneCloseButton *_closeButton;
}

@property(readonly, nonatomic) __weak WFDrawerPaneCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WFDrawerPaneHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeButtonTouchedUp:(id)arg1;
- (id)layoutConstraints;
- (id)initWithTitleView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

