//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class INIntent;

@interface NSExtensionContext (ShareExtension)
@property(readonly, nonatomic) INIntent *intent;
- (void)_intents_setIntent:(id)arg1;
- (id)_intents_intent;
- (void)_intents_setAccessedIntent:(_Bool)arg1;
- (_Bool)_intents_accessedIntent;
@end

