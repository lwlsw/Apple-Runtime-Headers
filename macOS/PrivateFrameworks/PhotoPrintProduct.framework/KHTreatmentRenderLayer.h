//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHBaseLayer.h>

@class KHFrame, KHTreatment;
@protocol KHTreatmentRenderLayerDelegate;

@interface KHTreatmentRenderLayer : KHBaseLayer
{
    BOOL _drawsBackground;
    BOOL _drawsForeground;
    KHTreatment *_treatment;
    KHFrame *_frameObject;
    double _drawingScale;
    id <KHTreatmentRenderLayerDelegate> _renderDelegate;
    struct CGPoint _drawingOffset;
}

+ (id)layerForTreatment:(id)arg1 frameObject:(id)arg2;
@property(nonatomic) id <KHTreatmentRenderLayerDelegate> renderDelegate; // @synthesize renderDelegate=_renderDelegate;
@property(nonatomic) struct CGPoint drawingOffset; // @synthesize drawingOffset=_drawingOffset;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(nonatomic) BOOL drawsForeground; // @synthesize drawsForeground=_drawsForeground;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(retain, nonatomic) KHFrame *frameObject; // @synthesize frameObject=_frameObject;
@property(retain, nonatomic) KHTreatment *treatment; // @synthesize treatment=_treatment;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)initWithTreatment:(id)arg1 frameObject:(id)arg2;

@end

