//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStore-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class NSString, NSURL;
@protocol DNDSBackingStoreDelegate;

@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore>
{
    Class _recordClass;
    NSURL *_fileURL;
    unsigned int _versionNumber;
    _Bool _deviceOutOfSpace;
    id <DNDSBackingStoreDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSBackingStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)sysdiagnoseDataForDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (unsigned int)writeRecord:(id)arg1 error:(id *)arg2;
- (id)readRecordWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

