//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/UITextViewDelegate-Protocol.h>

@class EKTextViewWithLabelTextMetrics, NSString, NSURL, UITapGestureRecognizer;

@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate>
{
    EKTextViewWithLabelTextMetrics *_locationView;
    NSURL *_locationURL;
    UITapGestureRecognizer *_locationTapRecognizer;
    long long _locationStatus;
    BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    BOOL _hasLocationStatus;
    NSString *_locationTitle;
}

@property(retain) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
@property BOOL hasLocationStatus; // @synthesize hasLocationStatus=_hasLocationStatus;
@property BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (void).cxx_destruct;
- (void)_locationTapped;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)locationView;
- (void)updateLocation:(id)arg1 forEvent:(id)arg2;
- (id)initWithLocationName:(id)arg1 forEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

