//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CUIKUserOperation : NSObject
{
    _Bool _inverseOperationPrecomputed;
    NSArray *_objects;
    long long _span;
    NSArray *_originalObjects;
    NSArray *_originalSliceDescriptions;
    NSString *_precomputedActionName;
    CUIKUserOperation *_precomputedInverseOperation;
}

@property _Bool inverseOperationPrecomputed; // @synthesize inverseOperationPrecomputed=_inverseOperationPrecomputed;
@property(retain) CUIKUserOperation *precomputedInverseOperation; // @synthesize precomputedInverseOperation=_precomputedInverseOperation;
@property(retain) NSString *precomputedActionName; // @synthesize precomputedActionName=_precomputedActionName;
@property(retain) NSArray *originalSliceDescriptions; // @synthesize originalSliceDescriptions=_originalSliceDescriptions;
@property(retain) NSArray *originalObjects; // @synthesize originalObjects=_originalObjects;
@property long long span; // @synthesize span=_span;
@property(retain) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;

@end

