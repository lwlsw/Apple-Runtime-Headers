//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WFTextEditingHintView : UIView
{
    NSString *_hintText;
    UIView *_backgroundView;
    UILabel *_hintLabel;
}

@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

