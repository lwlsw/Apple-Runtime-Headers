//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKDSystemAvailabilityWatcher;

__attribute__((visibility("hidden")))
@interface CKDSystemAvailabilityWatcherWrapper : NSObject
{
    id <CKDSystemAvailabilityWatcher> _delegate;
    NSString *_personaID;
}

@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(nonatomic) __weak id <CKDSystemAvailabilityWatcher> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;

@end

