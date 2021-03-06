//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLActivityPolicy-Protocol.h>

@class NSString;
@protocol CSLActivityDateSource, CSLThrottledActivityPolicyDelegate;

@interface CSLThrottledActivityPolicy : NSObject <CSLActivityPolicy>
{
    id <CSLActivityDateSource> _dateSource;
    NSString *_policyName;
    id <CSLThrottledActivityPolicyDelegate> _delegate;
    double _minimumInterAppInterval;
    double _minimumIntraAppInterval;
}

@property __weak id <CSLThrottledActivityPolicyDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *policyName; // @synthesize policyName=_policyName;
@property(nonatomic) double minimumIntraAppInterval; // @synthesize minimumIntraAppInterval=_minimumIntraAppInterval;
@property(nonatomic) double minimumInterAppInterval; // @synthesize minimumInterAppInterval=_minimumInterAppInterval;
@property(retain, nonatomic) id <CSLActivityDateSource> dateSource; // @synthesize dateSource=_dateSource;
- (void).cxx_destruct;
- (id)budgetManagerForContext:(id)arg1;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;
- (_Bool)appliesToActivity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

