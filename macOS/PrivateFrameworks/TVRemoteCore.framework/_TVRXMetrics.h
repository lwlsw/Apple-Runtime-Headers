//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _TVRXMetrics : NSObject
{
    NSMutableDictionary *_sessionEventCounts;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *sessionEventCounts; // @synthesize sessionEventCounts=_sessionEventCounts;
- (void).cxx_destruct;
- (void)endSessionForKey:(id)arg1;
- (void)incrementKey:(id)arg1 andSessionKey:(id)arg2;
- (void)incrementKey:(id)arg1;
- (id)init;

@end

