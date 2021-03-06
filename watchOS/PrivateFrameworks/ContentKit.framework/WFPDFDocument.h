//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WFPDFDocument : NSObject
{
    _Bool _encrypted;
    _Bool _locked;
    _Bool _allowsPrinting;
    _Bool _allowsCopying;
    struct CGPDFDocument *_documentRef;
    NSArray *_pages;
}

@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(nonatomic) _Bool allowsCopying; // @synthesize allowsCopying=_allowsCopying;
@property(nonatomic) _Bool allowsPrinting; // @synthesize allowsPrinting=_allowsPrinting;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(nonatomic, getter=isEncrypted) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) struct CGPDFDocument *documentRef; // @synthesize documentRef=_documentRef;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class pageClass;
@property(readonly, nonatomic) unsigned int expectedPageCount;
- (_Bool)unlockWithPassword:(id)arg1;
@property(readonly, nonatomic) int minorVersion;
@property(readonly, nonatomic) int majorVersion;
- (void)dealloc;
- (id)initWithDocumentRef:(struct CGPDFDocument *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

