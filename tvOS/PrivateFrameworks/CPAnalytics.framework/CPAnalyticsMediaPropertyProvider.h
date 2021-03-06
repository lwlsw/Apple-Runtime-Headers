//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider-Protocol.h>

@class NSString;

@interface CPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>
{
}

- (id)_descriptionForMediaAge:(double)arg1;
- (struct NSObject *)_mediaProperty:(id)arg1 forAsset:(id)arg2;
- (id)_PHAssetFromPayload:(id)arg1;
- (struct NSObject *)getDynamicProperty:(id)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (void)registerAndProvideMediaPropertiesFor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

