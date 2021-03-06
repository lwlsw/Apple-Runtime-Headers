//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCollectionViewDataSource-Protocol.h>

@class NSArray, NSCollectionView, NSMutableArray, NSOrderedSet, NSString, NSUUID, _NSDataSourceSnapshotter, _NSDiffableDataSourceViewUpdater;
@protocol OS_dispatch_queue;

@interface __NSDiffableDataSource : NSObject <NSCollectionViewDataSource>
{
    NSCollectionView *_nsCollectionView;
    BOOL _isSnapshot;
    int _outstandingEnqueuedUpdateCount;
    CDUnknownBlockType _nsSupplementaryViewProvider;
    CDUnknownBlockType _collectionViewItemProvider;
    CDUnknownBlockType _nsCollectionViewItemReuseIdentifierProvider;
    CDUnknownBlockType _nsCollectionViewItemConfigurationHandler;
    _NSDiffableDataSourceViewUpdater *_viewUpdater;
    NSUUID *_dataSourceGeneration;
    NSObject<OS_dispatch_queue> *_updateQueue;
    unsigned long long _mutationQueueSource;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    _NSDataSourceSnapshotter *_dataSourceSnapshot;
    NSMutableArray *_pendingSnapshotUpdates;
}

@property(readonly, nonatomic) NSMutableArray *pendingSnapshotUpdates; // @synthesize pendingSnapshotUpdates=_pendingSnapshotUpdates;
@property(readonly, nonatomic) BOOL isSnapshot; // @synthesize isSnapshot=_isSnapshot;
@property(retain, nonatomic) _NSDataSourceSnapshotter *dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(retain, nonatomic) NSOrderedSet *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSOrderedSet *identifiers; // @synthesize identifiers=_identifiers;
@property unsigned long long mutationQueueSource; // @synthesize mutationQueueSource=_mutationQueueSource;
@property(readonly, nonatomic) int outstandingEnqueuedUpdateCount; // @synthesize outstandingEnqueuedUpdateCount=_outstandingEnqueuedUpdateCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain, nonatomic) NSUUID *dataSourceGeneration; // @synthesize dataSourceGeneration=_dataSourceGeneration;
@property(retain, nonatomic) _NSDiffableDataSourceViewUpdater *viewUpdater; // @synthesize viewUpdater=_viewUpdater;
@property(copy, nonatomic) CDUnknownBlockType nsCollectionViewItemConfigurationHandler; // @synthesize nsCollectionViewItemConfigurationHandler=_nsCollectionViewItemConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType nsCollectionViewItemReuseIdentifierProvider; // @synthesize nsCollectionViewItemReuseIdentifierProvider=_nsCollectionViewItemReuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType collectionViewItemProvider; // @synthesize collectionViewItemProvider=_collectionViewItemProvider;
@property(copy, nonatomic) CDUnknownBlockType nsSupplementaryViewProvider; // @synthesize nsSupplementaryViewProvider=_nsSupplementaryViewProvider;
@property(readonly, nonatomic) __weak NSCollectionView *nsCollectionView; // @synthesize nsCollectionView=_nsCollectionView;
- (void).cxx_destruct;
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 nsCollectionView:(id)arg3;
- (id)_itemAtIndexPath:(id)arg1 nsCollectionView:(id)arg2;
- (long long)_numberOfItemsInSection:(long long)arg1 nsCollectionView:(id)arg2;
- (long long)_numberOfSectionsForNSCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_snapshotWithHandlerAtomic:(CDUnknownBlockType)arg1;
- (BOOL)_canApplySnapshotUpdateWithoutDiffing:(id)arg1;
- (void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(BOOL)arg3;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1;
- (void)_commitUpdate:(id)arg1;
- (id)_pendingReloadUpdatesForDataSource:(id)arg1;
- (void)applySnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2;
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (id)emptySnapshot;
- (id)snapshot;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItemsInSection:(id)arg1;
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, copy) NSString *description;
- (id)initWithNSCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 itemConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithNSCollectionView:(id)arg1 itemProvider:(CDUnknownBlockType)arg2;
- (id)initWithViewUpdatesSink:(id)arg1;
- (id)initWithDataSourceGeneration:(id)arg1 sectionIdentifiers:(id)arg2 identifiers:(id)arg3 dataSourceSnapshot:(id)arg4;
- (id)initWithNSCollectionView:(id)arg1 itemProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 itemConfigurationHandler:(CDUnknownBlockType)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

