//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHTreatmentArrayController.h>

@class KHFrame, KHTheme, NSArray, NSMutableArray;

@interface KHFrameTreatmentController : KHTreatmentArrayController
{
    NSMutableArray *_treatments;
    KHFrame *_frame;
    KHTheme *_theme;
}

@property(readonly, nonatomic) KHTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) KHFrame *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)treatmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfTreatments;
- (unsigned long long)thumbnailType;
- (unsigned long long)selectedIndex;
- (void)setSelectedTreatment:(id)arg1;
@property(readonly, nonatomic) NSArray *treatments;
- (id)supportedTreatmentsWithCaption:(BOOL)arg1;
- (id)initWithFrame:(id)arg1 theme:(id)arg2;

@end

