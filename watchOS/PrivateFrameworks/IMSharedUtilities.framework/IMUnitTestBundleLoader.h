//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject
{
    IMUnitTestLogger *_logger;
}

@property(readonly) IMUnitTestLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)loadTestBundle:(id)arg1 bundle:(id *)arg2 error:(id *)arg3;
- (id)initWithLogger:(id)arg1;

@end

