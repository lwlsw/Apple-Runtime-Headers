//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class EDSheet, EDWorkbook, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMState : CMState
{
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
    NSMutableDictionary *_hyperlinks;
}

@property __weak EDSheet *currentSheet; // @synthesize currentSheet=_currentSheet;
- (void).cxx_destruct;
- (void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

// Remaining properties
@property(retain) EDWorkbook *document; // @dynamic document;

@end

