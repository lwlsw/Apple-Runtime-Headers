//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFHardwareSecureElementInfo, NSNumber, NSString;

@interface NFSecureElement : NSObject
{
    NFHardwareSecureElementInfo *_info;
    BOOL _isDirty;
}

+ (unsigned int)supportedTechnologies;
+ (id)icefallSecureElement;
+ (id)embeddedSecureElement;
- (BOOL)isSeshatAvailabledInRestrictedMode;
- (unsigned int)hwType;
- (id)manifestQueryBlob;
- (void)_updateSecureElementInfo:(id)arg1;
- (void)_markDirty;
- (void)_setIsInRestrictedPerformanceMode:(BOOL)arg1;
- (void)_setIsInRestrictedMode:(BOOL)arg1;
- (void)_updateIfDirty;
@property(readonly) unsigned int supportedTechnologies;
@property(readonly) NSNumber *sequenceCounter;
@property(readonly) unsigned long long fullOSVersion;
@property(readonly) unsigned long long OSVersion;
@property(readonly) BOOL isInRestrictedMode;
@property(readonly) BOOL isProductionSigned;
@property(readonly) NSString *eckaCertificate;
@property(readonly) NSString *eccCertificate;
@property(readonly) NSString *rsaCertificate;
@property(readonly) NSString *serialNumber;
- (id)identifier;
- (id)info;
- (void)dealloc;
- (id)_initWithInfo:(id)arg1;

@end

