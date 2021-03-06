//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

#import <GameCenterUI/GKDashboardTurnBasedInviteViewControllerDelegate-Protocol.h>

@class GKCollectionViewController, GKDashboardFocusButton, GKGame, GKMatchRequest, NSMutableArray, NSString;
@protocol GKTurnBasedMatchesViewControllerDelegate;

@interface GKTurnBasedMatchesViewController : GKDashboardCollectionViewController <GKDashboardTurnBasedInviteViewControllerDelegate>
{
    _Bool _showExistingMatches;
    _Bool _showPlay;
    _Bool _showQuit;
    GKGame *_game;
    GKMatchRequest *_matchRequest;
    GKCollectionViewController *_masterViewController;
    id <GKTurnBasedMatchesViewControllerDelegate> _delegate;
    NSMutableArray *_activeMatches;
    NSMutableArray *_completeMatches;
    GKDashboardFocusButton *_createGameButton;
    NSString *_matchIDWaitingForTurnEvent;
}

@property(retain, nonatomic) NSString *matchIDWaitingForTurnEvent; // @synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent;
@property(retain, nonatomic) GKDashboardFocusButton *createGameButton; // @synthesize createGameButton=_createGameButton;
@property(retain, nonatomic) NSMutableArray *completeMatches; // @synthesize completeMatches=_completeMatches;
@property(retain, nonatomic) NSMutableArray *activeMatches; // @synthesize activeMatches=_activeMatches;
@property(nonatomic) _Bool showQuit; // @synthesize showQuit=_showQuit;
@property(nonatomic) _Bool showPlay; // @synthesize showPlay=_showPlay;
@property(nonatomic) _Bool showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(nonatomic) __weak id <GKTurnBasedMatchesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GKCollectionViewController *masterViewController; // @synthesize masterViewController=_masterViewController;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void).cxx_destruct;
- (void)gameButtonPressed;
- (void)doneButtonPressed;
- (_Bool)isInGame;
- (void)launchGameAndShowMatch:(id)arg1;
- (void)showMatch:(id)arg1;
- (void)notifyGameWithMatch:(id)arg1 orError:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)finishWithError:(id)arg1;
- (void)didPressNewGameButton:(id)arg1;
- (_Bool)hasData;
- (void)loadData;
- (id)preferredFocusEnvironments;
- (void)showInviteControllerAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didPressMenuButton;
- (void)viewDidLoad;
- (id)initWithMatchRequest:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

