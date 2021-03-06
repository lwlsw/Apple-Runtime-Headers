//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UINamedLayerImage-Protocol.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage>
{
    int _blendMode;
    NSString *_name;
    double _opacity;
    UIImage *_imageObj;
    struct CGRect _frame;
}

@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL fixedFrame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

