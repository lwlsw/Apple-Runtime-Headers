//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICCollaborationColorManager : NSObject
{
    NSMutableDictionary *_userIDToColorsDict;
    NSMutableArray *_colorUsageCounts;
    unsigned long long _colorUsageCountMinimum;
}

+ (id)participantColors;
@property(nonatomic) unsigned long long colorUsageCountMinimum; // @synthesize colorUsageCountMinimum=_colorUsageCountMinimum;
@property(retain, nonatomic) NSMutableArray *colorUsageCounts; // @synthesize colorUsageCounts=_colorUsageCounts;
@property(retain, nonatomic) NSMutableDictionary *userIDToColorsDict; // @synthesize userIDToColorsDict=_userIDToColorsDict;
- (void).cxx_destruct;
- (id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2;
- (id)containerScopedUserRecordNameForAccount:(id)arg1;
- (id)baseColorValuesForUserID:(id)arg1;
- (struct UIColor *)highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3 darkAppearance:(_Bool)arg4;
- (id)init;

@end

