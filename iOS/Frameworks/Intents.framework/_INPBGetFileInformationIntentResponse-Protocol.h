//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBFileProperty, _INPBString;

@protocol _INPBGetFileInformationIntentResponse <NSObject>
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool success;
@property(readonly, nonatomic) _Bool hasProperty;
@property(retain, nonatomic) _INPBFileProperty *property;
@property(readonly, nonatomic) _Bool hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@end

