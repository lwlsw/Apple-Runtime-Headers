//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKDisplayProfile.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKColor;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>
{
    _Bool _tallCode;
    _Bool _hasBackgroundImage;
    _Bool _hasStripImage;
    int _passStyle;
    PKColor *_backgroundColor;
    PKColor *_secondaryBackgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKColor *_stripColor;
    NSData *_manifestHash;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasStripImage; // @synthesize hasStripImage=_hasStripImage;
@property(nonatomic) _Bool hasBackgroundImage; // @synthesize hasBackgroundImage=_hasBackgroundImage;
@property(nonatomic) _Bool tallCode; // @synthesize tallCode=_tallCode;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) PKColor *stripColor; // @synthesize stripColor=_stripColor;
@property(retain, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) PKColor *secondaryBackgroundColor; // @synthesize secondaryBackgroundColor=_secondaryBackgroundColor;
@property(retain, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int passStyle; // @synthesize passStyle=_passStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)type;
@property(readonly, nonatomic) int layoutMode;
@property(readonly, nonatomic) _Bool showsStripImage;
@property(readonly, nonatomic) _Bool showsBackgroundImage;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

