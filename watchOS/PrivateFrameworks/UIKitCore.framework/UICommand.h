//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIMenuElement.h>

#import <UIKitCore/_UIMenuLeaf-Protocol.h>

@class NSArray, NSString, UIImage;

@interface UICommand : UIMenuElement <_UIMenuLeaf>
{
    NSString *_discoverabilityTitle;
    SEL _action;
    id _propertyList;
    unsigned int _attributes;
    int _state;
    NSArray *_alternates;
    id __target;
}

+ (_Bool)supportsSecureCoding;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4;
+ (id)_defaultCommandForAction:(SEL)arg1;
+ (id)_defaultCommands;
@property(readonly, nonatomic) id _target; // @synthesize _target=__target;
@property(readonly, nonatomic) NSArray *alternates; // @synthesize alternates=_alternates;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) unsigned int attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (int)_leafKeyModifierFlags;
- (id)_leafKeyInput;
- (id)_leafAlternates;
- (id)_identifier;
- (id)_immutableCopy;
- (id)_alternateForModifierFlags:(int)arg1;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) UIImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)initWithCommand:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned int)arg7 state:(int)arg8;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

