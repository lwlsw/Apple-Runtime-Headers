//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject
{
    BOOL _didFinish;
    NSDictionary *_errors;
}

@property(nonatomic) BOOL didFinish; // @synthesize didFinish=_didFinish;
@property(retain, nonatomic) NSDictionary *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (id)description;

@end

