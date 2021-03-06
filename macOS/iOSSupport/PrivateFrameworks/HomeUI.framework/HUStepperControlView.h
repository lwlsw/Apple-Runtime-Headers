//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSArray, NSFormatter, NSString, UILabel, UIStepper;
@protocol HUControlViewDelegate;

@interface HUStepperControlView : UIView <HUControlView>
{
    id <HUControlViewDelegate> _delegate;
    NSString *_identifier;
    id _value;
    NSFormatter *_valueFormatter;
    UIStepper *_stepper;
    UILabel *_valueLabel;
    NSArray *_layoutConstraints;
}

+ (Class)valueClass;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_stepperValueChanged:(id)arg1;
- (void)_stepperTouchUp:(id)arg1;
- (void)_stepperTouchDown:(id)arg1;
- (id)_defaultValueFormatter;
- (void)_updateValueLabel;
@property(nonatomic, getter=isDisabled) BOOL disabled;
- (void)updateConstraints;
@property(nonatomic) double stepValue;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL canBeHighlighted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

