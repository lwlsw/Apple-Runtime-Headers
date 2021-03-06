//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPModelKind, MPPropertySet, NSString;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding>
{
    shared_ptr_c450ebdb _coreScope;
    MPModelKind *_itemKind;
    NSString *_name;
    MPPropertySet *_itemProperties;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) MPPropertySet *itemProperties; // @synthesize itemProperties=_itemProperties;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MPModelKind *itemKind; // @synthesize itemKind=_itemKind;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_c450ebdb coreScope;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithItemKind:(id)arg1 name:(id)arg2 properties:(id)arg3;

@end

