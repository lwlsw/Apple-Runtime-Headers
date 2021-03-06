//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVContainerRibbonViewCell.h>

@class TVImageProxy, TVLSMDocumentProxy, TVStackedMediaView;

@interface TVFeaturedRibbonCell : TVContainerRibbonViewCell
{
    TVStackedMediaView *_stackedMediaView;
}

@property(readonly, nonatomic) TVStackedMediaView *stackedMediaView; // @synthesize stackedMediaView=_stackedMediaView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) TVImageProxy *fallbackImageProxy;
@property(readonly, nonatomic) TVLSMDocumentProxy *lsmDocumentProxy;
- (void)setBaseURL:(id)arg1 previewURL:(id)arg2 fallbackURL:(id)arg3 expectedContentSize:(struct CGSize)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

