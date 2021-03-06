//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetCollection.h>

@class IBMutableIdentityDictionary;

@interface IBICAbstractTextureSet : IBICSlottedAssetCollection
{
    IBMutableIdentityDictionary *_childrenToTextureFormats;
    long long _textureOrigin;
    long long _textureContentIntent;
}

+ (Class)requiredChildrenClass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)createDefaultInstancesForUnitTesting;
@property(nonatomic) long long textureContentIntent; // @synthesize textureContentIntent=_textureContentIntent;
@property(nonatomic) long long textureOrigin; // @synthesize textureOrigin=_textureOrigin;
- (void).cxx_destruct;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (id)children;
- (Class)expectedChildClassForSlot:(id)arg1;
- (id)runtimeNamespaceQualifier;
- (id)defaultUnqualifiedRuntimeName;
- (CDStruct_2a4d9400)taggingSupport;
- (id)initializeManifestArchivist;
- (_Bool)manifestArchivist:(id)arg1 validateManifestChildEntry:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (_Bool)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (_Bool)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (id)explicitPixelFormatForChild:(id)arg1;
- (void)setExplicitPixelFormat:(id)arg1 forChild:(id)arg2;
- (id)slotForChild:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (_Bool)applyTextureSizeFromBaseMipRep:(id)arg1 toAssetImportInfo:(id)arg2;
- (_Bool)populateNamedAssetImportInfo:(id)arg1 forChild:(id)arg2 allCompiledItems:(id)arg3 withOptions:(id)arg4 error:(id *)arg5;

@end

