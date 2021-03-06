//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NTKFace, NTKFaceCollection;

@protocol NTKFaceCollectionObserver <NSObject>

@optional
- (void)faceCollectionDidReset:(NTKFaceCollection *)arg1;
- (void)faceCollectionDidLoad:(NTKFaceCollection *)arg1;
- (void)faceCollectionDidReorderFaces:(NTKFaceCollection *)arg1;
- (void)faceCollection:(NTKFaceCollection *)arg1 didSelectFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(NTKFaceCollection *)arg1 didRemoveFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(NTKFaceCollection *)arg1 didAddFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
@end

