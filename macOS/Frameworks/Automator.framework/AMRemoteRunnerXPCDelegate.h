//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/AMRemoteRunnerXPCDelegateProtocol-Protocol.h>

@class AMRemoteRunnerController, AMWorkflow, NSMutableDictionary;
@protocol AMRunnerControllerDelegate;

@interface AMRemoteRunnerXPCDelegate : NSObject <AMRemoteRunnerXPCDelegateProtocol>
{
    AMWorkflow *_workflow;
    unsigned long long _runnerState;
    NSMutableDictionary *_conversionsByUUID;
    id <AMRunnerControllerDelegate> _runnerControllerDelegate;
    AMRemoteRunnerController *_remoteRunnerController;
    BOOL _didReceiveRemoteMessage;
}

@property BOOL didReceiveRemoteMessage; // @synthesize didReceiveRemoteMessage=_didReceiveRemoteMessage;
@property(retain) NSMutableDictionary *conversionsByUUID; // @synthesize conversionsByUUID=_conversionsByUUID;
@property unsigned long long runnerState; // @synthesize runnerState=_runnerState;
@property(retain) AMRemoteRunnerController *remoteRunnerController; // @synthesize remoteRunnerController=_remoteRunnerController;
@property __weak id <AMRunnerControllerDelegate> runnerControllerDelegate; // @synthesize runnerControllerDelegate=_runnerControllerDelegate;
@property(retain) AMWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (id)actionAtIndex:(unsigned long long)arg1;
- (id)updatedLocalConversionForXPCConversion:(id)arg1 uuid:(id)arg2;
- (void)remoteWorkflowRunnerDidChangeState:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidLogMessage:(id)arg1 ofType:(unsigned long long)arg2 fromActionAtIndex:(unsigned long long)arg3;
- (void)remoteWorkflowRunnerProgressDidChange:(double)arg1 forActionAtIndex:(unsigned long long)arg2;
- (void)remoteWorkflowRunnerDidResumeWithActionAtIndex:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidPause;
- (void)remoteWorkflowRunnerWillStop;
- (void)remoteWorkflowRunnerWillPause;
- (void)remoteWorkflowRunnerDidRunConversion:(id)arg1 uuid:(id)arg2;
- (void)remoteWorkflowRunnerWillRunConversion:(id)arg1 uuid:(id)arg2;
- (void)remoteWorkflowRunnerDidRunActionAtIndex:(unsigned long long)arg1 withResults:(id)arg2;
- (void)remoteWorkflowRunnerWillRunActionAtIndex:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidError:(id)arg1;
- (void)remoteWorkflowRunnerDidStopWithActionAtIndex:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidFinish;
- (void)remoteWorkflowRunnerDidRun;
- (void)remoteWorkflowRunnerWillRun;
- (void)handleCommunicationsError:(id)arg1;
- (id)initWithWorkflow:(id)arg1 remoteRunnerController:(id)arg2;

@end

