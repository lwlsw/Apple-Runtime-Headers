//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoWeatherComplicationsCompanion/NWColorIndex.h>

#import <NanoWeatherComplicationsCompanion/NWColorIndexable-Protocol.h>

@class NSString, WFTemperature;

__attribute__((visibility("hidden")))
@interface NWMTemperatureColorIndex : NWColorIndex <NWColorIndexable>
{
    WFTemperature *_temperature;
}

+ (id)allIndices;
+ (id)indexWithTemperature:(id)arg1 color:(id)arg2;
@property(readonly, nonatomic) WFTemperature *temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;
- (id)initWithTemperature:(id)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

