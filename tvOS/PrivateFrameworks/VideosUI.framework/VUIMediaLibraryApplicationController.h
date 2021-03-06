//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VUIMediaLibraryApplicationControllerDelegate;

@interface VUIMediaLibraryApplicationController : NSObject
{
    id <VUIMediaLibraryApplicationControllerDelegate> _delegate;
}

+ (id)defaultController;
@property(retain, nonatomic) id <VUIMediaLibraryApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeRentalMediaItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)assetTypeForRentalMediaItem:(id)arg1;
- (void)overrideCellularPlaybackQuality:(unsigned long long)arg1 forMediaItem:(id)arg2;
- (void)clearCellularPlaybackQualityOverrides;
- (_Bool)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;
- (_Bool)isCellularDataForPlaybackEnabled;
- (id)settingsURL;

@end

