//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSProgress, SMSystem_Daemon;

@interface SMConfMigrator : NSObject
{
    BOOL _doNotModifyTarget;
    SMSystem_Daemon *_source;
    SMSystem_Daemon *_destination;
    NSProgress *_parentProgress;
    double _parentProgressPendingUnits;
    NSArray *_synthesizedLegacyServerRules;
}

+ (id)stringBySubstitutingEnvironmentVariablesInString:(id)arg1 environment:(id)arg2;
+ (id)migrationDataVersion;
+ (id)confMigratorDictionary;
+ (id)confMigratorDirectory;
+ (id)baseMigrationDataBundle;
@property BOOL doNotModifyTarget; // @synthesize doNotModifyTarget=_doNotModifyTarget;
@property(retain) NSArray *synthesizedLegacyServerRules; // @synthesize synthesizedLegacyServerRules=_synthesizedLegacyServerRules;
@property double parentProgressPendingUnits; // @synthesize parentProgressPendingUnits=_parentProgressPendingUnits;
@property(retain) NSProgress *parentProgress; // @synthesize parentProgress=_parentProgress;
@property __weak SMSystem_Daemon *destination; // @synthesize destination=_destination;
@property __weak SMSystem_Daemon *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)executeToolAtPath:(id)arg1 withArguments:(id)arg2 andCopyPath:(id)arg3 usingDeferral:(BOOL)arg4 allowSIP:(BOOL)arg5;
- (void)executeToolAtPath:(id)arg1 withArguments:(id)arg2 andCopyPath:(id)arg3;
- (void)migrateAllSettingsWithGroupName:(id)arg1;
- (void)migrateWithRule:(id)arg1;
- (id)allApplicableRules:(unsigned long long)arg1;
- (id)synthesizeLegacyServerRulesFromPather:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2;

@end

