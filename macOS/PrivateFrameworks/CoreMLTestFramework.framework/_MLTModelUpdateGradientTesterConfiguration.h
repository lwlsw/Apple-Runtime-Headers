//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _MLTLogger;

@interface _MLTModelUpdateGradientTesterConfiguration : NSObject
{
    BOOL _verbose;
    NSString *_updateableModelPath;
    NSString *_recipePath;
    long long _computeUnit;
    _MLTLogger *_logger;
}

@property BOOL verbose; // @synthesize verbose=_verbose;
@property(retain) _MLTLogger *logger; // @synthesize logger=_logger;
@property long long computeUnit; // @synthesize computeUnit=_computeUnit;
@property(retain) NSString *recipePath; // @synthesize recipePath=_recipePath;
@property(retain) NSString *updateableModelPath; // @synthesize updateableModelPath=_updateableModelPath;
- (void).cxx_destruct;
- (id)init;

@end

