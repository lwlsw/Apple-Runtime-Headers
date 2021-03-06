//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PXGadgetNavigationItem;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject
{
    id <PXGadgetNavigationHelperDelegate> _delegate;
    PXGadgetNavigationItem *_pendingNavigationItem;
    NSTimer *_navigationInvalidationTimer;
}

@property(nonatomic) __weak NSTimer *navigationInvalidationTimer; // @synthesize navigationInvalidationTimer=_navigationInvalidationTimer;
@property(retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem; // @synthesize pendingNavigationItem=_pendingNavigationItem;
@property(nonatomic) __weak id <PXGadgetNavigationHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_pendingNavigationInvalidationTimerFired:(id)arg1;
- (void)_stopPendingNavigationTimer;
- (_Bool)_navigateToGadget:(id)arg1 animated:(_Bool)arg2 navigationBlock:(CDUnknownBlockType)arg3;
- (void)invalidateAnyPendingNavigation;
- (void)startPendingNavigationTimer;
- (void)navigateIfNeeded;
- (_Bool)navigateToGadgetDeferIfNeeded:(id)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (_Bool)navigateToGadgetWithIdDeferIfNeeded:(id)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (_Bool)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool hasPendingNavigation;
- (void)navigateToGadgetForCMMSuggestions;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg1;
- (void)navigateToSuggestionGadget:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToSuggestedCMMWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(_Bool)arg1;
- (void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToSharedAlbumInvitesAnimated:(_Bool)arg1;

@end

