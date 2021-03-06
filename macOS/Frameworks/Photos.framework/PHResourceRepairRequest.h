//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHResourceAvailabilityRequest.h>

@class NSSet;
@protocol PHResourceRepairRequestDelegate;

@interface PHResourceRepairRequest : PHResourceAvailabilityRequest
{
    id <PHResourceRepairRequestDelegate> _delegate;
    NSSet *_errorCodesToRepair;
}

+ (BOOL)appyCorrectionsToResource:(id)arg1 assetObjectID:(id)arg2 errorCodes:(id)arg3 context:(id)arg4;
@property(retain, nonatomic) NSSet *errorCodesToRepair; // @synthesize errorCodesToRepair=_errorCodesToRepair;
@property(nonatomic) __weak id <PHResourceRepairRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)arg1 dataStoreKey:(id)arg2 store:(id)arg3 assetObjectID:(id)arg4 context:(id)arg5 validationErrors:(id)arg6;
- (id)initWithTaskIdentifier:(id)arg1 resource:(id)arg2 assetObjectID:(id)arg3 validationErrors:(id)arg4;
- (void)runDaemonSide;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)_errorCodesFromErrors:(id)arg1;
- (void)_handleRepairFinishedNotification:(id)arg1;

@end

