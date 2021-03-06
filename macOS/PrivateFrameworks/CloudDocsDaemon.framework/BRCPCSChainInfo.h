//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCItemID, BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCPCSChainInfo : NSObject
{
    BOOL _itemType;
    unsigned int _chainState;
    BRCItemID *_itemID;
    BRCItemID *_parentID;
    BRFieldCKInfo *_structuralCKInfo;
    BRFieldCKInfo *_contentCKInfo;
}

@property(readonly, nonatomic) unsigned int chainState; // @synthesize chainState=_chainState;
@property(readonly, nonatomic) BRFieldCKInfo *contentCKInfo; // @synthesize contentCKInfo=_contentCKInfo;
@property(readonly, nonatomic) BRFieldCKInfo *structuralCKInfo; // @synthesize structuralCKInfo=_structuralCKInfo;
@property(readonly, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (id)initWithItemID:(id)arg1 parentID:(id)arg2 structuralCKInfo:(id)arg3 contentCKInfo:(id)arg4 itemType:(BOOL)arg5 chainState:(unsigned int)arg6;

@end

