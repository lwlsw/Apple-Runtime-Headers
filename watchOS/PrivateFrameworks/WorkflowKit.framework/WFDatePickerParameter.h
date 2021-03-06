//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSDate;

@interface WFDatePickerParameter : WFParameter
{
    int _datePickerMode;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
}

@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) int datePickerMode; // @synthesize datePickerMode=_datePickerMode;
- (void).cxx_destruct;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

