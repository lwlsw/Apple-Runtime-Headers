//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUIItemViewElement : SKUIViewElement
{
    SKUIViewElementText *_itemText;
    _Bool _selected;
}

@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) SKUIViewElementText *itemText; // @synthesize itemText=_itemText;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

