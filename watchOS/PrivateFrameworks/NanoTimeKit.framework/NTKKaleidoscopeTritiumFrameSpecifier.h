//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKTritiumFrameSpecifier.h>

@class NSDate;

@interface NTKKaleidoscopeTritiumFrameSpecifier : NTKTritiumFrameSpecifier
{
    float _dimming;
    NSDate *_overrideQuadDisplayTime;
}

@property(readonly, nonatomic) NSDate *overrideQuadDisplayTime; // @synthesize overrideQuadDisplayTime=_overrideQuadDisplayTime;
@property(readonly, nonatomic) float dimming; // @synthesize dimming=_dimming;
- (void).cxx_destruct;
- (id)description;
- (void)finalizeWithDimmingValue:(float)arg1 overrideQuadDisplayTime:(id)arg2;
- (id)initWithPresentationTime:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 fraction:(float)arg4;

@end

