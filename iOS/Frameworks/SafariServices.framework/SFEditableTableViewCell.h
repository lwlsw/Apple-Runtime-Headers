//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

__attribute__((visibility("hidden")))
@interface SFEditableTableViewCell : UITableViewCell
{
    _Bool _enabled;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_updateTextFieldTextColor;
- (void)tintColorDidChange;
- (id)initWithEnabledState:(_Bool)arg1;

@end

