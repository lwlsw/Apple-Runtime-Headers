//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PPMockRTAddress, PPMockRTLocation;

@interface PPMockRTMapItem : NSObject
{
    NSString *_name;
    PPMockRTAddress *_address;
    PPMockRTLocation *_location;
}

@property(retain, nonatomic) PPMockRTLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) PPMockRTAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

