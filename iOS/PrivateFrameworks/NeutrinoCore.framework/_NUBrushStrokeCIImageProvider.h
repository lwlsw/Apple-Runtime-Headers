//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NUBrushStroke;

@interface _NUBrushStrokeCIImageProvider : NSObject
{
    NUBrushStroke *_stroke;
    _Bool _closed;
    long long _pressureMode;
    CDStruct_996ac03c _extent;
}

- (void).cxx_destruct;
- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;
- (id)initWithStroke:(id)arg1 closed:(_Bool)arg2 pressureMode:(long long)arg3;

@end

