//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface TVHKMediaEntityFetchResponse : NSObject
{
    unsigned long long _type;
    unsigned long long _mediaEntitySubtype;
    NSArray *_mediaEntities;
    NSArray *_sortHeaders;
    NSSet *_deletedMediaEntityIdentifiers;
}

@property(copy, nonatomic) NSSet *deletedMediaEntityIdentifiers; // @synthesize deletedMediaEntityIdentifiers=_deletedMediaEntityIdentifiers;
@property(copy, nonatomic) NSArray *sortHeaders; // @synthesize sortHeaders=_sortHeaders;
@property(copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(nonatomic) unsigned long long mediaEntitySubtype; // @synthesize mediaEntitySubtype=_mediaEntitySubtype;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

