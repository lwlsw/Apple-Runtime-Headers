//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView, QCPatch;

@interface QCInspector : NSObject
{
    NSView *view;
    QCPatch *_patch;
    struct CGSize _minSize;
    void *_unused2[2];
}

+ (id)viewNibName;
+ (BOOL)accessInstanceVariablesDirectly;
- (void)dealloc;
- (id)viewTitle;
- (id)view;
- (void)resetView;
- (void)setupViewForPatch:(id)arg1;
- (id)patch;
- (void)didLoadNib;
- (id)initWithBundle:(id)arg1 nibName:(id)arg2;

@end

