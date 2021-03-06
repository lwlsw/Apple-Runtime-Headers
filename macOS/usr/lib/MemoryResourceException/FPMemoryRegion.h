//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPMemoryObject, FPRangeList, NSString;

@interface FPMemoryRegion : NSObject
{
    unsigned int _wired:1;
    unsigned int _inSharedCache:1;
    unsigned int _unusedSharedCacheRegion:1;
    unsigned int _ownedExclusivelyByParentProcess:1;
    unsigned char _segment;
    unsigned char _share_mode;
    unsigned int _user_tag;
    FPMemoryObject *_memoryObject;
    NSString *_name;
    NSString *_detailedName;
    unsigned long long _offset;
    unsigned long long _start;
    unsigned long long _size;
    unsigned long long _dirtySize;
    unsigned long long _reclaimableSize;
    unsigned long long _swappedSize;
    unsigned long long _cleanNonSpecSize;
    unsigned long long _object_id;
    FPRangeList *_subrangeList;
}

+ (id)categoryNameForTag:(unsigned int)arg1;
@property(retain, nonatomic) FPRangeList *subrangeList; // @synthesize subrangeList=_subrangeList;
@property(nonatomic) unsigned char share_mode; // @synthesize share_mode=_share_mode;
@property(nonatomic) unsigned long long object_id; // @synthesize object_id=_object_id;
@property(nonatomic) unsigned int user_tag; // @synthesize user_tag=_user_tag;
@property(nonatomic) unsigned long long cleanNonSpecSize; // @synthesize cleanNonSpecSize=_cleanNonSpecSize;
@property(nonatomic) unsigned long long swappedSize; // @synthesize swappedSize=_swappedSize;
@property(nonatomic) unsigned long long reclaimableSize; // @synthesize reclaimableSize=_reclaimableSize;
@property(nonatomic) unsigned long long dirtySize; // @synthesize dirtySize=_dirtySize;
@property(nonatomic) unsigned char segment; // @synthesize segment=_segment;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *detailedName; // @synthesize detailedName=_detailedName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) FPMemoryObject *memoryObject; // @synthesize memoryObject=_memoryObject;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFake) BOOL fake;
- (BOOL)eligibleForSubrangesUsingPageSize:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL eligibleForProcessView;
@property(readonly, nonatomic) NSString *fullName;
- (void)freeSubrangeList;
- (void)addSubrange:(struct _NSRange)arg1 memoryTotal:(CDStruct_8346b022 *)arg2 pageSize:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long wiredSize;
- (long long)compare:(id)arg1;
@property(nonatomic) unsigned long long end;
@property(nonatomic) BOOL ownedExclusivelyByParentProcess;
@property(nonatomic) BOOL unusedSharedCacheRegion;
@property(nonatomic) BOOL inSharedCache;
@property(nonatomic) BOOL wired;

@end

