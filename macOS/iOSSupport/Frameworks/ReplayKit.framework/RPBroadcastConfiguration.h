//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSCoding-Protocol.h>
#import <ReplayKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding>
{
    double _clipDuration;
    NSDictionary *_videoCompressionProperties;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *videoCompressionProperties; // @synthesize videoCompressionProperties=_videoCompressionProperties;
@property(nonatomic) double clipDuration; // @synthesize clipDuration=_clipDuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

