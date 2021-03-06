//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssetExplorer/PXReusableObject-Protocol.h>
#import <AssetExplorer/PXUIViewBasicTile-Protocol.h>

@class AEGridOverlayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject>
{
    AEGridOverlayConfiguration *_overlayConfiguration;
}

+ (id)loopBadge;
+ (id)videoBadge;
+ (id)cloudBadge;
+ (id)gradientShadow;
+ (id)gridOverlayLayoutInfo;
@property(retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (struct CGRect)_loopRect;
- (struct CGRect)_videoRect;
- (struct CGRect)_cloudRect;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

