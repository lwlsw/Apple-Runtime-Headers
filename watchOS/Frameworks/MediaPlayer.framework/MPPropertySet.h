//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface MPPropertySet : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSSet *_properties;
    NSDictionary *_relationships;
}

+ (_Bool)supportsSecureCoding;
+ (id)propertySetWithProperties:(id)arg1;
+ (id)emptyPropertySet;
@property(readonly, nonatomic) NSDictionary *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) NSSet *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)containsPropertySet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

