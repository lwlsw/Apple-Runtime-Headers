//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSSockAddrWrapper, NSData, NSString;

@interface IDSInterfaceAddress : NSObject
{
    IDSSockAddrWrapper *_address;
    IDSSockAddrWrapper *_external;
    IDSSockAddrWrapper *_netmask;
    IDSSockAddrWrapper *_destination;
    NSString *_name;
    unsigned int _index;
    NSString *_delegatedName;
    unsigned int _delegatedIndex;
    NSData *_bssid;
    _Bool _AWDL;
    _Bool _Cellular;
    _Bool _temporary;
    _Bool _companionLink;
    _Bool _expensive;
    _Bool _constrained;
}

+ (id)interfaceAddress:(struct ifaddrs *)arg1 eflags:(unsigned long long)arg2 v6flags:(int)arg3 iftype:(int)arg4;
+ (id)interfaceAddressWithTransmittedBytes:(char *)arg1 length:(long)arg2 withLocalInterfaceName:(id)arg3;
+ (id)BSSIDWithInterfaceName:(id)arg1;
@property(nonatomic) _Bool constrained; // @synthesize constrained=_constrained;
@property(readonly, nonatomic) _Bool expensive; // @synthesize expensive=_expensive;
@property(readonly, getter=isCompanionLink) _Bool companionLink; // @synthesize companionLink=_companionLink;
@property(readonly, getter=isTemporaryIPv6) _Bool temporary; // @synthesize temporary=_temporary;
@property(readonly) NSData *bssid; // @synthesize bssid=_bssid;
@property(readonly, getter=isCellular) _Bool Cellular; // @synthesize Cellular=_Cellular;
@property(readonly, getter=isAWDL) _Bool AWDL; // @synthesize AWDL=_AWDL;
@property(readonly) unsigned int delegatedIndex; // @synthesize delegatedIndex=_delegatedIndex;
@property(readonly) NSString *delegatedName; // @synthesize delegatedName=_delegatedName;
@property(readonly) unsigned int index; // @synthesize index=_index;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) IDSSockAddrWrapper *destination; // @synthesize destination=_destination;
@property(readonly) IDSSockAddrWrapper *netmask; // @synthesize netmask=_netmask;
@property(copy) IDSSockAddrWrapper *external; // @synthesize external=_external;
@property(readonly) IDSSockAddrWrapper *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)initWithInterfaceAddress:(struct ifaddrs *)arg1 bflags:(unsigned char)arg2 bssid:(char *)arg3 bssidLength:(unsigned char)arg4;
- (long)getTransmittableBytes:(char *)arg1 withPrefixByte:(unsigned char)arg2;
@property(readonly) unsigned int IPVersion;
- (id)description;

@end

