//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutItemSolver, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutSupplementaryRegistrar;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionListSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>
{
    struct vector<CGRect, std::__1::allocator<CGRect>> _itemFrames;
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;
    _Bool _layoutRTL;
    NSCollectionLayoutSection *_layoutSection;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    int _layoutAxis;
    int _containerLayoutAxis;
    int _frameCount;
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id <NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
    id <_UICollectionPreferredSizes> _preferredSizes;
    struct CGPoint _orthogonalOffset;
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;
}

@property(nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector; // @synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector;
@property(retain, nonatomic) id <_UICollectionPreferredSizes> preferredSizes; // @synthesize preferredSizes=_preferredSizes;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> memoizedAuxillaryHostContainer; // @synthesize memoizedAuxillaryHostContainer=_memoizedAuxillaryHostContainer;
@property(retain, nonatomic) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator; // @synthesize sectionGeometryTranslator=_sectionGeometryTranslator;
@property(retain, nonatomic) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar; // @synthesize sectionSupplementaryRegistrar=_sectionSupplementaryRegistrar;
@property(retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *sectionAuxillarySolution; // @synthesize sectionAuxillarySolution=_sectionAuxillarySolution;
@property(retain, nonatomic) _UICollectionLayoutItemSolver *solution; // @synthesize solution=_solution;
@property(nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) int containerLayoutAxis; // @synthesize containerLayoutAxis=_containerLayoutAxis;
@property(nonatomic) int layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(retain, nonatomic) NSCollectionLayoutSection *layoutSection; // @synthesize layoutSection=_layoutSection;
@property(nonatomic) struct CGPoint orthogonalOffset; // @synthesize orthogonalOffset=_orthogonalOffset;
@property(nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution; // @synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_dimensionForRootGroupAlongAxis:(int)arg1;
- (void)_setOrthogonalOffset:(struct CGPoint)arg1;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostSupplementaryEnroller;
- (int)auxillaryHostAuxillaryKind;
- (int)auxillaryHostLayoutAxis;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostAuxillaryItems;
- (id)auxillaryHostContainer;
- (struct CGSize)auxillaryHostPinningContentSize;
- (struct CGSize)auxillaryHostContentSize;
- (int)_binarySearchInitialFrameIndexForStartIndex:(int)arg1 endIndex:(int)arg2 lowIndex:(int)arg3 queryRect:(struct CGRect)arg4;
- (id)_sectionContainer;
- (id)_queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (id)_resolveWithParameters:(id)arg1;
- (id)supplementaryKeysAssociatedWithItemAtIndex:(int)arg1;
- (id)allSupplementaryKeys;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(int)arg2;
- (int)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;
- (id)sectionSupplementaryFrameForIndex:(int)arg1;
- (id)supplementaryFrameWithKind:(id)arg1 index:(int)arg2;
- (id)frameForIndex:(int)arg1;
@property(readonly, nonatomic) struct CGRect effectiveContentFrame;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
- (id)visualDescription;
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (id)queryFramesIntersectingRect:(struct CGRect)arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(int)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(int)arg4 preferredSizes:(id)arg5;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(int)arg4;
- (id)initWithLayoutSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

