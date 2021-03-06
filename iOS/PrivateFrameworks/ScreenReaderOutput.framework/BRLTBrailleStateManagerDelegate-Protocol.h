//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class BRLTBrailleChar, BRLTBrailleString, BRLTScriptString, NSString;

@protocol BRLTBrailleStateManagerDelegate <NSObject>
- (void)didInsertScriptString:(NSString *)arg1;
- (void)scriptSelectionDidChange:(struct _NSRange)arg1;
- (void)replaceScriptStringRange:(struct _NSRange)arg1 withScriptString:(BRLTScriptString *)arg2 cursorLocation:(unsigned long long)arg3;
- (void)brailleDisplayStringDidChange:(BRLTBrailleString *)arg1 brailleSelection:(struct _NSRange)arg2;
- (void)brailleDisplayDeletedCharacter:(BRLTBrailleChar *)arg1;
- (void)brailleDisplayInsertedCharacter:(BRLTBrailleChar *)arg1;
@end

