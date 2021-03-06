//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKMedicationOrderType, NSArray, NSLocale, NSString, NSUUID;

@interface HKMedicationOrder : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    NSArray *_medicationCodings;
    NSString *_prescriber;
    long long _numberOfFills;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_writtenDate;
    HKMedicalDate *_endedDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_reasonCodings;
    NSArray *_reasonEndedCodings;
    HKConcept *_medication;
    HKConcept *_status;
    HKConcept *_reason;
    HKConcept *_reasonEnded;
}

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
+ (id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 prescriber:(id)arg12 numberOfFills:(long long)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 writtenDate:(id)arg16 endedDate:(id)arg17 statusCoding:(id)arg18 reasonCodings:(id)arg19 reasonEndedCodings:(id)arg20 config:(CDUnknownBlockType)arg21;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 prescriber:(id)arg12 numberOfFills:(long long)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 writtenDate:(id)arg16 endedDate:(id)arg17 statusCoding:(id)arg18 reasonCodings:(id)arg19 reasonEndedCodings:(id)arg20;
+ (id)defaultDisplayString;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)indexableConceptKeyPaths;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 medicationCodings:(id)arg10 prescriber:(id)arg11 numberOfFills:(long long)arg12 dosages:(id)arg13 earliestDosageDate:(id)arg14 writtenDate:(id)arg15 endedDate:(id)arg16 statusCoding:(id)arg17 reasonCodings:(id)arg18 reasonEndedCodings:(id)arg19;
+ (id)statusCodingPreferredSystems;
+ (id)reasonEndedCodingsPreferredSystems;
+ (id)reasonCodingsPreferredSystems;
+ (id)medicationCodingsPreferredSystems;
- (void).cxx_destruct;
@property(readonly, copy) HKMedicationOrderType *medicationOrderType;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_setReasonEnded:(id)arg1;
@property(readonly, copy) HKConcept *reasonEnded;
- (void)_setReason:(id)arg1;
@property(readonly, copy) HKConcept *reason;
- (void)_setStatus:(id)arg1;
@property(readonly, copy) HKConcept *status;
- (void)_setMedication:(id)arg1;
@property(readonly, copy) HKConcept *medication;
- (void)_setReasonEndedCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonEndedCodings;
- (void)_setReasonCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonCodings;
- (void)_setStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setEndedDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *endedDate;
- (void)_setWrittenDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *writtenDate;
- (void)_setEarliestDosageDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *earliestDosageDate;
- (void)_setDosages:(id)arg1;
@property(readonly, copy) NSArray *dosages;
- (void)_setNumberOfFills:(long long)arg1;
@property(readonly) long long numberOfFills;
- (void)_setPrescriber:(id)arg1;
@property(readonly, copy) NSString *prescriber;
- (void)_setMedicationCodings:(id)arg1;
@property(readonly, copy) NSArray *medicationCodings;
- (id)reasonEndedCodingsContext;
- (id)reasonEndedCodingsCollection;
- (id)reasonCodingsContext;
- (id)reasonCodingsCollection;
- (id)statusCodingContext;
- (id)statusCodingCollection;
- (id)medicationCodingsContext;
- (id)medicationCodingsCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)statusCodingTasks;
- (id)reasonEndedCodingsTasks;
- (id)reasonCodingsTasks;
- (id)medicationCodingsTasks;

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end

