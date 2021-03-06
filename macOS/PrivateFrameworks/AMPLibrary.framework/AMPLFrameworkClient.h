//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AMPLibrary/AMPLClient.h>

#import <AMPLibrary/AMPLClientProtocol-Protocol.h>

@class NSString;

@interface AMPLFrameworkClient : AMPLClient <AMPLClientProtocol>
{
    NSString *_deviceID;
    NSString *_libraryFilePath;
}

@property(retain, nonatomic) NSString *libraryFilePath; // @synthesize libraryFilePath=_libraryFilePath;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)synchronousParentalPreferencesWithReply:(CDUnknownBlockType)arg1;
- (void)synchronousMigratedMediaFolderBookmarkWithReply:(CDUnknownBlockType)arg1;
- (void)synchronousAppHasMigrated:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousMigratedPodcastSettingsWithReply:(CDUnknownBlockType)arg1;
- (void)synchronousMigratedPodcastStationsWithReply:(CDUnknownBlockType)arg1;
- (void)synchronousMigratedPodcastFeedsWithReply:(CDUnknownBlockType)arg1;
- (void)synchronousArtworkForMediaFile:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousReadWriteURLForMediaItem:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousRemoveDownloadForTracks:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)removeDownloadForTracks:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousGenresForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)genresForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)synchronousAlbumsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)albumsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)synchronousArtistsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)artistsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)synchronousTracksForPlaylist:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)tracksForPlaylist:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)synchronousDistinguishedPlaylistForDomains:(unsigned long long)arg1 withDistinguishedKind:(unsigned long long)arg2 withItems:(BOOL)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)synchronousPlaylistsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withItems:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)playlistsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withItems:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)synchronousMediaItemsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)mediaItemsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withDeviceCapabilities:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (BOOL)synchronousOpenMediaDomains:(id *)arg1 withResponseDict:(id *)arg2;
- (BOOL)synchronousOpenMediaDomains:(id *)arg1;
- (id)initWithClientInfo:(id)arg1 withDeviceId:(id)arg2;
- (id)initWithClientInfo:(id)arg1 withFilePath:(id)arg2 withMediaDomains:(unsigned long long)arg3;
- (id)initWithClientInfo:(id)arg1 withMediaDomains:(unsigned long long)arg2 error:(id *)arg3;
- (id)registrationNameForClientName:(id)arg1;
- (BOOL)handleReconnectionToLibrary:(id)arg1;
- (BOOL)handleSynchronousOpenMediaDomains:(id)arg1 error:(id *)arg2 withResponseDict:(id *)arg3;
- (BOOL)handleRegisterClientName:(id)arg1 withConnection:(id)arg2 error:(id *)arg3;

@end

