//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSArray, NSString, WFPhotoAccessResource;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver>
{
    NSArray *_possibleStates;
    id _defaultSerializedRepresentation;
    WFPhotoAccessResource *_photoAccessResource;
}

+ (id)referencedActionResourceClasses;
+ (_Bool)hasPhotosAccess;
@property(retain, nonatomic) WFPhotoAccessResource *photoAccessResource; // @synthesize photoAccessResource=_photoAccessResource;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)resourceAvailabilityChanged;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

