//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings
{
    double _fromViewSlideOutAnimationDelay;
    double _fromViewSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_fromViewSlideOutAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings *_defaultAnimationSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings; // @synthesize fromViewSlideOutAnimationSettings=_fromViewSlideOutAnimationSettings;
@property(nonatomic) double fromViewSlideOutHeightOffsetMultiplier; // @synthesize fromViewSlideOutHeightOffsetMultiplier=_fromViewSlideOutHeightOffsetMultiplier;
@property(nonatomic) double fromViewSlideOutAnimationDelay; // @synthesize fromViewSlideOutAnimationDelay=_fromViewSlideOutAnimationDelay;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

