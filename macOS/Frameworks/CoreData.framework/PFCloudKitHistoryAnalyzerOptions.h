//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions
{
    BOOL _includePrivateTransactions;
    CKRecordZone *_recordZone;
}

@property(nonatomic) BOOL includePrivateTransactions; // @synthesize includePrivateTransactions=_includePrivateTransactions;
@property(retain, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRecordZone:(id)arg1;

@end

