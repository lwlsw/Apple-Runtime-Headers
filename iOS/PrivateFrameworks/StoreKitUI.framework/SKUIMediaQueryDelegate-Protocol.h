//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString, SKUIMediaQueryEvaluator;

@protocol SKUIMediaQueryDelegate <NSObject>
- (id)mediaQueryEvaluator:(SKUIMediaQueryEvaluator *)arg1 valueForKey:(NSString *)arg2;

@optional
- (void)mediaQueryEvaluatorDidChange:(SKUIMediaQueryEvaluator *)arg1;
@end

