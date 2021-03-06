//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset, PHFace, PHPerson;

@interface PXPeopleFaceTile : NSObject
{
    PHPerson *_person;
    PHFace *_face;
    PHAsset *_asset;
}

@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) PHFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) _Bool isUserDefined;
- (id)description;
- (id)initWithFace:(id)arg1 asset:(id)arg2 person:(id)arg3;

@end

