//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBCoplanarSwitcherModifier : SBSwitcherModifier
{
    double _scale;
    long long _spacingType;
    SBAppLayout *_activeAppLayout;
}

@property(retain, nonatomic) SBAppLayout *activeAppLayout; // @synthesize activeAppLayout=_activeAppLayout;
@property(nonatomic) long long spacingType; // @synthesize spacingType=_spacingType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (double)_offscreenSpacing;
- (long long)_indexOfActiveAppLayout;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)initWithActiveAppLayout:(id)arg1;

@end

