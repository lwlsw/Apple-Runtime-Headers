//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKPencilAnnotation-Protocol.h>

@class NSString, TSDPencilAnnotationStorage, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTPencilAnnotation : TSPObject <TSKPencilAnnotation>
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSTTableInfo *_table;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) __weak TSTTableInfo *table; // @synthesize table=_table;
@property(readonly, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (void).cxx_destruct;
-     // Error parsing type: v32@0:8^{PencilAnnotationArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Reference}^{Reference}}16@24, name: saveToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{PencilAnnotationArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Reference}^{Reference}}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSUCellRect)_cellRange;
@property(readonly, nonatomic) NSString *uuid;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2 pencilAnnotationStorage:(id)arg3;
- (id)initWithTableInfo:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

