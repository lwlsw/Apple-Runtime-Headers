//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUProgress;

__attribute__((visibility("hidden")))
@interface TSUProgressUserInfoObject : NSObject
{
    TSUProgress *_progress;
    id _progressObserver;
}

@property(retain, nonatomic) id progressObserver; // @synthesize progressObserver=_progressObserver;
@property(nonatomic) __weak TSUProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;

@end

