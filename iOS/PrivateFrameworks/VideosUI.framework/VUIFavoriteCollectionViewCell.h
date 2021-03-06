//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIFavoriteView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteCollectionViewCell : VUIListCollectionViewCell
{
    VUIFavoriteView *_favoriteView;
    IKViewElement *_viewElement;
}

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIFavoriteView *favoriteView; // @synthesize favoriteView=_favoriteView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

