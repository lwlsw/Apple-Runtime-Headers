//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <ConstantClasses/NSFastEnumeration-Protocol.h>

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
{
}

+ (id)alloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (unsigned int)count;
- (unsigned int)capacity;
- (id)allValues;
- (id)allKeys;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end

