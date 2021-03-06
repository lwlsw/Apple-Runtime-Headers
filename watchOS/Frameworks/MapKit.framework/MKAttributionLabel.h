//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView
{
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    unsigned int _mapType;
    _Bool _useDarkText;
}

@property(nonatomic) unsigned int mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTextColor;
- (void)_prepareLabel;
- (id)_attributesWithStroke:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

