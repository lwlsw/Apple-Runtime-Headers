//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TUBarCompressionAnimating-Protocol.h>

@class UIToolbar;

@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>
{
    double _topOffset;
    UIToolbar *_toolbar;
}

@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void).cxx_destruct;
- (void)reloadWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) _Bool shouldCompressAtTop;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (void)updateWithPercentage:(double)arg1;
- (id)initWithToolbar:(id)arg1;

@end

