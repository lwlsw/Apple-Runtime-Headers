//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell
{
    _Bool _shouldUseMapTiles;
    UIImageView *_mapImageView;
}

+ (id)defaultMapImage;
@property(retain, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(nonatomic) _Bool shouldUseMapTiles; // @synthesize shouldUseMapTiles=_shouldUseMapTiles;
- (void).cxx_destruct;
- (void)tapGesture:(id)arg1;
- (void)mapSnapshotWithPlacemark:(id)arg1;
- (void)setMapImage:(id)arg1;
- (id)variableConstraints;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setProperty:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

