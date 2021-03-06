//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding>
{
    BOOL _newlyAdded;
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;
    CDUnknownBlockType _handler;
    unsigned long long _order;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isNewlyAdded) BOOL newlyAdded; // @synthesize newlyAdded=_newlyAdded;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

