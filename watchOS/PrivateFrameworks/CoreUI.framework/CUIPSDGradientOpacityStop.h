//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIPSDGradientStop.h>

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding>
{
    float opacity;
}

+ (id)opacityStopWithLocation:(float)arg1 opacity:(float)arg2;
+ (void)initialize;
- (id)description;
- (_Bool)isOpacityStop;
- (float)opacityLocation;
- (float)opacity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(float)arg1 opacity:(float)arg2;

@end

