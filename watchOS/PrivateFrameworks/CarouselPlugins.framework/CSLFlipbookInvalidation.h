//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselPlugins/NSSecureCoding-Protocol.h>

@class NSString;

@interface CSLFlipbookInvalidation : NSObject <NSSecureCoding>
{
    int _reason;
    NSString *_reasonStr;
    int _upToTwoMinCount;
    int _upToThreeMinCount;
    int _upToFourMinCount;
    int _upToFiveMinCount;
    int _upToSixMinCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int upToSixMinCount; // @synthesize upToSixMinCount=_upToSixMinCount;
@property(readonly, nonatomic) int upToFiveMinCount; // @synthesize upToFiveMinCount=_upToFiveMinCount;
@property(readonly, nonatomic) int upToFourMinCount; // @synthesize upToFourMinCount=_upToFourMinCount;
@property(readonly, nonatomic) int upToThreeMinCount; // @synthesize upToThreeMinCount=_upToThreeMinCount;
@property(readonly, nonatomic) int upToTwoMinCount; // @synthesize upToTwoMinCount=_upToTwoMinCount;
@property(readonly, nonatomic) NSString *reasonStr; // @synthesize reasonStr=_reasonStr;
@property(readonly, nonatomic) int reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithReason:(int)arg1 reasonStr:(id)arg2 upToTwoMinCount:(int)arg3 upToThreeMinCount:(int)arg4 upToFourMinCount:(int)arg5 upToFiveMinCount:(int)arg6 upToSixMinCount:(int)arg7;

@end

