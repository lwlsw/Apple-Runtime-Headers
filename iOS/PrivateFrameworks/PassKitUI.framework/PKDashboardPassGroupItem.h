//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKPassGroupView;

@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem>
{
    PKPassGroupView *_groupView;
}

@property(readonly, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
- (void).cxx_destruct;
- (id)initWithGroupView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

