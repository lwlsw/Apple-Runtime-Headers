//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLDenseVector;

@interface PMLDenseMatrix : NSObject
{
    PMLDenseVector *_data;
    unsigned int _numberOfRows;
    unsigned int _numberOfColumns;
}

+ (id)denseMatrixFromNumbers:(id)arg1;
+ (id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned int)arg2 numberOfColumns:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (void).cxx_destruct;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (const float *)values;
- (id)initWithData:(id)arg1 numberOfRows:(unsigned int)arg2 numberOfColumns:(unsigned int)arg3;

@end

