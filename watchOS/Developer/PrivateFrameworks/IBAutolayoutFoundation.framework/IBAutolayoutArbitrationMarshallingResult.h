//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBObjectBasedMarshallingResult.h>

@class IBAutolayoutArbitrationResult;

@interface IBAutolayoutArbitrationMarshallingResult : IBObjectBasedMarshallingResult
{
    IBAutolayoutArbitrationResult *_arbitrationResult;
}

@property(retain, nonatomic) IBAutolayoutArbitrationResult *arbitrationResult; // @synthesize arbitrationResult=_arbitrationResult;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

