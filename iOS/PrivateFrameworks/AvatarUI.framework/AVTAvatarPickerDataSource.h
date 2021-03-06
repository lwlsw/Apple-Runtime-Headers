//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarRecordDataSource, AVTUIEnvironment, NSArray;
@protocol AVTAvatarListItem, AVTAvatarStore;

@interface AVTAvatarPickerDataSource : NSObject
{
    _Bool _allowAddItem;
    AVTUIEnvironment *_environment;
    AVTAvatarRecordDataSource *_recordDataSource;
    NSArray *_items;
    id <AVTAvatarListItem> _addItem;
}

@property(retain, nonatomic) id <AVTAvatarListItem> addItem; // @synthesize addItem=_addItem;
@property(nonatomic) _Bool allowAddItem; // @synthesize allowAddItem=_allowAddItem;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) AVTAvatarRecordDataSource *recordDataSource; // @synthesize recordDataSource=_recordDataSource;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (long long)indexOfAddItem;
- (_Bool)isItemAtIndexAddItem:(long long)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)reloadModel;
- (_Bool)canCreateMemoji;
@property(readonly, nonatomic) id <AVTAvatarStore> store;
- (id)initWithRecordDataSource:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;

@end

