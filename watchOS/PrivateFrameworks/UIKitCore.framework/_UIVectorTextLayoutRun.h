//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVectorTextLayoutRun-Protocol.h>

@class NSAttributedString, NSString, _UIVectorTextLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun>
{
    unsigned int _glyphCount;
    NSAttributedString *_sourceString;
    _UIVectorTextLayoutInfo *_layoutInfo;
    unsigned int _lineIndex;
    struct __CTRun *_runRef;
    float _baseline;
    struct CGRect _lineRect;
    struct CGRect _usedLineRect;
    struct CGRect _usedRunRect;
}

@property(nonatomic) struct CGRect usedRunRect; // @synthesize usedRunRect=_usedRunRect;
@property(nonatomic) struct CGRect usedLineRect; // @synthesize usedLineRect=_usedLineRect;
@property(nonatomic) struct CGRect lineRect; // @synthesize lineRect=_lineRect;
@property(nonatomic) float baseline; // @synthesize baseline=_baseline;
@property(readonly, nonatomic) struct __CTRun *_CTRun; // @synthesize _CTRun=_runRef;
@property(readonly, nonatomic) unsigned int lineIndex; // @synthesize lineIndex=_lineIndex;
- (void).cxx_destruct;
- (void)_enumerateGlyphsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGlyphsUsingBlock:(CDUnknownBlockType)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (_Bool)shouldRender;
- (id)font;
- (id)string;
- (struct _NSRange)stringRange;
- (int)glyphCount;
- (void)dealloc;
- (id)initWithCTRun:(struct __CTRun *)arg1 lineIndex:(unsigned int)arg2 layoutInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

