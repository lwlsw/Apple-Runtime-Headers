//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLImageItemContents.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSURL;

@interface QLImageItemURLContents : QLImageItemContents <NSSecureCoding>
{
    NSURL *_imageURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageItemContentsWithImage:(id)arg1 imageURL:(id)arg2;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

