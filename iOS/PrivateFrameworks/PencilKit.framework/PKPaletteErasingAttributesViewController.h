//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol PKPaletteErasingAttributesViewControllerDelegate;

@interface PKPaletteErasingAttributesViewController : UIViewController
{
    id <PKPaletteErasingAttributesViewControllerDelegate> _delegate;
}

+ (double)_preferredContentSizeWidth;
@property(nonatomic) __weak id <PKPaletteErasingAttributesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
@property(nonatomic) long long eraserType;
- (_Bool)_canShowWhileLocked;
- (void)_segmentedControlDidChangeValue:(id)arg1;
- (void)loadView;

@end

