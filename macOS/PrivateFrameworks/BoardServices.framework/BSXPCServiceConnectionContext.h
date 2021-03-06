//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/NSCopying-Protocol.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying>
{
    NSString *_proem;
}

@property(readonly, copy, nonatomic) NSString *loggingProem; // @synthesize loggingProem=_proem;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isChild) BOOL child;
@property(readonly, nonatomic, getter=isRoot) BOOL root;
@property(readonly, nonatomic, getter=isClient) BOOL client;
@property(readonly, nonatomic, getter=isServer) BOOL server;
@property(readonly, copy, nonatomic) NSString *endpointDescription;
- (id)_initWithProem:(id)arg1;
- (id)init;

@end

