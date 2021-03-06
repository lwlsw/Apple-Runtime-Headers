//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNAvatarViewController-Protocol.h>
#import <ContactsUI/CNAvatarViewController_Private-Protocol.h>

@class CNContactStore, NSArray, NSString, PRPersonaStore, UIView;
@protocol CNAvatarViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPRLikenessResolver;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController>
{
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
}

+ (Class)defaultImplementation;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;
@property(nonatomic) __weak id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate; // @synthesize objectViewControllerDelegate;
- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, nonatomic) CNContactStore *contactStore; // @dynamic contactStore;
@property(copy, nonatomic) NSArray *contacts; // @dynamic contacts;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNAvatarViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @dynamic likenessResolver;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @dynamic personaStore;
@property(readonly) Class superclass;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @dynamic threeDTouchEnabled;
@property(readonly, nonatomic) UIView *view;

@end

