//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMNamedEntitiesDonation : NSObject
{
    PETDistributionEventTracker *_tracker;
}

@property(readonly, nonatomic) PETDistributionEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMNamedEntityDonationSource_)arg2 algorithm:(struct PPMNamedEntityAlgorithm_)arg3;
- (id)init;

@end

