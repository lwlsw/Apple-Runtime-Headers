//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

#import <MapsSuggestions/MapsSuggestionsFilter-Protocol.h>

@class NSString;

@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>
{
    NSString *_name;
    CDUnknownBlockType _block;
}

+ (_Bool)isEnabled;
+ (id)filterWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueName;
- (_Bool)shouldKeepEntry:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 name:(struct NSString *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

