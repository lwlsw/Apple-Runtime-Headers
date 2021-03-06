//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, VNSaliencyImageObservation;

@interface PIReframeResult : NSObject
{
    double _confidence;
    VNSaliencyImageObservation *_saliencyObservation;
    NSArray *_ANODSubjects;
    struct CGRect _bounds;
}

@property(copy, nonatomic) NSArray *ANODSubjects; // @synthesize ANODSubjects=_ANODSubjects;
@property(retain, nonatomic) VNSaliencyImageObservation *saliencyObservation; // @synthesize saliencyObservation=_saliencyObservation;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect)arg1 confidence:(double)arg2 ANODSubjects:(id)arg3 saliencyObservation:(id)arg4;

@end

