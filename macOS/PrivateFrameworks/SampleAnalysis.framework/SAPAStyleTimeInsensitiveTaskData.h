//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SATask;

__attribute__((visibility("hidden")))
@interface SAPAStyleTimeInsensitiveTaskData : NSObject
{
    SATask *_task;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_d00202c1 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(retain) SATask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)populateReferencesUsingBuffer:(const CDStruct_d00202c1 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;

@end

