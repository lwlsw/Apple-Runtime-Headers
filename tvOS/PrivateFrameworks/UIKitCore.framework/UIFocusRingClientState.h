//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface UIFocusRingClientState : NSObject
{
    id <UIFocusItem> _currentFocusItem;
    NSMutableArray *_activeFocusLayers;
    NSMapTable *_activeFocusLayersToItems;
    NSString *_clientID;
}

@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSMapTable *activeFocusLayersToItems; // @synthesize activeFocusLayersToItems=_activeFocusLayersToItems;
@property(retain, nonatomic) NSMutableArray *activeFocusLayers; // @synthesize activeFocusLayers=_activeFocusLayers;
@property(nonatomic) __weak id <UIFocusItem> currentFocusItem; // @synthesize currentFocusItem=_currentFocusItem;
- (void).cxx_destruct;
- (id)initWithClientID:(id)arg1;

@end

