//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface HBUITopShelfSwipeUpAffordanceView : UIView
{
    _Bool _textLabelHidden;
    UILabel *_textLabel;
}

@property(readonly, nonatomic, getter=_textLabel) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic, getter=isTextLabelHidden) _Bool textLabelHidden; // @synthesize textLabelHidden=_textLabelHidden;
- (void).cxx_destruct;
- (void)_updateTextLabelText:(_Bool)arg1;
- (void)_applicationDidBecomeActive;
- (id)initWithFrame:(struct CGRect)arg1;

@end

