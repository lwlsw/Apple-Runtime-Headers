//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UILayoutEngineSuspending-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending>
{
    struct {
        unsigned int edgesForOverridingDefaultLayoutMargins:4;
    } _contentViewFlags;
    BOOL _isLayoutEngineSuspended;
    CALayer *_mask;
    struct NSDirectionalEdgeInsets _overriddenDefaultLayoutMargins;
}

+ (id)classFallbacksForKeyedArchiver;
@property(nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) struct NSDirectionalEdgeInsets overriddenDefaultLayoutMargins; // @synthesize overriddenDefaultLayoutMargins=_overriddenDefaultLayoutMargins;
@property(retain, nonatomic) CALayer *mask; // @synthesize mask=_mask;
@property(nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) BOOL _layoutEngineSuspended; // @synthesize _layoutEngineSuspended=_isLayoutEngineSuspended;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_cell;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_tableViewCellContentViewCommonSetup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

