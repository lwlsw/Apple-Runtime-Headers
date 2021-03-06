//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLNearestNeighborsIndex-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class _KDNode;

@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding>
{
    vector_7584168e vData;
    vector_8b7b626a vIndices;
    unsigned int _numDimensions;
    unsigned int _leafSize;
    _KDNode *_root;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) _KDNode *root; // @synthesize root=_root;
@property(nonatomic) unsigned int leafSize; // @synthesize leafSize=_leafSize;
@property(nonatomic) unsigned int numDimensions; // @synthesize numDimensions=_numDimensions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)findK:(unsigned int)arg1 nearestNeighbors:(struct _KDPriorityQueue *)arg2 toQueryPoint:(const vector_7584168e *)arg3 inTree:(id)arg4;
- (vector_8999e6c6)calculateDistancesForNodesBetweenLeft:(unsigned int)arg1 andRight:(unsigned int)arg2 toQueryPoint:(const vector_7584168e *)arg3;
- (id)constructTreeForPointsBoundedBy:(struct _KDBoundingBox *)arg1 startingIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (id)constructTree;
- (unsigned int)dataPointCount;
- (_Bool)updateWithData:(const vector_7584168e *)arg1 error:(id *)arg2;
- (vector_8999e6c6)findNearestNeighbors:(unsigned int)arg1 toQueryPoint:(const vector_7584168e *)arg2;
- (id)initWithDataset:(vector_7584168e *)arg1 numberOfDimensions:(unsigned int)arg2 leafSize:(unsigned int)arg3 error:(id *)arg4;

@end

