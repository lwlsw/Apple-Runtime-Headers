//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IKViewElement, _TVOneUpSection;

@protocol _TVOneUpSection
@property(readonly, nonatomic) long long autoHighlightIndex;
- (long long)newItemIndexForOldItemIndex:(long long)arg1;
- (_Bool)itemsChangeSetContainsMovedAddedOrRemovedItems;
- (void)configureItemsChangeSetWithSection:(_TVOneUpSection *)arg1;
- (void)resetAutoHighlightIndex;
- (void)unloadIndex:(long long)arg1;
- (void)loadIndex:(long long)arg1;
- (IKViewElement *)elementForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
@end

