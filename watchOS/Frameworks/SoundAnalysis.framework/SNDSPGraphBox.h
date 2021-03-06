//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDSPGraphBox : NSObject
{
    struct Box *_box;
    shared_ptr_f6ac7592 _graph;
}

@property(readonly, nonatomic) struct Box *box; // @synthesize box=_box;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)setParameter:(float)arg1 forID:(unsigned long)arg2 scope:(unsigned long)arg3 element:(unsigned long)arg4 bufferOffset:(int)arg5;
- (_Bool)hasParameter:(unsigned long)arg1 scope:(unsigned long)arg2 element:(unsigned long)arg3;
- (_Bool)getParameter:(float *)arg1 forID:(unsigned long)arg2 scope:(unsigned long)arg3 element:(unsigned long)arg4;
- (_Bool)getParameterInfo:(struct AudioUnitParameterInfo *)arg1 forID:(unsigned long)arg2 inScope:(unsigned long)arg3;
- (_Bool)getParameterList:(unsigned int *)arg1 numParameterIDs:(int *)arg2 inScope:(unsigned long)arg3;
@property(readonly, nonatomic) int numOutputs;
@property(readonly, nonatomic) int numInputs;
@property(readonly, nonatomic) NSString *name;
- (_Bool)stopInjectingPort:(int)arg1;
- (_Bool)startInjectingPort:(int)arg1 toFile:(id)arg2 shouldLoop:(_Bool)arg3;
- (_Bool)stopRecordingPort:(int)arg1;
- (_Bool)startRecordingPort:(int)arg1 toFile:(id)arg2;
- (id)initWithBox:(struct Box *)arg1 fromGraph:(shared_ptr_f6ac7592)arg2;
- (id)init;

@end

