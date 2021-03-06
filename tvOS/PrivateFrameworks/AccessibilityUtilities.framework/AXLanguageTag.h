//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSCopying-Protocol.h>

@class AXDialectMap, NSMutableOrderedSet, NSString;

@interface AXLanguageTag : NSObject <NSCopying>
{
    _Bool _wasPredicted;
    _Bool _createdFromNewline;
    NSString *_content;
    NSMutableOrderedSet *_unambiguousDialects;
    NSMutableOrderedSet *_ambiguousDialects;
    NSMutableOrderedSet *_predictedSecondaryDialects;
    struct _NSRange _range;
}

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange)arg2 content:(id)arg3 predictedByTagger:(_Bool)arg4;
@property(nonatomic) _Bool createdFromNewline; // @synthesize createdFromNewline=_createdFromNewline;
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects; // @synthesize predictedSecondaryDialects=_predictedSecondaryDialects;
@property(nonatomic) _Bool wasPredicted; // @synthesize wasPredicted=_wasPredicted;
@property(retain, nonatomic) NSMutableOrderedSet *ambiguousDialects; // @synthesize ambiguousDialects=_ambiguousDialects;
@property(retain, nonatomic) NSMutableOrderedSet *unambiguousDialects; // @synthesize unambiguousDialects=_unambiguousDialects;
@property(nonatomic) __weak NSString *content; // @synthesize content=_content;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canBeSpokenByLanguage:(id)arg1;
- (_Bool)canBeSpokenByDialect:(id)arg1;
- (id)description;
- (void)addPredictedSecondaryDialects:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addAmbiguousDialect:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
@property(readonly, nonatomic) __weak AXDialectMap *dialect;
@property(readonly, nonatomic) __weak NSString *contentSubstring;
@property(readonly, nonatomic) __weak AXDialectMap *preferredUnambiguousDialect;
@property(readonly, nonatomic) __weak AXDialectMap *preferredAmbiguousDialect;
- (_Bool)hasAmbigiousDialects;

@end

