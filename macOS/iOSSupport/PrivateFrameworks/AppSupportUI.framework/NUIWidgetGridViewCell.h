//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppSupportUI/NUIContainerStackView.h>

#import <AppSupportUI/NUIContainerViewDelegate-Protocol.h>
#import <AppSupportUI/NUIWidgetGridViewCell-Protocol.h>

@class NSString, NUIWidgetGridView, UIImageView, UILabel;

@interface NUIWidgetGridViewCell : NUIContainerStackView <NUIContainerViewDelegate, NUIWidgetGridViewCell>
{
    double _width;
    struct CGSize _measuredSize;
    unsigned long long _index;
    BOOL _donatableSpaceIsValid;
    BOOL _accessibilityEnabled;
    struct {
        double leading;
        double trailing;
    } _donatableSpace;
    NUIWidgetGridView *_gridView;
}

@property(readonly, nonatomic) __weak NUIWidgetGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (CDStruct_c3b9c2ee)donatableSpace;
- (CDStruct_c3b9c2ee)donatableSpaceAllowRemeasure:(BOOL)arg1;
- (void)invalidateIntrinsicContentSize;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
@property(readonly, nonatomic) UIImageView *imageView;
- (id)currentFont;
- (id)_createLabelForStyle:(long long)arg1;
- (id)_createButtonWithGridView:(id)arg1 item:(id)arg2;
- (void)_didTapButton;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long index;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

