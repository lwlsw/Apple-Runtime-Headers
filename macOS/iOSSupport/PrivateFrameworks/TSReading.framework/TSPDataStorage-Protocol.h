//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class AVAsset, NSData, NSDictionary, NSString, NSURL, SFUCryptoKey, TSPData;
@protocol TSPPackage;

@protocol TSPDataStorage <NSObject>
@property(readonly, nonatomic) BOOL readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (void)performReadWithAccessor:(void (^)(NSURL *))arg1;
- (void)performIOChannelReadWithAccessor:(void (^)(id <TSUReadChannel>))arg1;
- (BOOL)isInPackage:(id <TSPPackage>)arg1;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 usingResourceLoaderWithContentTypeUTI:(NSString *)arg2;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 contentTypeUTI:(NSString *)arg2;
- (NSData *)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (NSData *)bookmarkDataWithOptions:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, nonatomic) BOOL needsDownload;
- (void)addDownloadObserver:(id)arg1 forData:(TSPData *)arg2 completionHandler:(void (^)(id, TSPData *, long long))arg3;
- (BOOL)copyToTemporaryURL:(NSURL *)arg1;
- (id)storageForDataCopyFromOtherContext;
@end

