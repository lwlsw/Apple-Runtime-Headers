//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIBadgeTheme-Protocol.h>

@class CAFilter, NSString, UIBlurEffect, UIColor, UIFont, UIImageSymbolConfiguration;

@interface PXUINoBackgroundBadgeTheme : NSObject <PXUIBadgeTheme>
{
    UIImageSymbolConfiguration *_imageConfiguration;
    double _imageAlpha;
    UIColor *_imageTintColor;
    CAFilter *_imageCompositingFilter;
    UIFont *_labelFont;
    double _labelAlpha;
    UIColor *_labelTextColor;
    CAFilter *_labelCompositingFilter;
    Class _backgroundViewClass;
    double _backgroundCornerRadius;
    double _backgroundBorderWidth;
    double _backgroundAlpha;
    UIColor *_backgroundColor;
    UIColor *_backgroundBorderColor;
    UIBlurEffect *_backgroundBlurEffect;
}

+ (id)sharedBadgeTheme;
@property(readonly, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(readonly, nonatomic) UIColor *backgroundBorderColor; // @synthesize backgroundBorderColor=_backgroundBorderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(readonly, nonatomic) double backgroundBorderWidth; // @synthesize backgroundBorderWidth=_backgroundBorderWidth;
@property(readonly, nonatomic) double backgroundCornerRadius; // @synthesize backgroundCornerRadius=_backgroundCornerRadius;
@property(readonly, nonatomic) Class backgroundViewClass; // @synthesize backgroundViewClass=_backgroundViewClass;
@property(readonly, nonatomic) CAFilter *labelCompositingFilter; // @synthesize labelCompositingFilter=_labelCompositingFilter;
@property(readonly, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(readonly, nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(readonly, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(readonly, nonatomic) CAFilter *imageCompositingFilter; // @synthesize imageCompositingFilter=_imageCompositingFilter;
@property(readonly, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(readonly, nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageConfiguration; // @synthesize imageConfiguration=_imageConfiguration;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

