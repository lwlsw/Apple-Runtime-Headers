//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <C2/NSObject-Protocol.h>

@class C2Session, C2SessionTask, NSError;

@protocol C2SessionTaskDelegate <NSObject>
- (void)C2Session:(C2Session *)arg1 task:(C2SessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
@end

