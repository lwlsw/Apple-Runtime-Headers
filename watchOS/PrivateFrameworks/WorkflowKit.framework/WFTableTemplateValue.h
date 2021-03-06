//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WFTableTemplateValue : NSObject <NSSecureCoding>
{
    int _compoundType;
    NSArray *_rows;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) int compoundType; // @synthesize compoundType=_compoundType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompoundType:(int)arg1 rows:(id)arg2;

@end

