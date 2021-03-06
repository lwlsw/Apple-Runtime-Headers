//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDraggingSession, UINSDragSession;
@protocol UINSDragOperationMasks, UINSDragSessionHandler;

__attribute__((visibility("hidden")))
@interface _UINSSessionWrapper : NSObject
{
    NSDraggingSession *_internalDragSession;
    UINSDragSession *_externalDragSession;
    id <UINSDragSessionHandler> _sessionHandler;
    id <UINSDragOperationMasks> _operationMasks;
}

@property(retain) id <UINSDragOperationMasks> operationMasks; // @synthesize operationMasks=_operationMasks;
@property(retain) id <UINSDragSessionHandler> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(retain) UINSDragSession *externalDragSession; // @synthesize externalDragSession=_externalDragSession;
@property(retain) NSDraggingSession *internalDragSession; // @synthesize internalDragSession=_internalDragSession;
- (void).cxx_destruct;

@end

