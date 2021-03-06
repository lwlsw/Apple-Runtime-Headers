//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidate.h>

@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate
{
    _Bool _emojiCandidate;
    _Bool _extensionCandidate;
    _Bool _isForShortcutConversion;
    _Bool _isAutocorrection;
    _Bool _OTAWordListCandidate;
    _Bool _regionalCandidate;
    _Bool _responseKitCandidate;
    _Bool _continuousPathConversion;
    NSString *_candidate;
    NSString *_input;
    NSNumber *_mecabraCandidatePointerValue;
    unsigned long long _deleteCount;
    long long _cursorMovement;
    NSString *_responseKitCategory;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isContinuousPathConversion) _Bool continuousPathConversion; // @synthesize continuousPathConversion=_continuousPathConversion;
- (id)responseKitCategory;
- (_Bool)isResponseKitCandidate;
- (long long)cursorMovement;
- (_Bool)isRegionalCandidate;
- (_Bool)isOTAWordListCandidate;
- (_Bool)isAutocorrection;
- (_Bool)isForShortcutConversion;
- (_Bool)isExtensionCandidate;
- (_Bool)isEmojiCandidate;
@property(retain, nonatomic) NSNumber *mecabraCandidatePointerValue; // @synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue;
- (id)input;
- (id)candidate;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)deleteCount;
- (_Bool)isFullwidthCandidate;
- (id)label;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4;
- (id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;

@end

