//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class NSString;

@interface WFModuleParameterSelectionRowComponent : CKCompositeComponent
{
    CKTypedComponentAction_693269b8 _action;
    NSString *_identifier;
}

+ (id)newWithIdentifier:(id)arg1 title:(id)arg2 disabledSubtitle:(id)arg3 enabled:(_Bool)arg4 action:(CKTypedComponentAction_693269b8)arg5 appearance:(id)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleParameterLayoutPressed;

@end

