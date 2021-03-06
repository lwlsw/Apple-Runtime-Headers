//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringImageView.h>

#import <NanoTimeKitCompanion/NTKKeylineView-Protocol.h>

@class NSString, NTKKeylineTouchable, UIColor;

@interface _NTKKeylineImageView : NTKColoringImageView <NTKKeylineView>
{
    NTKKeylineTouchable *touchable;
    CDUnknownBlockType _colorizationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType colorizationBlock; // @synthesize colorizationBlock=_colorizationBlock;
@property(retain, nonatomic) NTKKeylineTouchable *touchable; // @synthesize touchable;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *overrideColor;
@property(readonly) Class superclass;
@property(nonatomic) _Bool usesLegibility;

@end

