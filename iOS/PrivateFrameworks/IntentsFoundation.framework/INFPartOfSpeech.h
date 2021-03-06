//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsFoundation/INFSentenceToken.h>

@class NSMutableDictionary, NSString;

@interface INFPartOfSpeech : INFSentenceToken
{
    NSString *_identifier;
    unsigned long long _gender;
    NSString *_language;
    unsigned long long _partOfSpeechType;
    NSMutableDictionary *_variants;
}

+ (id)adjectiveWithIdentifier:(id)arg1 language:(id)arg2;
+ (id)nounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
+ (id)nounWithIdentifier:(id)arg1 language:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *variants; // @synthesize variants=_variants;
@property(nonatomic) unsigned long long partOfSpeechType; // @synthesize partOfSpeechType=_partOfSpeechType;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)stringForContext:(id)arg1;
- (id)contributingSentenceContext;
- (id)stringForVariantsDescriptor:(id)arg1;
- (void)setString:(id)arg1 forVariantsDescriptor:(id)arg2;
- (id)stringForVariants:(unsigned long long)arg1;
- (void)setString:(id)arg1 forVariants:(unsigned long long)arg2;
- (void)validateSelf;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
- (id)initWithDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithPartOfSpeechType:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)init;

@end

