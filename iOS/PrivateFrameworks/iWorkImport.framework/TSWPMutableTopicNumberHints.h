//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPTopicNumberHints-Protocol.h>

@class NSString, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSWPMutableTopicNumberHints : NSObject <TSWPTopicNumberHints>
{
    TSUPointerKeyDictionary *_numbersForListStyle;
    unsigned long long _charIndex;
    unsigned long long _validThroughCharIndex;
}

+ (id)p_deepCopyDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)reset;
- (void)advanceToCharIndex:(unsigned long long)arg1 storage:(id)arg2;
- (void)backUpByOneParagraphWithPreviousState:(id)arg1 storage:(id)arg2;
- (void)unarchiveSetEntries:(struct NSMutableArray *)arg1 forListStyle:(id)arg2;
- (void)setTopicNumber:(unsigned long long)arg1 forList:(id)arg2 level:(unsigned long long)arg3 charIndex:(unsigned long long)arg4;
- (unsigned long long)previousCharIndexForList:(id)arg1 level:(unsigned long long)arg2;
- (unsigned long long)nextTopicNumberForList:(id)arg1 level:(unsigned long long)arg2;
- (void)offsetCharIndexBy:(long long)arg1 startCharIndex:(unsigned long long)arg2;
- (_Bool)isEquivalentStateToTopicNumberHints:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setCharIndex:(unsigned long long)arg1 validThroughCharIndex:(unsigned long long)arg2;
- (unsigned long long)charIndexValidThrough;
- (unsigned long long)charIndex;
- (id)entries;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

