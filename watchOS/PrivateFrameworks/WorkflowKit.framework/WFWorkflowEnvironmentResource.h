//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import <WorkflowKit/WFWorkflowReferencingResource-Protocol.h>

@class NSString, WFWorkflow;

@interface WFWorkflowEnvironmentResource : WFResource <WFWorkflowReferencingResource>
{
    WFWorkflow *_workflow;
}

+ (_Bool)mustBeAvailableForDisplay;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (void)refreshAvailability;
- (_Bool)workflowEnvironmentIsValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

