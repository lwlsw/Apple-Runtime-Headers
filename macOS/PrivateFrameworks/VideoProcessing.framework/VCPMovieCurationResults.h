//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHAsset;

@interface VCPMovieCurationResults : NSObject
{
    PHAsset *_phAsset;
    NSMutableArray *_highlights;
}

@property(readonly, retain, nonatomic) NSMutableArray *highlights; // @synthesize highlights=_highlights;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;
- (id)initWithPHAsset:(id)arg1;

@end

