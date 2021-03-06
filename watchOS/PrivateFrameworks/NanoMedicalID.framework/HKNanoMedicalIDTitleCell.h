//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewCell.h>

#import <NanoMedicalID/HKNanoMedicalIDCell-Protocol.h>

@class NSLayoutConstraint, NSString, PUICKeylineView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface HKNanoMedicalIDTitleCell : PUICTableViewCell <HKNanoMedicalIDCell>
{
    UILabel *_headerLabel;
    UIButton *_doneButton;
    UIImageView *_medicalIdImageView;
    PUICKeylineView *_separator;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_headerLabelTopConstraint;
    CDUnknownBlockType _dismissHandler;
}

+ (id)identifier;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_addSeparatorConstraints;
- (void)_addDoneButtonConstraints;
- (void)_addHeaderLabelConstraints;
- (void)_addImageViewConstraints:(struct CGSize)arg1;
- (void)setData:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setInteractive:(_Bool)arg1;
- (_Bool)isInteractive;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

