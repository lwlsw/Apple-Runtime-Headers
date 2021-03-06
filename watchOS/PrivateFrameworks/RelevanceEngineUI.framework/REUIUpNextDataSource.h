//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngineUI/UICollectionViewDataSource-Protocol.h>
#import <RelevanceEngineUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSString, RERelevanceEngine, REUIRelevanceEngineController;
@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIUpNextDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource>
{
    REUIRelevanceEngineController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <REUIRelevanceEngineControllerDelegate> delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(readonly, nonatomic) NSArray *sectionOrder;
@property(readonly, nonatomic) RERelevanceEngine *relevanceEngine;
- (id)_sectionTitleAtIndex:(unsigned int)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

