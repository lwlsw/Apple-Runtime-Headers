//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/NSCopying-Protocol.h>
#import <AccessibilitySharedSupport/NSSecureCoding-Protocol.h>

@class NSError, NSSet, NSString;

@interface AXSSMotionTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    NSError *_error;
    NSSet *_expressions;
    struct CGPoint _lookAtPoint;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *expressions; // @synthesize expressions=_expressions;
@property(nonatomic) struct CGPoint lookAtPoint; // @synthesize lookAtPoint=_lookAtPoint;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *debugString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL hasFace;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

