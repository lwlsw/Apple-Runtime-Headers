//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudQuotaDaemon/ICQDaemonPersisted.h>

@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted
{
    NSArray *_serverStubs;
    NSArray *_buddyStubs;
}

+ (id)persistenceKey;
+ (id)daemonOfferStubsDictionarySample;
@property(readonly, nonatomic) NSArray *buddyStubs; // @synthesize buddyStubs=_buddyStubs;
@property(readonly, nonatomic) NSArray *serverStubs; // @synthesize serverStubs=_serverStubs;
- (void).cxx_destruct;
- (id)_chooseStubFromServerStubs:(id)arg1 conditions:(id)arg2;
- (_Bool)_isValidServerStubs:(id)arg1 key:(id)arg2;
- (void)_initServerStubsFromServerDictionary;
- (id)sortedServerStubs:(id)arg1;
- (void)setServerDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)chooseBuddyStubForConditions:(id)arg1;
- (id)chooseBuddyStub;
- (id)chooseFirstStub;
- (id)chooseStubForConditions:(id)arg1;
- (id)chooseStub;
- (id)_chooseStubFromServerStubs:(id)arg1 offerType:(long long)arg2;
- (id)chooseBuddyStubForOfferType:(long long)arg1;
- (id)chooseStubForOfferType:(long long)arg1;

@end

