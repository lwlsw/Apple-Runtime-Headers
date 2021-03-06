//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, NSOrderedSet, NSPredicate;
@protocol _UIArrayControllerDelegate;

@interface _UIArrayController : NSObject
{
    BOOL _firstUpdateSent;
    BOOL _invalidated;
    NSArray *_sortDescriptors;
    NSPredicate *_predicate;
    id <_UIArrayControllerDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    NSOrderedSet *_lastSnapshot;
}

@property(copy, nonatomic) NSOrderedSet *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <_UIArrayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (void)processUpdate:(id)arg1 changedObjects:(id)arg2;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
- (BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (void)invalidate;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

