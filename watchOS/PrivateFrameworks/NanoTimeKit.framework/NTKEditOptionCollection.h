//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NTKEditOptionCollection : NSObject
{
    int _mode;
    NSString *_localizedName;
    NSArray *_options;
    unsigned int _collectionType;
}

+ (id)editOptionCollectionWithEditMode:(int)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned int)arg4;
@property(nonatomic) unsigned int collectionType; // @synthesize collectionType=_collectionType;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEditMode:(int)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned int)arg4;

@end

