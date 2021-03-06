//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXDataSectionManager.h>

@class NSDictionary;
@protocol PXOutlineDataSectionManagerDelegate;

@interface PXOutlineDataSectionManager : PXDataSectionManager
{
    NSDictionary *_dataSectionManagersByDataSectionObjects;
    id <PXOutlineDataSectionManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <PXOutlineDataSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)createDataSection;
- (void)rearrangeSectionContent;
- (id)childDataSectionManagerForOutlineObject:(id)arg1;
- (id)_changeDetailsForNewDataSection;

@end

