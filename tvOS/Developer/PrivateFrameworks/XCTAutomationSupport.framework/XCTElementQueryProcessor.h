//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCTCapabilities;
@protocol XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource;

@interface XCTElementQueryProcessor : NSObject
{
    id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> _dataSource;
    XCTCapabilities *_remoteInterfaceCapabilities;
}

@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) __weak id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)fetchMatchesForQuery:(id)arg1 clientCapabilities:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithDataSource:(id)arg1;

@end

