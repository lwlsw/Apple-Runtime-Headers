//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_semaphore;

@interface PPQuickTypeCachedNameLookup : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sem;
    NSArray *_candidates;
}

@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
- (void).cxx_destruct;

@end

