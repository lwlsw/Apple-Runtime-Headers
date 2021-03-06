//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVImage, TVImageProxy, TVLProxyViewController, TVLTextEntryViewController;

@interface TVLJSTextEntryControl : NSObject
{
    TVImage *_image;
    TVImageProxy *_imageProxy;
    TVLTextEntryViewController *_textEntryViewController;
    _Bool _hideText;
    _Bool _swapping;
    TVLProxyViewController *_proxyViewController;
    NSString *_type;
    NSString *_title;
    NSString *_instructions;
    NSString *_label;
    NSString *_footnote;
    NSString *_defaultValue;
    NSString *_imageURL;
    CDUnknownBlockType _submitBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(readonly, getter=isSwapping) _Bool swapping; // @synthesize swapping=_swapping;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hideText; // @synthesize hideText=_hideText;
@property(retain, nonatomic) TVLProxyViewController *proxyViewController; // @synthesize proxyViewController=_proxyViewController;
- (void).cxx_destruct;
- (void)dismissTextEntryViewController:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType onCancel; // @dynamic onCancel;
- (void)_menuButtonAction:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType onLoadCompletion; // @dynamic onLoadCompletion;
@property(readonly, nonatomic) CDUnknownBlockType onLoad; // @dynamic onLoad;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)init;

@end

