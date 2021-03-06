//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

#import <iWorkImport/TSKCOObjectCountConstraint-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementRemoveOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>
{
    int _objectCount;
    int _objectCounterSpace;
}

@property(readonly, nonatomic) int objectCounterSpace; // @synthesize objectCounterSpace=_objectCounterSpace;
@property(readonly, nonatomic) int objectCount; // @synthesize objectCount=_objectCount;
-     // Error parsing type: v32@0:8@16^{Operation=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}iBBBIiiQiIii}24, name: saveToArchiver:message:
-     // Error parsing type: @32@0:8@16r^{Operation=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}iBBBIiiQiIii}24, name: initWithUnarchiver:message:
- (shared_ptr_f167ad79)newTransformableOperation;
- (id)toString;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)operationWithNewNoop:(_Bool)arg1;
- (int)placementType;
- (id)initWithUUIDPath:(id)arg1 fromIndex:(int)arg2;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 noop:(_Bool)arg3 objectCount:(int)arg4 objectCounterSpace:(int)arg5;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 objectCount:(int)arg3 objectCounterSpace:(int)arg4;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5 objectCount:(int)arg6 objectCounterSpace:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

