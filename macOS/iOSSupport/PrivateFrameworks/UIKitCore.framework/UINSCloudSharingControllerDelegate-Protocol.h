//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSData, NSError, NSString;
@protocol UINSCloudSharingController;

@protocol UINSCloudSharingControllerDelegate <NSObject>
- (void)cloudSharingControllerDidStopSharing:(id <UINSCloudSharingController>)arg1;
- (void)cloudSharingControllerDidSaveShare:(id <UINSCloudSharingController>)arg1;
- (NSString *)itemTypeForCloudSharingController:(id <UINSCloudSharingController>)arg1;
- (NSData *)itemThumbnailDataForCloudSharingController:(id <UINSCloudSharingController>)arg1;
- (NSString *)itemTitleForCloudSharingController:(id <UINSCloudSharingController>)arg1;
- (void)cloudSharingController:(id <UINSCloudSharingController>)arg1 failedToSaveShareWithError:(NSError *)arg2;
@end

