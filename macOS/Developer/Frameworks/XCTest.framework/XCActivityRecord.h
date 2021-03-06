//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>
#import <XCTest/XCTActivity-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString, NSUUID;

@interface XCActivityRecord : NSObject <NSSecureCoding, XCTActivity>
{
    NSString *_title;
    NSString *_activityType;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    NSMutableArray *_attachments;
    BOOL _valid;
    BOOL _useLegacySerializationFormat;
    NSString *_aggregationIdentifier;
    double _subactivitiesDuration;
    BOOL _isTopLevel;
}

+ (BOOL)_shouldSaveAttachmentWithName:(id)arg1 lifetime:(long long)arg2;
+ (BOOL)supportsSecureCoding;
@property BOOL isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(readonly, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(readonly) double subactivitiesDuration; // @synthesize subactivitiesDuration=_subactivitiesDuration;
@property(copy) NSString *aggregationIdentifier; // @synthesize aggregationIdentifier=_aggregationIdentifier;
@property BOOL useLegacySerializationFormat; // @synthesize useLegacySerializationFormat=_useLegacySerializationFormat;
@property(copy) NSDate *start; // @synthesize start=_start;
@property(copy) NSDate *finish; // @synthesize finish=_finish;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)subactivityCompletedWithDuration:(double)arg1;
- (void)_synchronized_ensureValid;
- (void)invalidate;
@property(readonly) double duration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSArray *attachments; // @synthesize attachments=_attachments;
- (void)addAttachment:(id)arg1;
- (void)_synchronized_addAttachment:(id)arg1;
- (void)removeAttachmentsWithName:(id)arg1;
- (id)attachmentForName:(id)arg1;
- (void)addSynthesizedEvent:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (void)addScreenImageData:(id)arg1 forceKeepAlways:(BOOL)arg2;
- (void)addMemoryGraphData:(id)arg1;
- (void)addDiagnosticReportData:(id)arg1;
- (void)_synchronized_removeAttachmentsWithName:(id)arg1;
- (id)_synchronized_attachmentForName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_decodeLegacyAttachments:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)init;
- (void)attachAutomaticScreenshotForDevice:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

