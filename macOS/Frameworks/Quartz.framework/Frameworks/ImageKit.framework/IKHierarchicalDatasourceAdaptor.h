//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKImageBrowserView, NSMutableArray;
@protocol IKHierarchicalDatasource;

@interface IKHierarchicalDatasourceAdaptor : NSObject
{
    id _dataSource;
    id _imageBrowser;
    NSMutableArray *_items;
    NSMutableArray *_groups;
    BOOL _flattenedRepresentationValid;
}

@property id <IKHierarchicalDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property IKImageBrowserView *imageBrowser; // @synthesize imageBrowser=_imageBrowser;
- (BOOL)itemAtCellIndexAllowsChildAddAndRemove:(unsigned long long)arg1;
- (BOOL)topLevelAllowsAddAndRemove;
- (BOOL)dataSourceRestrictsAddAndRemove;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)copyItemsToDropLocation:(id)arg1;
- (void)moveItemsToDropLocation:(id)arg1 sourceHierarchicalDatasourceAdapter:(id)arg2;
- (void)addItemsAtDropLocation:(id)arg1;
- (id)topLevelItemAtDropLocation;
- (void)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2;
- (unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)imageBrowser:(id)arg1 groupAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfGroupsInImageBrowser:(id)arg1;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (unsigned long long)groupIndexAtCellIndex:(unsigned long long)arg1;
- (void)invalidate;
- (void)reloadData;
- (void)makeFlattenedRepresentationReady;
- (void)appendChildItemsOfItem:(id)arg1;
- (void)dealloc;
- (void)currentDropOperationParent:(id *)arg1 childIndex:(unsigned long long *)arg2 cellIndex:(unsigned long long *)arg3;
- (unsigned long long)convertToCellIndexChildIndex:(unsigned long long)arg1 ofParent:(id)arg2;
- (id)convertIndexesToParentsAndChildIndexes:(id)arg1;

@end

