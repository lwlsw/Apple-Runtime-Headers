//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SUICFauxFlamesView : UIView
{
    long long _style;
    double _width;
    CDStruct_65a63019 _sequenceAttributes;
}

+ (id)_frameImagesForSequence:(CDStruct_65a63019)arg1;
- (void)_cleanupView;
- (_Bool)isAnimating;
- (void)stop:(_Bool)arg1;
- (void)start:(_Bool)arg1;
- (void)prewarm;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 screenSize:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

