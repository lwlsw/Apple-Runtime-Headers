//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKAnnotationView;

@interface MKCalloutView : UIView
{
    _Bool _parallaxEnabled;
    MKAnnotationView *_annotationView;
}

@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(readonly, nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
@property(readonly, nonatomic) int anchorPosition;
@property(readonly, nonatomic) _Bool hasPendingVisibility;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAnnotationView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

