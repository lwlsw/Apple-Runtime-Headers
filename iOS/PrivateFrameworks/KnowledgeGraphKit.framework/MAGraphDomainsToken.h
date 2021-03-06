//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAGraph, NSArray;

@interface MAGraphDomainsToken : NSObject
{
    _Bool _deregistered;
    NSArray *_domains;
    MAGraph *_graph;
}

@property(nonatomic) _Bool deregistered; // @synthesize deregistered=_deregistered;
@property(retain, nonatomic) MAGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSArray *domains; // @synthesize domains=_domains;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToGraphDomainToken:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)deregister;
- (id)initWithDomains:(id)arg1 graph:(id)arg2;

@end

