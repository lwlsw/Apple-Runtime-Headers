//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSError;
@protocol NSSecureCoding;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding>
{
    id <NSSecureCoding> _remoteRequestOperationResponse;
    NSError *_remoteRequestOperationError;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *remoteRequestOperationError; // @synthesize remoteRequestOperationError=_remoteRequestOperationError;
@property(retain, nonatomic) id <NSSecureCoding> remoteRequestOperationResponse; // @synthesize remoteRequestOperationResponse=_remoteRequestOperationResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2;

@end

