//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundViewLayout : TVViewLayout
{
    long long _sizeClass;
    _Bool _isSport;
    TVImageLayout *_imageLayout;
}

+ (_Bool)uberImageShouldUsePhoneImageForSizeClass:(long long)arg1;
+ (_Bool)uberImageShouldUseVerticalLayoutForWindowWidth:(double)arg1;
+ (double)uberImageAspectRatioForWindowWidth:(double)arg1;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 isSport:(_Bool)arg4;
@property(readonly, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
- (void).cxx_destruct;
- (void)updateWithSizeClass:(long long)arg1 isSport:(_Bool)arg2;
- (id)initWithSizeClass:(long long)arg1 isSport:(_Bool)arg2;

@end

