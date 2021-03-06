//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFColorCollection, NSString, UIColor;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying>
{
    HFColorCollection *_colorCollection;
}

@property(readonly, nonatomic) HFColorCollection *colorCollection; // @synthesize colorCollection=_colorCollection;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSimilarToColor:(id)arg1;
- (BOOL)isSimilarToColor:(id)arg1 ignoreTemperature:(BOOL)arg2;
- (id)colorByAdjustingToColorProfile:(id)arg1;
@property(readonly, nonatomic) UIColor *UIColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithColorCollection:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

