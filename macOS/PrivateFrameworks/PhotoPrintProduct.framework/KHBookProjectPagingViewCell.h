//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHProjectPagingViewCell.h>

@class NSMutableArray, UXImageView;

@interface KHBookProjectPagingViewCell : KHProjectPagingViewCell
{
    UXImageView *_decorationImageView;
    UXImageView *_shadowImageView;
    UXImageView *_overlayImageView;
    NSMutableArray *_decorationConstraints;
}

@property(retain, nonatomic) NSMutableArray *decorationConstraints; // @synthesize decorationConstraints=_decorationConstraints;
@property(readonly, nonatomic) UXImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(readonly, nonatomic) UXImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(readonly, nonatomic) UXImageView *decorationImageView; // @synthesize decorationImageView=_decorationImageView;
- (void).cxx_destruct;
- (void)_updateDecorationConstraintsForProjectLayouts:(id)arg1;
- (void)configureAccessoryButton:(id)arg1 forLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)updateDecorationsForProjectLayouts:(id)arg1;
- (void)configureDecorations;
- (id)initWithFrame:(struct CGRect)arg1;

@end

