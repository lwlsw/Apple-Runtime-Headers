//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding>
{
    NSString *_brandName;
    NSString *_genericName;
    int _foodType;
    NSDictionary *_nutritionFacts;
    double _recommendedNumServings;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double recommendedNumServings; // @synthesize recommendedNumServings=_recommendedNumServings;
@property(copy, nonatomic) NSDictionary *nutritionFacts; // @synthesize nutritionFacts=_nutritionFacts;
@property(nonatomic) int foodType; // @synthesize foodType=_foodType;
@property(copy, nonatomic) NSString *genericName; // @synthesize genericName=_genericName;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToHDDemoDataFoodObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(int)arg3 nutritionFacts:(id)arg4;

@end

