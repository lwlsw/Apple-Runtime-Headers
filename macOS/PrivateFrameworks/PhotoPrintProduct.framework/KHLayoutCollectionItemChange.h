//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface KHLayoutCollectionItemChange : NSObject
{
    unsigned long long _type;
    NSIndexPath *_sourceIndexPath;
    NSIndexPath *_targetIndexPath;
}

@property(readonly, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;
@property(readonly, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 sourceIndexPath:(id)arg2 targetIndexPath:(id)arg3;

@end

