//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject
{
    id <WFSettings> _settings;
}

+ (_Bool)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (long long)locationNumDecimalsOfPrecision;
- (_Bool)aqiEnabledForCountryCode:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

