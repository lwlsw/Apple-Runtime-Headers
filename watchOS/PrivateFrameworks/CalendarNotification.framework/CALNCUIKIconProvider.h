//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNCalendarIconIdentifierProvider-Protocol.h>
#import <CalendarNotification/CALNNotificationIconProvider-Protocol.h>

@class NSString;

@interface CALNCUIKIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider>
{
}

+ (_Bool)_parseIconIdentifier:(id)arg1 intoDate:(id *)arg2 calendar:(id *)arg3 type:(int *)arg4;
+ (id)sharedInstance;
+ (id)_identifierEncodingAllowedCharacters;
- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

