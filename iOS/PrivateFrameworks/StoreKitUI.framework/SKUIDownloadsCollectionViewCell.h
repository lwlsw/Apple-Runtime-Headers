//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell
{
    SKUIDownloadsCellView *_cellView;
    UIImageView *_editIndicator;
    long long _cellState;
}

@property(readonly, nonatomic) SKUIDownloadsCellView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
- (void).cxx_destruct;
- (void)_reloadEditState;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

