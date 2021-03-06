//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/UIEditable-Protocol.h>
#import <UIKitCore/_UICollectionViewListCellReorderControlDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UICellAccessoryManager, _UICollectionViewListCellVisualProvider;
@protocol UITableConstants;

@interface _UICollectionViewListCell : UICollectionViewCell <UIEditable, _UICollectionViewListCellReorderControlDelegate>
{
    struct {
        unsigned int needsUpdateAccessories:1;
        unsigned int usesCustomBackgroundView:1;
        unsigned int usesCustomSelectedBackgroundView:1;
        unsigned int usesCustomBackgroundColor:1;
        unsigned int isEditing:1;
    } _tableCellFlags;
    _UICollectionViewListCellVisualProvider *_visualProvider;
    NSMutableDictionary *_accessoryData;
    struct UIEdgeInsets _contentViewInset;
    long long _selectionStyle;
    id <UITableConstants> _constants;
    UICellAccessoryManager *_accessoryManager;
}

+ (id)_createVisualProviderForCell:(id)arg1;
@property(readonly, nonatomic, getter=_accessoryManager) UICellAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(readonly, nonatomic, getter=_constants) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void).cxx_destruct;
- (void)_reorderControlDidEndReordering:(id)arg1 cancelled:(_Bool)arg2;
- (void)_reorderControl:(id)arg1 didMoveToPoint:(struct CGPoint)arg2;
- (void)_reorderControlDidBeginReordering:(id)arg1;
- (_Bool)_reorderControlShouldBeginReordering:(id)arg1;
- (id)_table;
- (id)_editingControlTintColorForStyle:(long long)arg1;
- (long long)_cellStyle;
- (double)_defaultTrailingCellMarginWidth;
- (struct UIEdgeInsets)_contentViewInset;
- (id)_accessoryForRawAxis:(long long)arg1;
- (void)_setAccessory:(id)arg1 forRawAxis:(long long)arg2;
- (void)setAccessoryView:(id)arg1 forAxis:(long long)arg2;
- (id)accessoryViewForAxis:(long long)arg1;
- (void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2;
- (long long)accessoryTypeForAxis:(long long)arg1;
- (id)_accessoryViewForType:(long long)arg1;
- (id)_accessoriesForType:(long long)arg1 view:(id)arg2 editing:(_Bool)arg3;
- (void)_updateAccessoriesIfNeeded;
- (void)_setNeedsUpdateAccessories;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (_Bool)_canFocusProgrammatically;
- (long long)_defaultFocusStyle;
- (void)setBackgroundColor:(id)arg1;
- (id)selectedBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)_defaultBackgroundView:(_Bool)arg1;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic) _Bool canBeEdited;
- (void)_constantsDidChange;
- (void)_updateConstants;
- (void)didMoveToSuperview;
- (void)safeAreaInsetsDidChange;
- (void)_layoutAccessories;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

