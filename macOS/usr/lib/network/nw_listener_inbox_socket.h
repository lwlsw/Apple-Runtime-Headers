//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <network/nw_listener_inbox.h>

__attribute__((visibility("hidden")))
@interface nw_listener_inbox_socket : nw_listener_inbox
{
    void *_source;
    int _sockfd_for_logging_only_do_not_close_or_use;
    int _sockfd_from_client;
    unsigned char _ipProtocol;
    unsigned char _listenUUID[16];
}

- (BOOL)cancel;
- (BOOL)resume;
- (BOOL)suspend;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2 necpUUID:(unsigned char [16])arg3;
- (id)description;
- (id)initWithSocket:(int)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)start;

@end

