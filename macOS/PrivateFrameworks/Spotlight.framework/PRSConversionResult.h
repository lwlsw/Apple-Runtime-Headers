//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Spotlight/PRSCalculatorResult.h>

#import <Spotlight/NSCoding-Protocol.h>
#import <Spotlight/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface PRSConversionResult : PRSCalculatorResult <NSCoding, NSSecureCoding>
{
    NSString *_inputUnit;
    NSNumber *_inputValue;
    NSString *_localizedInputValueAndUnit;
    NSString *_conversionType;
    NSArray *_conversions;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSArray *conversions; // @synthesize conversions=_conversions;
@property(readonly) NSString *conversionType; // @synthesize conversionType=_conversionType;
@property(readonly) NSString *localizedInputValueAndUnit; // @synthesize localizedInputValueAndUnit=_localizedInputValueAndUnit;
@property(readonly) NSNumber *inputValue; // @synthesize inputValue=_inputValue;
@property(readonly) NSString *inputUnit; // @synthesize inputUnit=_inputUnit;
- (void).cxx_destruct;
-     // Error parsing type: T16@0:8, name: rank
-     // Error parsing type: T16@0:8, name: score
- (BOOL)shouldNotBeTopHit;
- (BOOL)isConversion;
- (id)initWithConverter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

