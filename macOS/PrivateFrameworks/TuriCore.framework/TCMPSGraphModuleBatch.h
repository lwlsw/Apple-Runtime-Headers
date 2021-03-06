//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MTLCommandBuffer;

__attribute__((visibility("hidden")))
@interface TCMPSGraphModuleBatch : NSObject
{
    id <MTLCommandBuffer> _commandBuffer;
    struct NSArray *_input;
    struct NSArray *_grad;
    struct NSArray *_lossState;
    struct NSArray *_output;
}

@property(retain, nonatomic) NSArray *output; // @synthesize output=_output;
@property(retain, nonatomic) NSArray *lossState; // @synthesize lossState=_lossState;
@property(retain, nonatomic) NSArray *grad; // @synthesize grad=_grad;
@property(retain, nonatomic) NSArray *input; // @synthesize input=_input;
@property(readonly, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
- (void).cxx_destruct;
- (id)initWithCommandBuffer:(id)arg1;

@end

