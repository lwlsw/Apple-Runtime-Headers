//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUBonjourDevice, CUNANEndpoint, NSDictionary, NSString;

@interface CUNetServiceEndpoint : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
    CUBonjourDevice *_bonjourDevice;
    CUNANEndpoint *_nanEndpoint;
}

@property(retain, nonatomic) CUNANEndpoint *nanEndpoint; // @synthesize nanEndpoint=_nanEndpoint;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned int)updateWithNANEndpoint:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;

@end

