//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SAJSONSerialization-Protocol.h>
#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, SACSSymbolOwnerWrapper;

@interface SABinary : NSObject <SAJSONSerialization, SASerializable>
{
    SACSSymbolOwnerWrapper *_symbolOwnerWrapper;
    unsigned long long _alreadyAttempted;
    _Bool _attemptedToGetBundleInfo;
    NSString *_name;
    unsigned long long _numInstructionsWhenLastSymbolicated;
    unsigned long long _optionsWhenLastSymbolicated;
    _Bool _hadSymbolOwnerWhenLastSymbolicated;
    _Bool _symbolOwnerWasDsymWhenLastSymbolicated;
    unsigned long long _numInstructionsWhenLastBulkSymbolicated;
    unsigned long long _textSegmentLength;
    BOOL _hasTextExecSegment;
    NSUUID *_uuid;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_binaryVersion;
    NSMutableDictionary *_instructions;
    NSMutableArray *_symbols;
}

+ (void)addSymbolsFromTailspin:(id)arg1;
+ (void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2;
+ (void)addDsymPaths:(id)arg1;
+ (id)_dsymPaths;
+ (void)_addDsymPath:(id)arg1;
+ (void)_doDsymPathsWork:(CDUnknownBlockType)arg1;
+ (id)binaryWithCSSymbolOwner:(struct _CSTypeRef)arg1;
+ (id)binaryWithCSSymbolOwner:(struct _CSTypeRef)arg1 isSparse:(BOOL)arg2;
+ (id)binaryWithUUID:(id)arg1;
+ (void)enableImmediateCleanupOfCSSymbolOwners;
+ (void)clearCoreSymbolicationCaches;
+ (void)clearSymbolCaches;
+ (void)clearCaches;
+ (void)_doCachedBinariesWork:(CDUnknownBlockType)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_5c58afa3 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(readonly) NSMutableArray *symbols; // @synthesize symbols=_symbols;
@property(readonly) NSMutableDictionary *instructions; // @synthesize instructions=_instructions;
@property(retain) NSString *binaryVersion; // @synthesize binaryVersion=_binaryVersion;
@property(retain) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSString *path; // @synthesize path=_path;
@property BOOL hasTextExecSegment; // @synthesize hasTextExecSegment=_hasTextExecSegment;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)clearSymbolCache;
- (void)clearCoreSymbolicationCache;
@property unsigned long long textSegmentLength;
- (void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (id)addSymbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3;
- (void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2;
- (void)gatherBundleInfo;
- (id)symbolOwnerWrapperWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (BOOL)findPathViaBinaryLocator;
- (BOOL)setSymbolOwner:(struct _CSTypeRef)arg1;
- (BOOL)setSymbolOwner:(struct _CSTypeRef)arg1 isSparse:(BOOL)arg2;
- (id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1;
- (id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1;
- (void)checkForNewSymbolForInstruction:(id)arg1;
- (void)addBulkSymbolicationSymbols:(id)arg1;
- (BOOL)mightBenefitFromBulkSymbolication;
- (void)addTailspinSymbols:(id)arg1;
- (void)addPath:(id)arg1;
@property(retain) NSString *name;
- (id)initWithUUID:(id)arg1;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (void)populateReferencesUsingBuffer:(const CDStruct_5c58afa3 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_5c58afa3 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

