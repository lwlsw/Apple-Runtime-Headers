//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopoverTouchBarItem.h>

@class NSView;
@protocol PopoverTouchBarItemPlusDelegate;

__attribute__((visibility("hidden")))
@interface PopoverTouchBarItemPlus : NSPopoverTouchBarItem
{
    NSView *_customCollapsedRepresentation;
    NSView *_customCustomizationView;
    id <PopoverTouchBarItemPlusDelegate> _popoverItemPlusDelegate;
}

@property(nonatomic) __weak id <PopoverTouchBarItemPlusDelegate> popoverItemPlusDelegate; // @synthesize popoverItemPlusDelegate=_popoverItemPlusDelegate;
- (void).cxx_destruct;
- (id)collapsedRepresentation;
- (id)makeViewForCustomizationPalette;

@end

