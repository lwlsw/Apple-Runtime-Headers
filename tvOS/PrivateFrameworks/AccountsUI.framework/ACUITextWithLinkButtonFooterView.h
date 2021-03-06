//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AccountsUI/PSHeaderFooterView-Protocol.h>

@class NSArray, NSString, UILabel;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView>
{
    NSArray *_linkButtons;
    UILabel *_textLabel;
    NSString *_footerText;
}

- (void).cxx_destruct;
- (double)_heightForEmptyLineConstrainedToWidth:(double)arg1;
- (double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2;
- (double)_heightForFooterTextConstrainedToWidth:(double)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1 linkButtons:(id)arg2;
- (id)initWithText:(id)arg1 linkButton:(id)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

