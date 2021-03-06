//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPFetcherResponse.h>

#import <LinkPresentation/LPFetcherURLResponse-Protocol.h>

@class LPImage, NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherImageResponse : LPFetcherResponse <LPFetcherURLResponse>
{
    LPImage *_image;
}

+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;
+ (id)imagePropertiesForFetcher:(id)arg1;
+ (BOOL)isValidMIMEType:(id)arg1;
@property(readonly, retain, nonatomic) LPImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 fetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

