//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class SFCard, SFImage, SFMoreResults;

@protocol SFResourceLoader <NSObject>

@optional
- (_Bool)loadMoreResults:(SFMoreResults *)arg1 withCompletionHandler:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)loadCard:(SFCard *)arg1 withCompletionHandler:(void (^)(SFCard *, NSError *))arg2;
- (_Bool)loadImage:(SFImage *)arg1 withCompletionHandler:(void (^)(SFImage *, NSError *))arg2;
@end

