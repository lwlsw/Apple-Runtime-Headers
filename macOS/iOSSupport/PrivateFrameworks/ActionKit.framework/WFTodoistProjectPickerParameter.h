//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter
{
    BOOL _hasLoadedProjects;
    NSArray *_possibleStates;
    WFAccountAccessResource *_accessResource;
}

@property(nonatomic) BOOL hasLoadedProjects; // @synthesize hasLoadedProjects=_hasLoadedProjects;
@property(nonatomic) __weak WFAccountAccessResource *accessResource; // @synthesize accessResource=_accessResource;
- (id)possibleStates;
- (void).cxx_destruct;
- (void)dealloc;
- (id)projectNamed:(id)arg1;
- (void)setProjects:(id)arg1;
- (id)projects;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)loadProjectsFromCache;
- (void)fetchProjectsIfNeeded;
- (void)wasAddedToWorkflow;

@end

