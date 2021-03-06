//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TNSheet.h>

@class NSString, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TNFormBasedSheet : TNSheet
{
    TSTTableInfo *_tableInfo;
    NSString *_importedTargetName;
    UUIDData_5fbc143e _tableUID;
}

@property(retain, nonatomic) NSString *importedTargetName; // @synthesize importedTargetName=_importedTargetName;
@property(nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)shouldBeDisplayed;
- (void)clearTableInfoCache;
@property(readonly, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (_Bool)isForm;
- (double)contentScale;

@end

