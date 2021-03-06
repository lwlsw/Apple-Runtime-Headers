//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying>
{
    double _opacity;
    NSArray *_filters;
    UIColor *_backgroundColor;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (BOOL)_hasNonClearBackgroundColor;
- (id)newBackgroundHighlightView;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

