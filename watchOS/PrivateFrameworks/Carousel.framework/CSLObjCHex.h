//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/NSCopying-Protocol.h>
#import <Carousel/NSSecureCoding-Protocol.h>

@interface CSLObjCHex : NSObject <NSCopying, NSSecureCoding>
{
    int _q;
    int _r;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int r; // @synthesize r=_r;
@property(nonatomic) int q; // @synthesize q=_q;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(nonatomic) struct Hex hex;
- (id)init;
- (id)initWithHex:(struct Hex)arg1;

@end

