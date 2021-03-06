//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFCloudKitTask.h>

@class CKOperation, NSError, NSOperationQueue;

@interface WFCloudKitItemTask : WFCloudKitTask
{
    NSOperationQueue *_operationQueue;
    CKOperation *_cloudOperation;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CKOperation *cloudOperation; // @synthesize cloudOperation=_cloudOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;

@end

