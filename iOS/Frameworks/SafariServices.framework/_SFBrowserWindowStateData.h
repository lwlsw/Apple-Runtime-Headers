//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface _SFBrowserWindowStateData : NSObject
{
    _Bool _isActiveDocumentValid;
    _Bool _isTabStateSuccessfullyLoaded;
    _Bool _needsQuickUpdate;
    long long _databaseID;
    NSString *_UUIDString;
    long long _type;
    long long _activeDocumentIndex;
    long long _activePrivateDocumentIndex;
    long long _legacyPlistFileVersion;
    NSString *_sceneID;
}

@property(retain, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) _Bool needsQuickUpdate; // @synthesize needsQuickUpdate=_needsQuickUpdate;
@property(nonatomic) long long legacyPlistFileVersion; // @synthesize legacyPlistFileVersion=_legacyPlistFileVersion;
@property(nonatomic) _Bool isTabStateSuccessfullyLoaded; // @synthesize isTabStateSuccessfullyLoaded=_isTabStateSuccessfullyLoaded;
@property(nonatomic) _Bool isActiveDocumentValid; // @synthesize isActiveDocumentValid=_isActiveDocumentValid;
@property(nonatomic) long long activePrivateDocumentIndex; // @synthesize activePrivateDocumentIndex=_activePrivateDocumentIndex;
@property(nonatomic) long long activeDocumentIndex; // @synthesize activeDocumentIndex=_activeDocumentIndex;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInDatabase;
- (id)dictionaryPresentation;
@property(retain, nonatomic) NSUUID *UUID;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithUUIDString:(id)arg1 sceneID:(id)arg2;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithDictionaryPresentation:(id)arg1;

@end

