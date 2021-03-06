//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface CSLBubbleRecord : NSObject
{
    UIView *_bubble;
    float _distanceFromCenter;
    struct CGPoint _weightedTravelPoint;
}

+ (id)bubbleRecordWithBubble:(id)arg1 targetFrame:(struct CGRect)arg2 andDistanceFromCenter:(float)arg3;
@property(nonatomic) float distanceFromCenter; // @synthesize distanceFromCenter=_distanceFromCenter;
@property(nonatomic) struct CGPoint weightedTravelPoint; // @synthesize weightedTravelPoint=_weightedTravelPoint;
@property(nonatomic) __weak UIView *bubble; // @synthesize bubble=_bubble;
- (void).cxx_destruct;
- (id)description;

@end

