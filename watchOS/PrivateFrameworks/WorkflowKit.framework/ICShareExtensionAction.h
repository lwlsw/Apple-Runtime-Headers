//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/ICAction.h>

@class ICShareExtension, NSArray, NSString;

@interface ICShareExtensionAction : ICAction
{
    ICShareExtension *_shareExtension;
}

@property(readonly, nonatomic) __weak ICShareExtension *shareExtension; // @synthesize shareExtension=_shareExtension;
- (void).cxx_destruct;
- (void)addContentToShareController:(id)arg1 withInput:(id)arg2 parameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)textItemHandling;
@property(readonly, nonatomic) NSArray *contentItemClasses;
@property(readonly, nonatomic) NSArray *socialTypes;
@property(readonly, nonatomic) NSString *inputType;
- (_Bool)inputsMultipleItems;
- (_Bool)inputRequired;
- (id)inputContentClasses;
- (id)descriptionDictionary;
- (id)category;
- (id)identifier;
- (id)name;
- (id)initWithDefinition:(id)arg1 shareExtension:(id)arg2;

@end

