//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSDoubleLinkedList, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AMSLRUCache : NSObject
{
    unsigned int _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_backingDictionary;
    AMSDoubleLinkedList *_backingList;
}

@property(retain, nonatomic) AMSDoubleLinkedList *backingList; // @synthesize backingList=_backingList;
@property(retain, nonatomic) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) unsigned int maxSize; // @synthesize maxSize=_maxSize;
- (void).cxx_destruct;
- (void)_removeObjectForKey:(id)arg1;
- (unsigned int)_count;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1 withCreationBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)allObjectsAndKeys;
@property(readonly, nonatomic) unsigned int count;
- (id)initWithMaxSize:(unsigned int)arg1;
- (id)init;

@end

