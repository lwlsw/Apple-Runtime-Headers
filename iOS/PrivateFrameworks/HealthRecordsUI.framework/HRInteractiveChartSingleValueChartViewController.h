//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKInteractiveChartOverlayViewController.h>

@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

__attribute__((visibility("hidden")))
@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController
{
    _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *_annotationViewDataSource;
}

@property(retain, nonatomic) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *annotationViewDataSource; // @synthesize annotationViewDataSource=_annotationViewDataSource;
- (void).cxx_destruct;
- (id)_colorForDisplayType:(id)arg1;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)makeAnnotationDataSourceWithMetrics:(id)arg1;
- (id)makeAnnotationDataSource;
- (id)makeStandardCurrentValueViewDataSource;

@end

