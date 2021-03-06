//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCImagePixelBuffer.h>

@interface QCImageSurfaceBuffer : QCImagePixelBuffer
{
    struct __IOSurface *_surface;
}

- (void)dealloc;
- (void)finalize;
- (void)_finalize_QCImageSurfaceBuffer;
- (void)endUpdatePixels;
- (BOOL)beginUpdatePixels:(BOOL)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (void *)baseAddressForSkippedRows:(unsigned long long)arg1 skippedPixels:(unsigned long long)arg2;
- (const void *)baseAddress;
- (unsigned long long)identifier;
- (struct __IOSurface *)surface;
- (id)initWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithBaseAddress:(const void *)arg1 format:(id)arg2 pixelsWide:(unsigned long long)arg3 pixelsHigh:(unsigned long long)arg4 options:(id)arg5;

@end

