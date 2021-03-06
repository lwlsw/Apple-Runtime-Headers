//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

#import <ChatKit/CKIMComposeRecipient-Protocol.h>

@class IMHandle, NSString;

@interface CKIMComposeRecipient : CNComposeRecipient <CKIMComposeRecipient>
{
    IMHandle *_handle;
}

@property(readonly, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (void)setIdentifier:(int)arg1;
- (_Bool)isRemovableFromSearchResults;
- (id)objectForDragType:(id)arg1;
- (id)supportedDragTypes;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)uncommentedAddress;
- (id)displayString;
- (id)compositeName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)unlocalizedLabel;
- (int)identifier;
- (id)commentedAddress;
- (id)address;
- (void)releaseIMReferences;
- (id)initWithHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

