//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLUniformTypeIdentifierIdentity-Protocol.h>

@class NSString;

@interface PLInMemoryOnlyUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>
{
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool isPlayableVideo;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) _Bool primaryImageFormat;
@property(readonly, nonatomic) _Bool conformsToRawImage;
@property(readonly, nonatomic) _Bool conformsToMovie;
@property(readonly, nonatomic) _Bool conformsToImage;
- (_Bool)conformsToAudio;
- (_Bool)conformsToJPEG;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

