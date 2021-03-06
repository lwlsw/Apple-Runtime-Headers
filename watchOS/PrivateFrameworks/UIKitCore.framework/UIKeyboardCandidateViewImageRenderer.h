//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewImageRenderer : NSObject
{
    UIView *_viewForTraitCollection;
    NSCache *_imageCache;
}

+ (id)sharedImageRenderer;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak UIView *viewForTraitCollection; // @synthesize viewForTraitCollection=_viewForTraitCollection;
- (void).cxx_destruct;
- (id)extensionMaskImage;
- (id)handwritingCellBackgroundImageForDarkKeyboard:(_Bool)arg1 highlighted:(_Bool)arg2;
- (id)pocketShadowImageForDarkKeyboard:(_Bool)arg1 fadesToBottom:(_Bool)arg2 drawShadow:(_Bool)arg3 topPadding:(float)arg4 bottomPadding:(float)arg5 height:(float)arg6;
- (id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)init;

@end

