//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface MSVLyricsXMLElement : NSObject
{
    NSString *_elementName;
    NSString *_identifier;
    NSMutableString *_mutableText;
}

@property(retain, nonatomic) NSMutableString *mutableText; // @synthesize mutableText=_mutableText;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (void).cxx_destruct;
- (id)description;

@end

