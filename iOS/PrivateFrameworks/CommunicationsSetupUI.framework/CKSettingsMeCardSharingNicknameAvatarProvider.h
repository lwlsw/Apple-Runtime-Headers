//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommunicationsSetupUI/CNMeCardSharingAvatarProvider-Protocol.h>

@class NSData, NSString;

@interface CKSettingsMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider>
{
    NSData *_imageData;
}

@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)generateAvatarImageOfSize:(struct CGSize)arg1 imageHandler:(CDUnknownBlockType)arg2;
- (id)initWithImageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

