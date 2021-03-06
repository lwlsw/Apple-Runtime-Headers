//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProVideo/PCFxBlendOptions.h>

#import <ProVideo/NSCopying-Protocol.h>

@interface PCFxLightWrapOptions : PCFxBlendOptions <NSCopying>
{
    float _amount;
    float _intensity;
    float _lrOpacity;
    int _lrMode;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLRBlendMode:(int)arg1;
- (int)getLRBlendMode;
- (void)setOpacity:(float)arg1;
- (float)getOpacity;
- (void)setIntensity:(float)arg1;
- (float)getIntensity;
- (void)setAmount:(float)arg1;
- (float)getAmount;
- (id)initWithLRBlendOptions:(id)arg1;

@end

