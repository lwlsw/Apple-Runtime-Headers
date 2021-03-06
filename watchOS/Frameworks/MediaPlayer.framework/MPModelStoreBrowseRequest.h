//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class MPModelStoreBrowseResponse, NSURL;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest
{
    NSURL *_loadAdditionalContentURL;
    MPModelStoreBrowseResponse *_previousRetrievedNestedResponse;
    int _domain;
    int _filteringPolicy;
    MPModelStoreBrowseResponse *_previousResponse;
    int _requestEndpoint;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) int requestEndpoint; // @synthesize requestEndpoint=_requestEndpoint;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(nonatomic) int filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
@property(nonatomic) int domain; // @synthesize domain=_domain;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse; // @synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @synthesize loadAdditionalContentURL=_loadAdditionalContentURL;
- (void).cxx_destruct;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

