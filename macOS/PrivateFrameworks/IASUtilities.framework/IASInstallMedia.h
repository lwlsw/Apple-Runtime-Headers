//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface IASInstallMedia : NSObject
{
    NSURL *_URL;
    NSString *_name;
    NSURL *_iconURL;
    long long _kind;
    NSMutableArray *_submedia;
    long long _mediaState;
}

@property long long mediaState; // @synthesize mediaState=_mediaState;
@property(retain) NSMutableArray *submedia; // @synthesize submedia=_submedia;
@property long long kind; // @synthesize kind=_kind;
@property(copy) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)detachWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)attachWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithURL:(id)arg1;

@end

