//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface NSData (IBBinaryArchivingAdditions) <IBBinaryArchiving>
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)ib_initWithPrettyBase64String:(id)arg1;
- (id)ib_prettyBase64String;
- (id)ib_prettyBase64StringWithLineLength:(long long)arg1 wrappedWithNewlines:(_Bool)arg2;
- (id)ib_base64DecodedData;
- (id)ib_base64EncodedData;
- (Class)ib_immutableClassForPlistOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

