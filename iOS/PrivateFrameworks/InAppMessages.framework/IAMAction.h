//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface IAMAction : NSObject <NSCopying>
{
    _Bool _requiresDelegate;
    NSString *_identifier;
    NSString *_displayText;
    NSURL *_url;
    NSDictionary *_actionParameters;
}

@property(readonly, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(readonly, nonatomic) _Bool requiresDelegate; // @synthesize requiresDelegate=_requiresDelegate;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithICAction:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayText:(id)arg2 url:(id)arg3 requiresDelegate:(_Bool)arg4 actionParameters:(id)arg5;

@end

