//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class NSString;

@interface RBSProcessStringPredicate : RBSProcessPredicateImpl
{
    NSString *_identifier;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

