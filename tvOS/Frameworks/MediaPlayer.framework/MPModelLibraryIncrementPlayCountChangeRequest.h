//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, MPModelObject;

@interface MPModelLibraryIncrementPlayCountChangeRequest : NSObject
{
    MPMediaLibrary *_mediaLibrary;
    MPModelObject *_model;
}

@property(readonly, nonatomic) MPModelObject *model; // @synthesize model=_model;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithModel:(id)arg1;

@end

