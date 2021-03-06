//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;
@protocol NFDefinitionContainer;

@interface NFDefinition : NSObject
{
    id <NFDefinitionContainer> _privateAccessContainer;
    id <NFDefinitionContainer> _privateAccessWeakContainer;
    _Bool _canBeOverridden;
    _Bool _canBeNil;
    unsigned long long _source;
    Class _cls;
    Protocol *_protocol;
    CDUnknownBlockType _factory;
    unsigned long long _scope;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _configurationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
@property(nonatomic) _Bool canBeNil; // @synthesize canBeNil=_canBeNil;
@property(nonatomic) _Bool canBeOverridden; // @synthesize canBeOverridden=_canBeOverridden;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(copy, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)withPrivateAccessInWeakContainer:(id)arg1;
- (id)withPrivateAccessInContainer:(id)arg1;
- (id)privateAccessContainer;
- (id)canBeNil:(_Bool)arg1;
- (id)canBeOverridden:(_Bool)arg1;
- (id)withConfiguration:(CDUnknownBlockType)arg1;
- (id)withValidation:(CDUnknownBlockType)arg1;
- (id)inScope:(unsigned long long)arg1;
- (id)description;
- (id)initWithUnsafeFactory:(CDUnknownBlockType)arg1;
- (id)initWithProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;

@end

