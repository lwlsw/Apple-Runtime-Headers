//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KHDBValueSelector : NSObject
{
    NSString *_selectorName;
    int _returnType;
    SEL _selector;
    CDUnknownFunctionPointerType _methodImp;
}

- (id)valuesFromObjects:(id)arg1;
- (id)valueFromTarget:(id)arg1;
- (BOOL)setupForTarget:(id)arg1;
- (void)dealloc;
- (id)initWithSelectorName:(id)arg1;

@end

