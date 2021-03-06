//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DiagCollectionClient, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface DiagnosticsController : NSObject
{
    DiagCollectionClient *deCollector;
    NSString *_autoBugCapturePath;
    NSNumber *_autoBugCaptureGID;
    NSNumber *_autoBugCaptureUID;
    NSMutableDictionary *_actionsDict;
    NSMutableDictionary *_settingsDict;
}

+ (id)loggingStateCache;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *settingsDict; // @synthesize settingsDict=_settingsDict;
@property(retain, nonatomic) NSMutableDictionary *actionsDict; // @synthesize actionsDict=_actionsDict;
@property(retain, nonatomic) NSNumber *autoBugCaptureUID; // @synthesize autoBugCaptureUID=_autoBugCaptureUID;
@property(retain, nonatomic) NSNumber *autoBugCaptureGID; // @synthesize autoBugCaptureGID=_autoBugCaptureGID;
@property(retain, nonatomic) NSString *autoBugCapturePath; // @synthesize autoBugCapturePath=_autoBugCapturePath;
- (void).cxx_destruct;
- (unsigned long long)collectDignosticExtensionFilesForDiagnosticCase:(id)arg1 parameters:(id)arg2 options:(id)arg3 queue:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)diagnosticExtensionsForDiagnosticCase:(id)arg1 enableCommonActions:(id)arg2;
- (void)lowerLoggingForDiagnosticCase:(id)arg1;
- (void)raiseLoggingForDiagnosticCase:(id)arg1;
- (void)applyLogLevel:(id)arg1 forIdentifier:(id)arg2 logSettingType:(unsigned long long)arg3;
- (BOOL)validateOSLogPreferencesProtocol:(id)arg1;
- (void)applyLogLevelSets:(id)arg1;
- (void)lowerLoggingForIdentifier:(id)arg1;
- (void)raiseLoggingForActions:(id)arg1 identifier:(id)arg2;
- (void)consolidateLoggingLevelsIntoSet:(id)arg1 withCurrentState:(id)arg2;
- (id)diagActionsForSignature:(id)arg1 commonActions:(id)arg2;
- (id)diagActionsForSignature:(id)arg1;
- (id)consolidatedLogLevelSetsFromActions:(id)arg1;
- (id)actionsDictionaryForProcess:(id)arg1 logLevel:(id)arg2 diagnosticExtensions:(id)arg3;
- (id)defaultsDictionaryWithAlwaysRunActions:(id)arg1;
- (id)diagExtensionCollector;
- (BOOL)validateSettingsNodeContents:(id)arg1 identifier:(id)arg2;
- (BOOL)validateSettingsNodeDictionary:(id)arg1 identifier:(id)arg2 isDefault:(BOOL)arg3;
- (BOOL)validateSettingsDictionary:(id)arg1;
- (BOOL)validateActionsDictionaryContent:(id)arg1 identifier:(id)arg2;
- (BOOL)validateActionsDictionary:(id)arg1;
- (BOOL)validateDiagnosticsConfiguration:(id)arg1;
- (void)configureWithDiagnosticActions:(id)arg1;
- (BOOL)_loadLoggingSupport;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

