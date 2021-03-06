//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@class NSOrderedSet, NSSet;

@interface IBICBundleIconSet : IBICSlottedAsset
{
    _Bool _preRendered;
}

+ (id)catalogItemFileExtension;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (Class)assetRepClass;
@property(nonatomic, getter=isPreRendered) _Bool preRendered; // @synthesize preRendered=_preRendered;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (_Bool)requiresRootNamespace;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (_Bool)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (_Bool)manifestArchivist:(id)arg1 validateManifestChildEntry:(id)arg2 results:(id)arg3;
- (_Bool)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (id)effectiveModificationDateForCARCompiler;
- (id)initializeManifestArchivist;
@property(readonly, nonatomic) NSOrderedSet *intrinsicallyOrderedChildren;
@property(readonly, nonatomic) NSSet *children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end

