//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitClient/NNMKNanoMailServiceXPCAdHocClientInterface-Protocol.h>
#import <NanoMailKitClient/NNMKNanoMailServiceXPCBasicClientInterface-Protocol.h>
#import <NanoMailKitClient/NNMKNanoMailServiceXPCConversationsBrowsingBasedClientInterface-Protocol.h>
#import <NanoMailKitClient/NNMKNanoMailServiceXPCMessageUpdatesBasedClientInterface-Protocol.h>

@class NSString, NSXPCConnection, NSXPCInterface;
@protocol NNMKNanoMailServiceDelegate, OS_dispatch_queue;

@interface NNMKNanoMailService : NSObject <NNMKNanoMailServiceXPCBasicClientInterface, NNMKNanoMailServiceXPCConversationsBrowsingBasedClientInterface, NNMKNanoMailServiceXPCMessageUpdatesBasedClientInterface, NNMKNanoMailServiceXPCAdHocClientInterface>
{
    _Bool _shouldReconnectWhenConnectionIsInterrupted;
    id <NNMKNanoMailServiceDelegate> _delegate;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_receiverQueue;
    NSString *_serviceName;
    NSXPCInterface *_interface;
}

@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property _Bool shouldReconnectWhenConnectionIsInterrupted; // @synthesize shouldReconnectWhenConnectionIsInterrupted=_shouldReconnectWhenConnectionIsInterrupted;
@property __weak id <NNMKNanoMailServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_pingServerAndNotifyDelegateDidResetXPCConnection;
- (void)_pingServer;
- (void)pingServer;
- (void)_runOnServer:(CDUnknownBlockType)arg1;
- (void)_xpcServerBecameAvailable;
- (oneway void)receiverXPCServerDidReplyWithAllMessages:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithMessagesCount:(unsigned int)arg1;
- (oneway void)receiverXPCServerConnectivityDidChange:(_Bool)arg1;
- (oneway void)receiverXPCServerDidRequestReloadCache;
- (oneway void)receiverXPCServerDidDeleteAllMessages;
- (oneway void)receiverXPCServerDidNotifyFetchRequestCompleted:(_Bool)arg1 mailboxIds:(id)arg2;
- (oneway void)receiverXPCServerDidNotifyOldMessagesAvailable;
- (oneway void)receiverXPCServerDidFailSyncingMessagesWithError:(id)arg1;
- (oneway void)receiverXPCServerDidFinishSyncingMessagesSuccessfullyReceivingMessages:(_Bool)arg1 initialMessages:(_Bool)arg2;
- (oneway void)receiverXPCServerDidChangeMailboxSelection:(id)arg1;
- (oneway void)receiverXPCServerDidDeleteAccountWithId:(id)arg1;
- (oneway void)receiverXPCServerDidUpdateAccount:(id)arg1;
- (oneway void)receiverXPCServerDidAddNewAccount:(id)arg1;
- (oneway void)receiverXPCServerDidUpdateMailboxWithId:(id)arg1 lastUpdate:(id)arg2;
- (oneway void)receiverXPCServerChangeAccountValidationStatus:(unsigned int)arg1 accountName:(id)arg2;
- (oneway void)receiverXPCServerDidFailWithError:(id)arg1;
- (oneway void)receiverXPCServerDidReportProgress:(int)arg1 forComposedMessageWithId:(id)arg2 referenceMessageId:(id)arg3;
- (oneway void)receiverXPCServerDidReceiveImageAttachmentForMessageWithId:(id)arg1 contentId:(id)arg2;
- (oneway void)receiverXPCServerDidReceiveContentForMessageWithId:(id)arg1;
- (oneway void)receiverXPCServerDidExecuteConversationOperations:(id)arg1;
- (oneway void)receiverXPCServerDidReportSendingComposedMessageStartedWithId:(id)arg1 referenceMessageId:(id)arg2;
- (oneway void)receiverXPCServerDidReportFailureSendingComposedMessageWithId:(id)arg1 subject:(id)arg2;
- (oneway void)receiverXPCServerDidDeleteMessageWithId:(id)arg1;
- (oneway void)receiverXPCServerDidUpdateMessage:(id)arg1;
- (oneway void)receiverXPCServerDidReceiveMessage:(id)arg1 replacingPreviousMessageWithId:(id)arg2;
- (oneway void)receiverXPCServerDidAddNewMessage:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithFirstUnreadMessages:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithIsConnected:(_Bool)arg1;
- (oneway void)receiverXPCServerDidReplyWithFailedComposedMessageIdsAndSubjects:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithComposedMessageIds:(id)arg1 progress:(id)arg2;
- (oneway void)receiverXPCServerDidReplyWithEnabledMailboxFeatures:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithAccounts:(id)arg1 error:(id)arg2;
- (oneway void)receiverXPCServerDidReplyWithMailboxSelection:(id)arg1;
- (oneway void)receiverXPCServerDidFailSyncingAttachment:(id)arg1 messageId:(id)arg2;
- (oneway void)receiverXPCServerDidReplyWithMessageContentLoadFailedForMessageWithId:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithAddedSubsectionId:(id)arg1 inParentSectionId:(id)arg2;
- (oneway void)receiverXPCServerDidReplyWithMessageContent:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithMessage:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithConversationOperations:(id)arg1 totalConversationsCount:(unsigned int)arg2 willFetch:(_Bool)arg3 error:(id)arg4 reloadCache:(_Bool)arg5 lastUpdateByMailboxId:(id)arg6;
- (void)requestFetchOldMessages;
- (void)requestAllMessages;
- (void)deleteAllMessages;
- (void)requestMessagesCount;
- (void)addMailbox:(id)arg1;
- (void)removeSubsectionWithId:(id)arg1;
- (void)addSubsectionEnabledNotifications:(_Bool)arg1;
- (void)addMessageContent:(id)arg1 preview:(id)arg2 messageId:(id)arg3;
- (void)addMessage:(id)arg1;
- (void)notifyWhenDoneProcessingWithBlock:(CDUnknownBlockType)arg1;
- (void)resendComposedMessageWithId:(id)arg1;
- (void)discardComposedMessageWithId:(id)arg1;
- (void)recordNotificationSettingsEnabled:(_Bool)arg1;
- (void)recordEventAppLaunched;
- (void)sendComposedMessage:(id)arg1;
- (void)preventDatabaseCompactingProcedure;
- (void)permitDatabaseCompactingProcedure;
- (void)removeMessagesBasedOnCurrentMailboxType;
- (void)requestFetchManualForConversationWithId:(id)arg1;
- (void)requestFetchManualForceBatchResponse:(_Bool)arg1;
- (void)requestFetchResume;
- (void)deleteMessages:(id)arg1;
- (void)updateMessagesStatus:(id)arg1;
- (void)requestSyncOfPreviewForMessageWithId:(id)arg1;
- (void)requestIsConnected;
- (void)requestFirstUnreadMessagesWithContent:(unsigned int)arg1 sinceDate:(id)arg2 fromAccountsWithIds:(id)arg3 orVIPs:(_Bool)arg4 orNotifyConversation:(_Bool)arg5 excludingMessageIds:(id)arg6;
- (void)requestFailedComposedMessages;
- (void)requestSendingProgress;
- (void)requestEnabledMailboxFeatures;
- (void)requestAccounts;
- (void)notifyOpenedMessageWithId:(id)arg1;
- (void)requestMessageWithId:(id)arg1;
- (void)setupContentForUITest:(id)arg1;
- (void)requestMoreMessagesForConversationWithId:(id)arg1;
- (void)requestConversationsReceivedBefore:(id)arg1 count:(unsigned int)arg2;
- (void)requestFirstConversations:(unsigned int)arg1 forMailboxFilter:(id)arg2;
- (void)requestMailboxSelection;
- (void)updateMailboxSelection:(id)arg1;
- (void)dealloc;
- (void)_handleConnectionInvalidated;
- (void)_initializeXPCConnection;
- (id)initWithServiceName:(id)arg1 interface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

