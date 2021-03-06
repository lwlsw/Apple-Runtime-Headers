//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFDownloadDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, NSTimer, NSURL, WBSCoalescedAsynchronousWriter, _SFDownloadIconCache;
@protocol _SFDownloadDelegate;

@interface _SFDownloadManager : NSObject <_SFDownloadDelegate>
{
    NSMutableArray *_downloads;
    NSURL *_downloadHistoryURL;
    WBSCoalescedAsynchronousWriter *_historyWriter;
    _Bool _loadedDownloadHistory;
    CDUnknownBlockType _blockToExecuteWhenDownloadHistoryIsLoaded;
    NSMapTable *_downloadsToDeferAdding;
    NSTimer *_removeDownloadsTimer;
    NSTimer *_updateTotalProgressTimer;
    NSURL *_downloadsRootURL;
    id <_SFDownloadDelegate> _extraDownloadDelegate;
    _SFDownloadIconCache *_iconCache;
    double _totalProgress;
}

+ (id)sharedManager;
+ (id)downloadRepresentationsAtURL:(id)arg1;
+ (id)defaultDownloadsHistoryURL;
@property(readonly, nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(readonly, nonatomic) _SFDownloadIconCache *iconCache; // @synthesize iconCache=_iconCache;
@property(nonatomic) __weak id <_SFDownloadDelegate> extraDownloadDelegate; // @synthesize extraDownloadDelegate=_extraDownloadDelegate;
@property(readonly, nonatomic) NSURL *downloadsRootURL; // @synthesize downloadsRootURL=_downloadsRootURL;
- (void).cxx_destruct;
- (void)downloadWillBeDeleted:(id)arg1;
- (void)downloadContentsDidChange:(id)arg1;
- (void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)createDirectoryForDownload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_containerDirectoryForDownload:(id)arg1;
- (void)downloadDidResume:(id)arg1;
- (void)downloadDidReceiveResponse:(id)arg1;
- (void)downloadDidImportFileToDownloadsFolder:(id)arg1;
- (_Bool)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)downloadDidFail:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (double)_calculateTotalProgress;
- (void)_updateTotalProgress:(id)arg1;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (id)_busyDownloads;
- (_Bool)shouldExcludeDownloadFromFileSystem:(id)arg1;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (void)_removeDeletedDownloads;
- (void)deferAddingDownloadWhenStarted:(id)arg1;
- (void)_addDownload:(id)arg1;
- (void)removeDownloadsStartedAfterDate:(id)arg1;
- (void)removeDownloads:(id)arg1;
- (void)_noteDownloadsChanged;
- (void)getDownloadsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePendingChangesBeforeTermination;
@property(readonly, copy, nonatomic) NSArray *downloads;
- (void)_loadDownloadHistory;
- (id)_dataForPersistingToHistory;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initAsReadonly:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

