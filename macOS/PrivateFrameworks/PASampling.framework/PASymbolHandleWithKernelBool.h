//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PASymbolHandle;

@interface PASymbolHandleWithKernelBool : NSObject
{
    BOOL _isKernel;
    PASymbolHandle *_symbolHandle;
}

@property BOOL isKernel; // @synthesize isKernel=_isKernel;
@property(retain) PASymbolHandle *symbolHandle; // @synthesize symbolHandle=_symbolHandle;
- (void).cxx_destruct;

@end

