//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleOverlapFeedback : NSObject
{
    _CDInteractionStore *_interactionStore;
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (void).cxx_destruct;
- (id)init;

@end

