//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponsesPredictionParameters : NSObject
{
    _Bool _isPersonalizationDisabled;
    _Bool _isReplyTextRandomized;
    _Bool _isPerCategory;
    unsigned int _defaultResponsesToReturn;
    unsigned int _responsesToShowAtTopForDiversity;
    unsigned int _maxPromptLength;
    NSString *_promptJoiningString;
    double _weightForCategoryAverage;
    double _weightForCategoryMax;
    double _weightForIndividualModel;
    double _classDiscount;
    double _responsesBonus;
    double _minToShowThreshold;
    double _personalizationExplorationFactor;
    double _personalizationDisplayedPseudocount;
    double _personalizationSelectedPseudocountPerSemanticClass;
    double _maxPromptWindowSeconds;
}

@property(readonly, nonatomic) NSString *promptJoiningString; // @synthesize promptJoiningString=_promptJoiningString;
@property(readonly, nonatomic) double maxPromptWindowSeconds; // @synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds;
@property(readonly, nonatomic) unsigned int maxPromptLength; // @synthesize maxPromptLength=_maxPromptLength;
@property(readonly, nonatomic) double personalizationSelectedPseudocountPerSemanticClass; // @synthesize personalizationSelectedPseudocountPerSemanticClass=_personalizationSelectedPseudocountPerSemanticClass;
@property(readonly, nonatomic) double personalizationDisplayedPseudocount; // @synthesize personalizationDisplayedPseudocount=_personalizationDisplayedPseudocount;
@property(readonly, nonatomic) double personalizationExplorationFactor; // @synthesize personalizationExplorationFactor=_personalizationExplorationFactor;
@property(readonly, nonatomic) unsigned int responsesToShowAtTopForDiversity; // @synthesize responsesToShowAtTopForDiversity=_responsesToShowAtTopForDiversity;
@property(readonly, nonatomic) unsigned int defaultResponsesToReturn; // @synthesize defaultResponsesToReturn=_defaultResponsesToReturn;
@property(readonly, nonatomic) double minToShowThreshold; // @synthesize minToShowThreshold=_minToShowThreshold;
@property(readonly, nonatomic) double responsesBonus; // @synthesize responsesBonus=_responsesBonus;
@property(readonly, nonatomic) double classDiscount; // @synthesize classDiscount=_classDiscount;
@property(readonly, nonatomic) double weightForIndividualModel; // @synthesize weightForIndividualModel=_weightForIndividualModel;
@property(readonly, nonatomic) double weightForCategoryMax; // @synthesize weightForCategoryMax=_weightForCategoryMax;
@property(readonly, nonatomic) double weightForCategoryAverage; // @synthesize weightForCategoryAverage=_weightForCategoryAverage;
@property(readonly, nonatomic) _Bool isPerCategory; // @synthesize isPerCategory=_isPerCategory;
@property(readonly, nonatomic) _Bool isReplyTextRandomized; // @synthesize isReplyTextRandomized=_isReplyTextRandomized;
@property(readonly, nonatomic) _Bool isPersonalizationDisabled; // @synthesize isPersonalizationDisabled=_isPersonalizationDisabled;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

