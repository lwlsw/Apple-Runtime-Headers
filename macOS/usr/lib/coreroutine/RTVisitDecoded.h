//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface RTVisitDecoded : NSObject
{
    double _logProbability;
    NSDate *_entryDate;
    NSDate *_exitDate;
}

@property(retain, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
@property(nonatomic) double logProbability; // @synthesize logProbability=_logProbability;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *outputType;
- (BOOL)noVisit;
- (BOOL)partialVisit;
- (BOOL)completeVisit;
- (id)description;
- (id)initWithEntryDate:(id)arg1 exitDate:(id)arg2 logProbability:(double)arg3;
- (id)init;

@end

