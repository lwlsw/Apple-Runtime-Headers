//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ICFolderCustomNoteSortType : NSObject
{
    unsigned long long _order;
    unsigned long long _direction;
}

+ (id)touchBarItemTitleForOrder:(unsigned long long)arg1;
+ (id)sortTypeOrderValues;
+ (BOOL)isTagADirection:(long long)arg1;
+ (BOOL)isTagAnOrder:(long long)arg1;
+ (unsigned long long)sortTypeDirectionForTag:(unsigned long long)arg1;
+ (unsigned long long)sortTypeOrderForTag:(unsigned long long)arg1;
+ (unsigned long long)customOrderForGlobalSortType:(long long)arg1;
+ (id)currentDefaultMenuItemString;
+ (id)folderNoteSortTypeFromValue:(id)arg1;
+ (id)noteSortTypeDefaultAscending;
+ (id)folderNoteSortTypeWithOrder:(unsigned long long)arg1 direction:(unsigned long long)arg2;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, nonatomic) NSString *buttonTitleDescription;
- (BOOL)calcValiditityAndConfigureMenuItemForCustomSorting:(id)arg1;
- (id)stringNameForDirection:(unsigned long long)arg1 order:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isAscending;
@property(readonly, nonatomic) BOOL isDefault;
- (id)debugStringNameForOrder:(unsigned long long)arg1;
- (id)description;
@property(readonly, nonatomic) NSNumber *valueRepresentation;
- (id)folderNoteSortTypeByChangingDirection;
- (id)folderNoteSortTypeByChangingOrder:(unsigned long long)arg1;

@end

