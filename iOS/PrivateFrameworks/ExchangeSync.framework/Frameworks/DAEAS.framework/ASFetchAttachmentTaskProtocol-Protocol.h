//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/DATask-Protocol.h>

@class NSFileHandle, NSString;

@protocol ASFetchAttachmentTaskProtocol <DATask>
- (void)setLocalFileHandle:(NSFileHandle *)arg1;
- (NSFileHandle *)localFileHandle;
- (void)setLocalFileLength:(unsigned long long)arg1;
- (unsigned long long)localFileLength;
- (void)setAttachmentContentType:(NSString *)arg1;
- (NSString *)attachmentContentType;
- (void)setLocalFileName:(NSString *)arg1;
- (NSString *)localFileName;
- (void)setMessageID:(NSString *)arg1;
- (NSString *)messageID;
- (void)setAttachmentName:(NSString *)arg1;
- (NSString *)attachmentName;
- (void)setAttachmentUUID:(NSString *)arg1;
- (NSString *)attachmentUUID;
- (id)initForMessageUUID:(NSString *)arg1;
- (id)initForMessageServerID:(NSString *)arg1 andAttachmentName:(NSString *)arg2;
@end

